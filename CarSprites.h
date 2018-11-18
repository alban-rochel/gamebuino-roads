#pragma once

#define SCALE_FACTOR int16_t /* sign.1.14, the [0., 1.] range is mapped on [0, 1<<14] */
#define SCALE_FACTOR_SHIFT 14
#define SCALE_FACTOR_HALF (1 << (SCALE_FACTOR_SHIFT-1))
#define SCALE_FACTOR_QUARTER (1 << (SCALE_FACTOR_SHIFT-2))
#define SCALE_FACTOR_EIGHTH (1 << (SCALE_FACTOR_SHIFT-3))

const SCALE_FACTOR ScaleFactor[] = 
{
  16384,  16199,  16015,  15831,  15646,  15462,  15278,  15093,  14909,  14725,
  14540,  14356,  14172,  13987,  13803,  13619,  13434,  13250,  13066,  12881,
  12697,  12513,  12328,  12144,  11960,  11776,  11591,  11407,  11223,  11038,
  10854,  10670,  10485,  10301,  10117,  9932,   9748,   9564,   9379,   9195,
  9011,   8826,   8642,   8458,   8273,   8089,   7905,   7720,   7536,   7352,
  7168,   6983,   6799,   6615,   6430,   6246,   6062,   5877,   5693,   5509,
  5324,   5140,   4956,   4771,   4587,   4403,   4218,   4034,   3850,   3665,
  3481,   3297,   3112,   2928,   2744,   2560,   2375,   2191,   2007,   1822
};
  
/*const uint16_t ScaleFactor_Unsigned_8_8[] PROGMEM =
{
65535,  64797,  64060,  63323,  62585,  61848,  61111,  60374,  59636,  58899,
58162,  57425,  56687,  55950,  55213,  54475,  53738,  53001,  52264,  51526,
50789,  50052,  49315,  48577,  47840,  47103,  46366,  45628,  44891,  44154,
43416,  42679,  41942,  41205,  40467,  39730,  38993,  38256,  37518,  36781,
36044,  35306,  34569,  33832,  33095,  32357,  31620,  30883,  30146,  29408,
28671,  27934,  27197,  26459,  25722,  24985,  24247,  23510,  22773,  22036,
21298,  20561,  19824,  19087,  18349,  17612,  16875,  16137,  15400,  14663,
13926,  13188,  12451,  11714,  10977,  10239,  9502,   8765,   8028,   7290
};*/

// Car sprites courtesy of https://www.deviantart.com/mike-dragon/art/DeLorean-Sprites-Sheet-158604207

#define CAR_WIDTH (40)
#define CAR_HEIGHT (28)
const uint16_t CAR[] = {0x1ff8,  0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x18c6, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfbde, 0xfbde, 0x0000, 0xfbde, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x18c6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xfbde, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xfbde, 0xb39c, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xfbde, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8d6b, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xd294, 0xd294, 0xd294, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1084, 0xb39c, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xd294, 0xd294, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 
0x1ff8, 0xb39c, 0x0000, 0x0000, 0xf6b5, 0x0000, 0x0000, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x0000, 0xd294, 0xd294, 0xd294, 0x0000, 0x1084, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x2631, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x18c6, 0x18c6, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x08fc, 0x08fc, 0x00b8, 0x00b8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x18c6, 0x0080, 0x0000, 0x2631, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00b8, 0x0000, 0x0ffd, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x0080, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x0000, 0x2631, 0x2631, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0x0000, 0x0ffd, 0x0ffd, 0x0080, 0x00b8, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x9ef7, 0x0000, 0x2631, 0x2631, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x2631, 0x2631, 0x9ef7, 0x3ce7, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x08fc, 0x08fc, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0x18c6, 0x18c6, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0xa318, 0x1ff8, 
0x1ff8, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 
0x1ff8, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8};

#define CAR_LEFT_WIDTH (40)
#define CAR_LEFT_HEIGHT (28)
const uint16_t CAR_LEFT[] = {0x1ff8,  0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x18c6, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0xfbde, 0xfbde, 0x0000, 0xfbde, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x18c6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xa318, 0x0000, 0xa318, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xfbde, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xfbde, 0xb39c, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xfbde, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0x8d6b, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0x0000, 0xa318, 0x0000, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xd294, 0xd294, 0xd294, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1084, 0xb39c, 0xf6b5, 0xf6b5, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xd294, 0xd294, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 
0x1ff8, 0xb39c, 0x0000, 0x0000, 0xf6b5, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x0000, 0xd294, 0xd294, 0xd294, 0x0000, 0x1084, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x18c6, 0x18c6, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x08fc, 0x08fc, 0x00b8, 0x00b8, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x18c6, 0x0080, 0x0000, 0x2631, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00b8, 0x0000, 0x0ffd, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x0080, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x0000, 0x2631, 0x2631, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0x0000, 0x0ffd, 0x0ffd, 0x0080, 0x00b8, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x9ef7, 0x0000, 0x2631, 0x2631, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x2631, 0x2631, 0x9ef7, 0x3ce7, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x08fc, 0x08fc, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0x1f18, 0x1f18, 0x1f18, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0x1f18, 0x1f18, 0x1f18, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0x18c6, 0x18c6, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0xa318, 0x1ff8, 
0x1ff8, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 
0x1ff8, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8};

#define CAR_RIGHT_WIDTH (40)
#define CAR_RIGHT_HEIGHT (28)
const uint16_t CAR_RIGHT[] = {0x1ff8,  0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x18c6, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x18c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfbde, 0xfbde, 0x0000, 0xfbde, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x18c6, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x8d6b, 0x8d6b, 0x094a, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xb39c, 0x0000, 0xfbde, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0xa318, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0xa318, 0x0000, 0xfbde, 0xb39c, 0x1084, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xfbde, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8d6b, 0x8d6b, 0x8d6b, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x0000, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x094a, 0x0000, 0xa318, 0xa318, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0xa318, 0x0000, 0xd294, 0xd294, 0xd294, 0x1084, 0x0000, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1084, 0xb39c, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0xd294, 0xd294, 0x0000, 0x0000, 0xb39c, 0x1ff8, 0x1ff8, 
0x1ff8, 0xb39c, 0x0000, 0x0000, 0xf6b5, 0x0000, 0x0000, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x2631, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0xd294, 0xd294, 0xd294, 0x0000, 0x1084, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x0000, 0x0000, 0x0000, 0x0000, 0xa318, 0x0000, 0xa318, 0xa318, 0x0000, 0xa318, 0x0000, 0x2631, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0xf6b5, 0x08fc, 0x08fc, 0x00b8, 0x00b8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x18c6, 0x0080, 0x0000, 0x2631, 0x0000, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x00b8, 0x0000, 0x0ffd, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0x0000, 0xf6b5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2631, 0x2631, 0x3ce7, 0x0080, 0x0080, 0x0080, 0x18c6, 0x18c6, 0x0080, 0x0000, 0x2631, 0x2631, 0x0000, 0x1f18, 0x1f18, 0x1f18, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd294, 0xb39c, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0x0000, 0x0ffd, 0x0ffd, 0x0080, 0x00b8, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x9ef7, 0x0000, 0x2631, 0x2631, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x18c6, 0x0000, 0x2631, 0x2631, 0x9ef7, 0x1f18, 0x1f18, 0x1f18, 0x00b8, 0x0000, 0x00b8, 0x0000, 0x08fc, 0x08fc, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0xf6b5, 0x0000, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xf6b5, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x1f18, 0x1f18, 0x1f18, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0xd294, 0x0000, 0x0000, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0xc842, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1f18, 0x1f18, 0x1f18, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0x0000, 0xc842, 0xa318, 0xa318, 0x18c6, 0x18c6, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 
0x1084, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0xa318, 0x1ff8, 
0xffff, 0xa318, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1084, 0x1ff8, 
0xffff, 0x1084, 0x1084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1084, 0x1ff8, 0x1ff8, 
0xffff, 0xffff, 0xffff, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0xb084, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0x4e73, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0xffff, 0xffff, 0xffff, 0xc842, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0xffff, 0xffff, 0xffff, 0xa318, 0xa318, 0xa318, 0xa318, 0xa318, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0xa318, 0xa318, 0xa318, 0xa318, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 
0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8};


#define CACTUS_WIDTH (16)
#define CACTUS_HEIGHT (40)
const uint16_t CACTUS[] = {0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x15bd, 0x8d94, 0xab8c, 0x14c6, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xf0a4, 0x4352, 0xc87b, 0x876b, 0xc873, 0xeead, 0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xc86b, 0x2352, 0x8773, 0xa563, 0xe86b, 0xea94, 0xf8de, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x2552, 0x845a, 0x8563, 0xe56b, 0xc973, 0x666b, 0x54ce, 0x1ff8, 0x6d84, 0xec84, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x644a, 0x224a, 0xe55a, 0x245a, 0xa663, 0x0342, 0xb1bd, 0x1ff8, 0x8342, 0xc86b, 0x70ad, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x644a, 0x6242, 0x055a, 0xe45a, 0x245a, 0x0342, 0xeead, 0x1ff8, 0x444a, 0xc97b, 0xad9c, 
0x1ff8, 0x3ef7, 0x99d6, 0x1ff8, 0x1ff8, 0x444a, 0x0242, 0x8452, 0x8452, 0x0252, 0xc342, 0xcda5, 0xaa73, 0x0552, 0xeb84, 0xec94, 
0x1ff8, 0xe862, 0x465a, 0xe87b, 0x1ff8, 0x444a, 0x8241, 0x0452, 0x634a, 0x624a, 0x634a, 0x098c, 0x8a7b, 0x265a, 0xec8c, 0x6c94, 
0xd9d6, 0xc34a, 0xe762, 0x087c, 0x1ff8, 0x6452, 0x2139, 0x2452, 0x834a, 0x6252, 0x8342, 0x0984, 0xa763, 0x255a, 0xac8c, 0xefa5, 
0x17ce, 0x4239, 0x655a, 0x6a8c, 0x1ff8, 0xc54a, 0xa131, 0x4452, 0x434a, 0x6252, 0x4242, 0x055b, 0x0352, 0xe662, 0x0b84, 0xaea5, 
0xb5c5, 0x0239, 0x655a, 0xaa7c, 0x1ff8, 0x4552, 0x8131, 0xa34a, 0x844a, 0x624a, 0xc142, 0x2131, 0xe242, 0x455a, 0xaa84, 0x4dad, 
0x10a5, 0x8239, 0x266b, 0x4973, 0x1ff8, 0xe65a, 0x4131, 0x424a, 0xe44a, 0x624a, 0x8039, 0x2139, 0x024a, 0x0663, 0x2984, 0x33ce, 
0x4e94, 0xc241, 0x6773, 0xe86b, 0x1ff8, 0xa552, 0x8131, 0x424a, 0xa552, 0x824a, 0x8031, 0x6142, 0xc452, 0x8663, 0xa78c, 0x1ff8, 
0x2c84, 0xc24a, 0xa76b, 0x0873, 0x1ff8, 0x8552, 0x8131, 0x224a, 0x865a, 0xa35a, 0x0142, 0x0242, 0xe45a, 0xe773, 0x14ce, 0x1ff8, 
0xc973, 0x0352, 0x866b, 0x8a7c, 0x1ff8, 0x8552, 0xa029, 0x6252, 0x6763, 0xe76b, 0x0873, 0x2a7c, 0xee9c, 0x1ff8, 0x1ff8, 0x1ff8, 
0xaa7b, 0xc34a, 0xa76b, 0x0a84, 0x1ff8, 0xa552, 0x8129, 0x4142, 0xe863, 0xea83, 0xab94, 0x74be, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x0a7b, 0x4242, 0x466b, 0x8a7c, 0x1ff8, 0x6552, 0xa029, 0x414a, 0xe76b, 0xea83, 0xa984, 0x10b5, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x2d8c, 0xe241, 0x655a, 0x0a84, 0x1ff8, 0x4552, 0x6029, 0xa252, 0x0763, 0x0a84, 0x0773, 0xf1b5, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xb09c, 0xc24a, 0x245a, 0x2a84, 0xf4c6, 0xe652, 0x0029, 0x0152, 0x297b, 0xea7b, 0x2873, 0xd0b5, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x77c6, 0xa352, 0x676b, 0x486b, 0xd0ad, 0xe75a, 0x8029, 0x014a, 0x0873, 0xa873, 0x6873, 0xb0ad, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x234a, 0x887b, 0x6763, 0xeb94, 0x51b5, 0x2131, 0x2042, 0xe76b, 0xa97b, 0xa663, 0xefad, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x4b7b, 0xc45a, 0xc873, 0xeb84, 0xeda5, 0xea8c, 0x6152, 0xa663, 0xe97b, 0x876b, 0xcd9c, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0xc352, 0x266b, 0xc873, 0x6c94, 0x4ca5, 0xa463, 0x466b, 0xa87b, 0x697b, 0xea84, 0x58df, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x434a, 0x0a7c, 0x8b94, 0x0aa5, 0x256b, 0xc563, 0x8773, 0x087b, 0xcd94, 0x55ce, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xc563, 0xcc94, 0x067c, 0x246b, 0xc45a, 0xa56b, 0x8563, 0xae9c, 0x53c6, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xc252, 0x2352, 0xa563, 0xc55a, 0x656b, 0x6663, 0xeb8c, 0xefad, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x8239, 0x2352, 0x8563, 0x255a, 0xc673, 0xc55a, 0xc984, 0x2da5, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0xe241, 0x824a, 0x8463, 0x045a, 0xc773, 0x2663, 0x6773, 0x8ea5, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xa34a, 0xa24a, 0x635a, 0x855a, 0x2563, 0xe66b, 0xa563, 0x8ea5, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x244a, 0xa352, 0x0352, 0x4463, 0x456b, 0x266b, 0x0563, 0x0da5, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x8452, 0x2452, 0xc452, 0xa56b, 0x0563, 0x8773, 0x0563, 0x6ca5, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x665a, 0x845a, 0xa452, 0xa563, 0xa55a, 0x066b, 0xa773, 0x8b9c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xe662, 0x045a, 0xe452, 0xc45a, 0x655a, 0x066b, 0x887b, 0x6a8c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x2763, 0xa452, 0x255b, 0xc56b, 0x855a, 0x0563, 0x287c, 0xe884, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xe76b, 0x4452, 0x455b, 0xa563, 0x665a, 0xc45a, 0x877b, 0x887c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xa663, 0x244a, 0x2563, 0xe463, 0x2552, 0xa55a, 0xc77b, 0x877c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x0663, 0x4452, 0xc56b, 0x045b, 0x855a, 0x455b, 0xc673, 0x067c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x455a, 0x2242, 0x6463, 0x645b, 0xc452, 0x055b, 0x856b, 0x667c, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xf09c, 0x2b84, 0xcb84, 0x0b84, 0x0c84, 0xed9c, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8};
