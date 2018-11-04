#include "GraphicsManager.h"

using namespace roads;

#ifndef DMA_DESC_COUNT
#define DMA_DESC_COUNT (3)
#endif

namespace Gamebuino_Meta
{
  extern volatile uint32_t dma_desc_free_count;
}

namespace roads
{
      static inline void WaitForDescAvailable(const uint32_t min_desc_num)
      {
        while (Gamebuino_Meta::dma_desc_free_count < min_desc_num);
      }
      
      static inline void WaitForTransfersDone(void)
      {
        WaitForDescAvailable(DMA_DESC_COUNT);
      }
}

uint16_t roads::GraphicsManager::strip1[STRIP_SIZE_PIX];
uint16_t roads::GraphicsManager::strip2[STRIP_SIZE_PIX];
uint16_t* roads::GraphicsManager::currentStrip;
uint16_t* roads::GraphicsManager::sentStrip;

uint16_t* GraphicsManager::StartFrame() noexcept
{
    gb.tft.setAddrWindow(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
    //initiate SPI
    SPI.beginTransaction(Gamebuino_Meta::tftSPISettings);
    gb.tft.dataMode();

    currentStrip = strip1;
    sentStrip = strip2;

    return currentStrip;
}

void GraphicsManager::EndFrame() noexcept
{
  WaitForTransfersDone();
  gb.tft.idleMode();
  SPI.endTransaction();
}

uint16_t* GraphicsManager::CommitStrip() noexcept
{
    uint16_t *temp = currentStrip;
    currentStrip = sentStrip;
    sentStrip = temp;

    gb.tft.sendBuffer(sentStrip, STRIP_SIZE_PIX);
    WaitForDescAvailable(2);

    return currentStrip;
}