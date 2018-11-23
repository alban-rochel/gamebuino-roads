#include "GraphicsManager.h"

#include "CarSprites.h"
#include "BackgroundWest.h"

using namespace roads;

#define MEMORY_SEGMENT_SIZE 8192
uint8_t memory[MEMORY_SEGMENT_SIZE];
void* nextAvailableSegment;

float accelFromSpeed(float speed)
{
  // max speed : MAX_SPEED_Z

  if(speed < 0.5)
  {
    return 0.01;
  }
  else if(speed < 1.)
  {
    return 0.005;
  }

  return 0.002;
  
}

void printDirectory(File dir, int numTabs) {
  if(!dir)
    return;
  while (true)
  {

    File entry =  dir.openNextFile();
    if (! entry) {
      // no more files
      return;
    }
    for (uint8_t i = 0; i < numTabs; i++) {
      SerialUSB.printf("\t");
    }
    char name[20];
    entry.getName(name, 20);
    SerialUSB.printf("%s\n", name);
    entry.close();
  }
}

inline void* mphAlloc(uint16_t size)
{
  if(nextAvailableSegment + size >= memory + MEMORY_SEGMENT_SIZE)
  {
    return NULL;
  }

  void* res = nextAvailableSegment;
  nextAvailableSegment += size;
  
  return res;
}

void resetAlloc()
{
  nextAvailableSegment = memory;
}

int32_t allocFreeRam()
{
  return memory + MEMORY_SEGMENT_SIZE - (uint8_t*)nextAvailableSegment;
}

extern SdFat SD;

void displayFile(const char* filename)
{
  resetAlloc();
  uint16_t* strip1 = (uint16_t*) mphAlloc(STRIP_SIZE_BYTES);
  uint16_t* strip2 = (uint16_t*) mphAlloc(STRIP_SIZE_BYTES);
  GraphicsManager gm(strip1, strip2);

SdFile rdfile(filename, O_READ);

  // check for open error
  if (!rdfile.isOpen())
  {
    SerialUSB.printf("Failed opening file %s\n", filename);
    return;
  }

SerialUSB.printf("Size %i\n", rdfile.available());

  uint16_t* strip = gm.StartFrame();
  uint16_t* stripCursor = strip;

  for(unsigned int y = 0; y < 2/*SCREEN_HEIGHT/8*/; ++y)
  {
    for(unsigned int index = 0; index < STRIP_SIZE_BYTES; ++index)
    {
      stripCursor[index] = rdfile.read();
    }
    strip = gm.CommitStrip();
    stripCursor = strip;

  }

   gm.EndFrame();
   
  /*bool exists = SD.exists(filename);
  
  if(!exists)
  {
    SerialUSB.printf("Cannot find file %s\n", filename);
    {
      SerialUSB.printf("Content of /Roads\n");
      File root = SD.open("/Roads");
      printDirectory(root, 0);
      root.close();
    }
    {
      SerialUSB.printf("Content of /\n");
      File root = SD.open("/");
      printDirectory(root, 0);
      root.close();
    }
    return;
  }

  File f = SD.open(filename, FILE_READ);
  if(!f)
  {
        SerialUSB.printf("Failed opening file %s\n", filename);
    return;
  }

  uint16_t* strip = gm.StartFrame();
  uint16_t* stripCursor = strip;

  for(unsigned int y = 0; y < SCREEN_HEIGHT/8; ++y)
  {
    for(unsigned int line = 0; line < 8; ++line)
    {
      
      int size = f.read(stripCursor, 160);
      SerialUSB.printf("size1: %i\n", size);
      f.flush();
      stripCursor+=160;
      size = f.read(stripCursor, 160);
      SerialUSB.printf("size2: %i\n", size);
      f.flush();
      stripCursor+=160;
    }
    strip = gm.CommitStrip();
    stripCursor = strip;

  }

   gm.EndFrame();
  f.close();*/
}

LevelConfig levelSelectionMenu() noexcept
{
  LevelConfig config;
  config.bumperWidth  = 6;
  config.roadWidth    = 140;
  config.lineWidth    = 4;
  config.sceneryObjectsCount = MAX_SCENERY_OBJECTS;
  config.sceneryObjectsIndexStart = 3;
  config.sceneryObjectsIndexEnd = 6;
  config.staticObstaclesCount = MAX_STATIC_OBSTACLES;
  config.staticObstaclesIndexStart = 5;
  config.staticObstaclesIndexEnd = 6;
/*
  displayFile("/Roads/brown.mph");

  while(true)
  {
    while (!gb.update());

    if (gb.buttons.repeat(BUTTON_LEFT, 10))
    {
      displayFile("/Roads/brown.mph");
    }
    if (gb.buttons.repeat(BUTTON_RIGHT, 10))
    {
      displayFile("/Roads/brown2.mph");
    }

    if (gb.buttons.pressed(BUTTON_MENU))
    {
      SerialUSB.printf("CPU: %i\n", gb.getCpuLoad());
      SerialUSB.printf("MEM: %i\n", gb.getFreeRam());
      SerialUSB.printf("REMAIN: %i\n", allocFreeRam());
    }
    
    if(gb.buttons.pressed(BUTTON_A))
    {
      return config;
    }
  }*/

  return config;
}

void initDepthInfo( const LevelConfig& config,
                    Level& level,
                    Z_POSITION& minSegmentSize,
                    Z_POSITION& maxSegmentSize) noexcept
{
  SCALE_FACTOR scaleFactor;
  int32_t offset;
  for(unsigned int rowIndex = 0; rowIndex < DEPTH_LEVEL_COUNT; ++rowIndex)
  {
      float y = rowIndex * Y_E_METERS / DEPTH_LEVEL_COUNT;
      DepthInfo& depthInfo = level.depthLevels[rowIndex];
      depthInfo.z = (Z_POSITION)(((-Z_E) / (Y_E_METERS - y) * Y_E_METERS + Z_E) * (1 << Z_POSITION_SHIFT));

    //We consider that at the horizon, the road is 10 times narrower than at the bottom of the viewport
      depthInfo.scaleFactor = 1.f - (0.9f * (rowIndex)) / DEPTH_LEVEL_COUNT;

      scaleFactor = *(ScaleFactor + rowIndex);

      offset = config.lineWidth >> 1;
      depthInfo.lineWidth = (int16_t)((scaleFactor*offset) >> SCALE_FACTOR_SHIFT);
      offset += (config.roadWidth) >> 1;
      depthInfo.lineRoadWidth = (int16_t)((scaleFactor*offset) >> SCALE_FACTOR_SHIFT);
      offset += config.bumperWidth;
      depthInfo.lineRoadBumperWidth = (int16_t)((scaleFactor*offset) >> SCALE_FACTOR_SHIFT);

      if(depthInfo.lineWidth == 0)
      {
        depthInfo.lineWidth = 1;
      }
      
      if(depthInfo.lineWidth == depthInfo.lineRoadWidth)
      {
        ++depthInfo.lineWidth;
      }

      if(depthInfo.lineRoadWidth == depthInfo.lineRoadBumperWidth)
      {
        ++depthInfo.lineRoadBumperWidth;
      }
  }

  minSegmentSize = (level.depthLevels[DEPTH_LEVEL_COUNT-1].z >> 1) + 1;
  maxSegmentSize = minSegmentSize + (minSegmentSize >> 1);
}

void initPalette(uint16_t& skyColor,
                 Level& level) noexcept
{
  skyColor = COLOR_565(150, 200, 255);
  level.trackPalette[COLOR_TRACK_GRASS_INDEX]  = /*COLOR_565(93, 130, 37)*/COLOR_565(147, 52, 28); level.trackPalette[COLOR_TRACK_SIZE + COLOR_TRACK_GRASS_INDEX]  = /*COLOR_565(118, 160, 54)*/COLOR_565(187, 126, 83);
  level.trackPalette[COLOR_TRACK_BUMPER_INDEX] = COLOR_565(178, 32, 32); level.trackPalette[COLOR_TRACK_SIZE + COLOR_TRACK_BUMPER_INDEX] = COLOR_565(255, 255, 255);
  level.trackPalette[COLOR_TRACK_ROAD_INDEX]   = COLOR_565(142, 142, 142); level.trackPalette[COLOR_TRACK_SIZE + COLOR_TRACK_ROAD_INDEX] = COLOR_565(186, 186, 186);
  level.trackPalette[COLOR_TRACK_LINE_INDEX]   = COLOR_565(255, 255, 255); level.trackPalette[COLOR_TRACK_SIZE + COLOR_TRACK_LINE_INDEX] = level.trackPalette[COLOR_TRACK_SIZE + COLOR_TRACK_ROAD_INDEX];
}

void computeTurns(CarInfo& carInfo, Level& level) noexcept
{
  level.depthLevelToX[0] = SCREEN_WIDTH / 2 + carInfo.posX;
  float x = level.depthLevelToX[0];
  Z_POSITION previousZ = level.depthLevels[0].z;
  Z_POSITION currentZ = previousZ;
  Z_POSITION absoluteZ = 0;
  int32_t deltaZ = 0;
  //centering = SCREEN_WIDTH / 2 + (carInfo.posX);
  int32_t totalOffset = 0;
  for(int16_t depthLevel = 1; depthLevel < DEPTH_LEVEL_COUNT; ++depthLevel)
  {
    currentZ = level.depthLevels[depthLevel].z;
    deltaZ = (currentZ - previousZ);
    absoluteZ = currentZ + carInfo.posZ;
    //float dzf = deltaZ / 256.f;
    
    if(absoluteZ < level.segments[1].segmentStartZ)
    {
      totalOffset += (level.segments[0].xCurvature * deltaZ);
    }
    else
    {
      if(absoluteZ < level.segments[2].segmentStartZ)
      {
        totalOffset += (level.segments[1].xCurvature * deltaZ);
      }
      else
      {
        totalOffset += (level.segments[2].xCurvature * deltaZ);
      }
    }

    x = SCREEN_WIDTH / 2 + (carInfo.posX + (totalOffset >> (ROAD_CURVATURE_X_SHIFT + Z_POSITION_SHIFT))) * level.depthLevels[depthLevel].scaleFactor;
    level.depthLevelToX[depthLevel] = x;
    previousZ = currentZ;
  }
}

void computeHills(CarInfo& carInfo, Level& level) noexcept
{
    float prevZ = 0.f;
    float totalOffset = 0.f;

    float currZIndex = 0.f;
    //float totalCurvature = 0.f;

    int16_t zIndex = 0;
    int16_t y=0;

    while(zIndex < DEPTH_LEVEL_COUNT && y < SCREEN_HEIGHT && zIndex >= 0)
    {
      level.lineToDepthLevel[SCREEN_HEIGHT - 1 - y] = zIndex;

      const DepthInfo& di = level.depthLevels[zIndex];
      
      if(di.z + carInfo.posZ < level.segments[1].segmentStartZ)
      {
        totalOffset += level.segments[0].zCurvature * di.scaleFactor;
      }
      else
      {
        if(di.z + carInfo.posZ < level.segments[2].segmentStartZ)
        {
          totalOffset += level.segments[1].zCurvature * di.scaleFactor;
        }
        else
        {
          totalOffset += level.segments[2].zCurvature * di.scaleFactor;
        }
      }

      currZIndex = y + totalOffset;
      zIndex = currZIndex + 0.5f;
      ++y;
    }
    
    while(y < SCREEN_HEIGHT)
    {
      level.lineToDepthLevel[SCREEN_HEIGHT - 1 - y] = SKY_Z;
      ++y;
    }
}

void createSceneryObject(Level& level, SceneryObject& object, Z_POSITION zPos, const LevelConfig& config)
{
  int16_t posX = random(-30, 30);
  if(posX > 0)
  {
    object.posX = config.roadWidth/2 + 20 + posX;
  }
  else
  {
    object.posX = - config.roadWidth/2 - 20 - posX;
  }
  object.posZ = zPos + random(0, level.depthLevels[DEPTH_LEVEL_COUNT-1].z/2);
  object.sprite = level.sprites + random(config.sceneryObjectsIndexStart, config.sceneryObjectsIndexEnd);
}

void createSceneryObjects(Level& level, const LevelConfig& config)
{
  for(uint8_t index = 0; index < config.sceneryObjectsCount; ++index)
  {
    SceneryObject& object = level.sceneryObjects[index];
    createSceneryObject(level, object, 0, config);
  }
}

void updateSceneryObjects(Level& level, const CarInfo& carInfo, const LevelConfig& config)
{
  for(uint8_t index = 0; index < config.sceneryObjectsCount; ++index)
  {
    SceneryObject& object = level.sceneryObjects[index];
    if(object.posZ < carInfo.posZ)
    {
      createSceneryObject(level, object, carInfo.posZ + level.depthLevels[DEPTH_LEVEL_COUNT-1].z, config);
    }
  }
}

void createStaticObstacle(Level& level, StaticObstacle& object, Z_POSITION zPos, const LevelConfig& config)
{
  object.posX = random(- config.roadWidth/2, config.roadWidth/2);
  object.posZ = zPos + random(0, level.depthLevels[DEPTH_LEVEL_COUNT-1].z/2);
  object.sprite = level.sprites + random(config.staticObstaclesIndexStart, config.staticObstaclesIndexEnd);
}

void createStaticObstacles(Level& level, const LevelConfig& config)
{
    for(uint8_t index = 0; index < config.staticObstaclesCount; ++index)
  {
    StaticObstacle& object = level.staticObstacles[index];
    createStaticObstacle(level, object, 0, config);
  }
}

void updateStaticObstacles(Level& level, const CarInfo& carInfo, const LevelConfig& config)
{
  for(uint8_t index = 0; index < config.staticObstaclesCount; ++index)
  {
    StaticObstacle& object = level.staticObstacles[index];
    if(object.posZ < carInfo.posZ)
    {
      createStaticObstacle(level, object, carInfo.posZ + level.depthLevels[DEPTH_LEVEL_COUNT-1].z, config);
    }
  }
}

void updateMobileObstacles( Level& level, const CarInfo& carInfo, const LevelConfig& config){}

uint8_t computeDrawable(Level& level, int16_t posX, Z_POSITION posZ, SpriteDefinition* sprite, const CarInfo& carInfo, uint8_t index)
{
  uint8_t drawableLine = -1;
  Z_POSITION prevZ = Z_POSITION_MAX;
  
    for(unsigned int line = 0; line < SCREEN_HEIGHT && drawableLine == (uint8_t)-1; ++line)
    {
      if(level.lineToDepthLevel[line] != SKY_Z)
      {
        
        if(level.depthLevels[level.lineToDepthLevel[line]].z+carInfo.posZ <= posZ && prevZ > posZ)
        {
          drawableLine = line;
        }
        prevZ = level.depthLevels[level.lineToDepthLevel[line]].z+carInfo.posZ;
      }
    }

    if(drawableLine != -1)
  {
    Drawable& drawable = level.drawables[index];
    drawable.sprite = sprite;
    
    SCALE_FACTOR scale = ScaleFactor[level.lineToDepthLevel[drawableLine]];
    if(scale <= SCALE_FACTOR_EIGHTH)
    {
      drawable.zoomPattern = 8;
    }
    else if(scale <= SCALE_FACTOR_QUARTER)
    {
      drawable.zoomPattern = 4;
    }
    else if(scale <= SCALE_FACTOR_HALF)
    {
      drawable.zoomPattern = 2;
    }
    else
    {
      drawable.zoomPattern = 1;
    }

    drawable.xStart = level.depthLevelToX[level.lineToDepthLevel[drawableLine]] - ((scale * posX) >> SCALE_FACTOR_SHIFT);
    
    uint16_t actualHeight = drawable.sprite->height / drawable.zoomPattern;
    drawable.yStart = (drawableLine >= actualHeight) ? drawableLine - actualHeight : 0;
    drawable.yEnd = drawable.yStart + actualHeight - 1;

    ++index;
  }

  return index;
}

uint8_t computeDrawables(Level& level, const CarInfo& carInfo, const LevelConfig& config)
{
  uint8_t nextDrawableIndex = 0;
  for(uint8_t index = 0; index < config.sceneryObjectsCount; ++index)
  {
    SceneryObject& object = level.sceneryObjects[index];
    nextDrawableIndex = computeDrawable(level,
                                        object.posX,
                                        object.posZ,
                                        object.sprite,
                                        carInfo,
                                        nextDrawableIndex);
  }

    for(uint8_t index = 0; index < config.staticObstaclesCount; ++index)
  {
    StaticObstacle& object = level.staticObstacles[index];
    nextDrawableIndex = computeDrawable(level,
                                        object.posX,
                                        object.posZ,
                                        object.sprite,
                                        carInfo,
                                        nextDrawableIndex);
  }

 return nextDrawableIndex;
}

void updateCarInfo(const Level& level, CarInfo& carInfo, const LevelConfig& config)
{
  bool accelerates = gb.buttons.repeat(BUTTON_A, 0);
  bool brakes = gb.buttons.repeat(BUTTON_B, 0);
  int8_t direction = 0;
  carInfo.sprite = CarSprite::Front;
  if(gb.buttons.repeat(BUTTON_LEFT, 0))
  {
    direction = 1;
  }
  else if(gb.buttons.repeat(BUTTON_RIGHT, 0))
  {
    direction = -1;
  }

  if(accelerates)
  {
    carInfo.accelZ = accelFromSpeed(carInfo.speedZ);
  }
  else if(brakes)
  {
    carInfo.accelZ = -0.005;
  }
  else
  {
    carInfo.accelZ = -0.001;
  }

  carInfo.speedZ += carInfo.accelZ;

  if(carInfo.speedZ <= 0)
  {
    carInfo.speedZ = 0;
  }
  else if(carInfo.speedZ > MAX_SPEED_Z)
  {
    carInfo.speedZ = MAX_SPEED_Z;
  }

  if(direction)
  {
    carInfo.accelX = direction * carInfo.speedZ;
  }
  else
  {
    carInfo.accelX = -0.1 * carInfo.speedX * carInfo.speedZ;// tend to center the car
  }

  // Sprinkle with a bit of inertia

  const RoadSegment& segment = level.segments[0];
  carInfo.accelX += segment.xCurvature * carInfo.speedZ / 100.;

  // Handle collisions

  // Update
  
  carInfo.speedX += carInfo.accelX;

  if(carInfo.speedX <= -MAX_SPEED_X)
  {
    carInfo.speedX = -MAX_SPEED_X;
  }
  else if(carInfo.speedX > MAX_SPEED_X)
  {
    carInfo.speedX = MAX_SPEED_X;
  }

  if(carInfo.speedX)
  {
    if(direction == 1)
    {
      carInfo.sprite = CarSprite::Left;
    }
    else if(direction == -1)
    {
      carInfo.sprite = CarSprite::Right;
    }
  }

  // update

  carInfo.posZ += carInfo.speedZ * 256;
  carInfo.posX += carInfo.speedX;
}

void gameLoop(const LevelConfig& config) noexcept
{
  resetAlloc();
  uint16_t* strip1 = (uint16_t*) mphAlloc(STRIP_SIZE_BYTES);
  uint16_t* strip2 = (uint16_t*) mphAlloc(STRIP_SIZE_BYTES);

  Level level;
  level.depthLevels       = (DepthInfo*)        mphAlloc(DEPTH_LEVEL_COUNT * sizeof(DepthInfo));
  level.lineToDepthLevel  = (uint8_t*)          mphAlloc(SCREEN_HEIGHT);
  level.depthLevelToX     = (int16_t*)          mphAlloc(DEPTH_LEVEL_COUNT * sizeof(int16_t));
  level.trackPalette      = (uint16_t*)         mphAlloc(2 * COLOR_TRACK_SIZE * sizeof(uint16_t));
  level.segments          = (RoadSegment*)      mphAlloc(3 * sizeof(RoadSegment));
  level.sprites           = (SpriteDefinition*) mphAlloc(MAX_SPRITES * sizeof(SpriteDefinition));
  level.sceneryObjects    = (SceneryObject*)    mphAlloc(MAX_SCENERY_OBJECTS * sizeof(SceneryObject));
  level.staticObstacles   = (StaticObstacle*)   mphAlloc(MAX_STATIC_OBSTACLES * sizeof(StaticObstacle));
  level.movingObstacles   = (MovingObstacle*)   mphAlloc(MAX_MOVING_OBSTACLES * sizeof(MovingObstacle));
  level.drawables         = (Drawable*)         mphAlloc(MAX_DRAWABLES * sizeof(Drawable));

  level.sprites[0].width = CAR_WIDTH;
  level.sprites[0].height = CAR_HEIGHT;
  level.sprites[0].buffer = CAR;

  level.sprites[1].width = CAR_LEFT_WIDTH;
  level.sprites[1].height = CAR_LEFT_HEIGHT;
  level.sprites[1].buffer = CAR_LEFT;

  level.sprites[2].width = CAR_RIGHT_WIDTH;
  level.sprites[2].height = CAR_RIGHT_HEIGHT;
  level.sprites[2].buffer = CAR_RIGHT;

  level.sprites[3].width = CACTUS_WIDTH;
  level.sprites[3].height = CACTUS_HEIGHT;
  level.sprites[3].buffer = CACTUS;

  level.sprites[4].width = BUSH_WIDTH;
  level.sprites[4].height = BUSH_HEIGHT;
  level.sprites[4].buffer = BUSH;

  level.sprites[5].width = BOULDER_WIDTH;
  level.sprites[5].height = BOULDER_HEIGHT;
  level.sprites[5].buffer = BOULDER;
      
//  Z_POSITION zCactus = (100 << Z_POSITION_SHIFT);

  GraphicsManager gm(strip1, strip2);
  
  Z_POSITION minSegmentSize;
  Z_POSITION maxSegmentSize;

  CarInfo carInfo;
  carInfo.sprite = CarSprite::Front;
  carInfo.posX = 0; //SCREEN_WIDTH / 2;
  carInfo.posZ = 0;
  carInfo.speedZ = 0.f;
  carInfo.speedX = 0.f;
  carInfo.accelZ = 0.f;
  carInfo.accelX = 0.f;

  uint16_t skyColor;
  //uint16_t trackPalette[2*COLOR_TRACK_SIZE];

  initDepthInfo(config, level, minSegmentSize, maxSegmentSize);
  initPalette(skyColor, level);

  level.segments[0].xCurvature = random(-(5 << ROAD_CURVATURE_X_SHIFT), (5 << ROAD_CURVATURE_X_SHIFT));
  level.segments[0].zCurvature = random(-150, 400)/1000.f;
  level.segments[0].segmentStartZ = 0;

  level.segments[1].xCurvature = random(-(5 << ROAD_CURVATURE_X_SHIFT), (5 << ROAD_CURVATURE_X_SHIFT));
  level.segments[1].zCurvature = random(-150, 400)/1000.f;
  level.segments[1].segmentStartZ = 400 * (1 << Z_POSITION_SHIFT);//segments[0].segmentStartZ + random(minSegmentSize, maxSegmentSize);

  level.segments[2].xCurvature = random(-(5 << ROAD_CURVATURE_X_SHIFT), (5 << ROAD_CURVATURE_X_SHIFT));
  level.segments[2].zCurvature = random(-150, 400)/1000.f;
  level.segments[2].segmentStartZ = level.segments[1].segmentStartZ + random(minSegmentSize, maxSegmentSize);


  createSceneryObjects(level, config);
  createStaticObstacles(level, config);

  int16_t backgroundShift = 0; /* sign.11.4 */

  while(true)
  { 
    while (!gb.update());

    updateCarInfo(level, carInfo, config);

    /*switch((gb.frameCount >> 3) % 5)
    {
      case 0:
        gb.lights.drawImage(0, 0, LIGHT_NONE);
        break;

      case 1:
        gb.lights.drawImage(0, 0, LIGHT_1);
        break;

      case 2:
        gb.lights.drawImage(0, 0, LIGHT_2);
        break;

      case 3:
        gb.lights.drawImage(0, 0, LIGHT_3);
        break;

      case 4:
      default:
        gb.lights.drawImage(0, 0, LIGHT_4);
        break;
        
    }*/

// Update environment wrt to new car position

    if(carInfo.posZ > level.segments[1].segmentStartZ)
    {
      level.segments[0] = level.segments[1];
      level.segments[1] = level.segments[2];
      level.segments[2].xCurvature = random(-(5 << ROAD_CURVATURE_X_SHIFT), (5 << ROAD_CURVATURE_X_SHIFT));
      level.segments[2].zCurvature = random(-150, 400)/1000.f;
      level.segments[2].segmentStartZ = level.segments[1].segmentStartZ + random(minSegmentSize, maxSegmentSize);
    }
        backgroundShift += (level.segments[0].xCurvature * carInfo.speedZ) / 4;

// Compute environment geometry

    computeTurns(carInfo, level);
    computeHills(carInfo, level);

// Update drawables

    updateSceneryObjects(level, carInfo, config);
    updateStaticObstacles(level, carInfo, config);
    updateMobileObstacles(level, carInfo, config);

    uint8_t drawableCount = computeDrawables(level, carInfo, config);


  {
    Drawable& drawable = level.drawables[drawableCount];
    switch(carInfo.sprite)
    {
      case CarSprite::Left:
        drawable.sprite = &level.sprites[1];
        break;
      case CarSprite::Right:
        drawable.sprite = &level.sprites[2];
        break;
      case CarSprite::Front:
      default:
        drawable.sprite = &level.sprites[0];
        break;
    }
  
    drawable.xStart = SCREEN_WIDTH/2 - drawable.sprite->width/2;
    drawable.yStart = 120 - drawable.sprite->height;
    drawable.yEnd = drawable.yStart + drawable.sprite->height - 1;
    drawable.zoomPattern = 1;
  }
  ++drawableCount;

  
  
  uint16_t* strip = gm.StartFrame();
  uint16_t* stripLine;
  uint16_t* stripCursor = strip;

  unsigned int yStrip = 1;
  //DepthInfo * currentZ = zMap;

  for(unsigned int y = 0; y < SCREEN_HEIGHT; ++y, ++yStrip)
  {
    stripLine = stripCursor;
    uint8_t depthLevel = level.lineToDepthLevel[y];

int8_t actualShift(backgroundShift >> ROAD_CURVATURE_X_SHIFT);
    
    if(depthLevel == SKY_Z)
    {
      // draw sky
      uint16_t line = y;
      if(y >= BACKGROUND_ARIZONA_HEIGHT)
      {
        y = BACKGROUND_ARIZONA_HEIGHT-1;
      }
      for(uint16_t ii = 0; ii < SCREEN_WIDTH; ii+=2)
      {
        //(*stripCursor++) = COLOR_565(150, 200, 255);
        uint16_t pixelsIndex = y * 256 + (uint8_t)(ii/2 + actualShift);
        uint8_t colorIndexes = BACKGROUND_ARIZONA[pixelsIndex];
        (*stripCursor++) = BACKGROUND_ARIZONA_PALETTE[colorIndexes >> 4];
        (*stripCursor++) = BACKGROUND_ARIZONA_PALETTE[colorIndexes & 0x0F];
      }
    }
    else
    {
      DepthInfo& di = level.depthLevels[depthLevel];
      int16_t x = level.depthLevelToX[depthLevel];
      
      int altColor = (((uint16_t)(di.z + carInfo.posZ) >> (Z_POSITION_SHIFT + 2)) & 0x1);
      uint16_t* currentPalette = level.trackPalette + (COLOR_TRACK_SIZE) * altColor;
      int16_t col = 0;
      for(; col < x - di.lineRoadBumperWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_GRASS_INDEX];
      }
      for(; col < x - di.lineRoadWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_BUMPER_INDEX];
      }
      for(; col < x - di.lineWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_ROAD_INDEX];
      }
      for(; col < x + di.lineWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_LINE_INDEX];
      }
      for(; col < x + di.lineRoadWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_ROAD_INDEX];
      }
      for(; col < x + di.lineRoadBumperWidth && col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_BUMPER_INDEX];
      }
      for(; col < SCREEN_WIDTH; ++col)
      {
        (*stripCursor++) = currentPalette[COLOR_TRACK_GRASS_INDEX];
      }
    }

    for(unsigned int drawableIndex = 0; drawableIndex < drawableCount; ++drawableIndex)
    {
      const Drawable& drawable = level.drawables[drawableIndex];
      if(y >= drawable.yStart && y <= drawable.yEnd)
      {
        uint16_t offset = drawable.sprite->width * (y - drawable.yStart) * drawable.zoomPattern;
        int16_t xIndex = drawable.xStart;
        for(int16_t x = 0; x < drawable.sprite->width && xIndex <= SCREEN_WIDTH-1; x+=drawable.zoomPattern, ++xIndex)
        {
          uint16_t color = *(drawable.sprite->buffer + offset + x);
          if(xIndex > 0 && color != COLOR_565(0xFF, 0x00, 0xFF))
          {
            stripLine[xIndex] = color;
          }
        }
      }
    }

    if(yStrip == STRIP_HEIGHT)
    {
      strip = gm.CommitStrip();
      stripCursor = strip;
      yStrip = 0;
    }
  }


  gm.EndFrame();

/*if(carInfo.posZ > zCactus)
{
  zCactus += (400 << Z_POSITION_SHIFT);
}*/

    if(gb.buttons.repeat(BUTTON_MENU, 0))
    {
      SerialUSB.printf("CPU: %i\n", gb.getCpuLoad());
    SerialUSB.printf("MEM: %i\n", gb.getFreeRam());
    SerialUSB.printf("REMAIN: %i\n", allocFreeRam());
/*    SerialUSB.printf("Coin coin: %i\n", memory);
    for(unsigned int ii = 0; ii < DEPTH_LEVEL_COUNT; ++ii)
    {
      SerialUSB.printf("depth: %i %i\n", ii, (int32_t)(depthLevels[ii].scaleFactor * 16384));
    }*/
    /*for(unsigned int ii = 0; ii < 2 * COLOR_TRACK_SIZE; ++ii)
    {
      SerialUSB.printf("palette: %i %i\n", ii, trackPalette[ii]);
    }*/

/*File root;
root = SD.open("/Roads");

  printDirectory(root, 0);*/
    }
  }
  
}

void setup()
{
  gb.begin();
  // We aren't using the normal screen buffer, so initialize it to 0px × 0px.
  gb.display.init(0, 0, ColorMode::rgb565);

  // Just to push things to the limit for this example, increase to 40fps.
  gb.setFrameRate(40);

  SerialUSB.begin(9600);

  nextAvailableSegment = memory;
}

void loop()
{
  LevelConfig config = levelSelectionMenu();

  gameLoop(config);
}
