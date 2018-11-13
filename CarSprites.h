#pragma once

#include <avr/pgmspace.h>


/*const uint16_t ScaleFactor[] PROGMEM =
{
65535,  64797,  64060,  63323,  62585,  61848,  61111,  60374,  59636,  58899,
58162,  57425,  56687,  55950,  55213,  54475,  53738,  53001,  52264,  51526,
50789,  50052,  49315,  48577,  47840,  47103,  46366,  45628,  44891,  44154,
43416,  42679,  41942,  41205,  40467,  39730,  38993,  38256,  37518,  36781,
36044,  35306,  34569,  33832,  33095,  32357,  31620,  30883,  30146,  29408,
28671,  27934,  27197,  26459,  25722,  24985,  24247,  23510,  22773,  22036,
21298,  20561,  19824,  19087,  18349,  17612,  16875,  16137,  15400,  14663,
13926,  13188,  12451,  11714,  10977,  10239,  9502,   8765,   8028,   7290
};
*/
#define CAR_WIDTH (36)
#define CAR_HEIGHT (40)
const uint16_t CAR[] PROGMEM = {0x3ff8, 0x1ff8, 0x1ff0, 0x1ff8, 0xbff8, 0x3df0, 0x9be1, 0x7ffc, 0x3ee5, 0xfcd6, 0x7ade, 0x1ade, 0xfbde, 0x3bde, 0xdad6, 0x99d6, 0x3ad6, 0xdad6, 0x9ace, 0x9ace, 0x5ad6, 0x1ad6, 0x7ad6, 0xb9ce, 0xd9ce, 0xfbde, 0x39d5, 0xfdf4, 0x5dea, 0x1de8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x5ef8, 0x5ef8, 
0xdff0, 0xdff8, 0x1ff8, 0x1cf0, 0x3bf8, 0xbdfa, 0xfedc, 0x7db5, 0x9bad, 0x3bae, 0x3ba6, 0xba9e, 0x1a9e, 0x5a9d, 0xb99d, 0x59a5, 0x3aa5, 0x9aa5, 0x599d, 0x589d, 0xf895, 0xb995, 0x398d, 0x398d, 0x3a96, 0xfa9d, 0xbaa6, 0x19a5, 0x1bcd, 0xfdec, 0xfbd8, 0xdef0, 0xdfe8, 0xbfe8, 0x7ef0, 0x5ef8, 
0x1fe8, 0x5ff0, 0x1ff8, 0xbdf0, 0x7ada, 0x749b, 0x3bae, 0xfa96, 0x3ba6, 0xdca6, 0x1d9e, 0xbd9e, 0x7d9e, 0x1c9e, 0x1c9e, 0x3c9e, 0x1ba6, 0xdba6, 0xfaa6, 0xbaa6, 0x5a9e, 0x3a9e, 0x9c96, 0xfd9e, 0x1b9e, 0x3db6, 0xdba6, 0x399d, 0x189d, 0xd27b, 0x78ca, 0x9be0, 0xdff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xbff8, 0x3ff8, 0x5ff8, 0x9cd9, 0x1693, 0xd584, 0x7cae, 0x5cae, 0x1db6, 0x1eae, 0xfe9e, 0x5e9e, 0x3da6, 0x1da6, 0x9d9e, 0xfd9e, 0x9c9e, 0xdc9e, 0x5c9e, 0x5c9e, 0xbc9e, 0x7c9e, 0x3e9e, 0x5ea6, 0xdca6, 0x7bae, 0x1cbe, 0x19ad, 0x5bb6, 0xd493, 0xcc71, 0x97d2, 0xdbe8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1df8, 0xfef8, 0xfdf0, 0x1de1, 0xd27a, 0x9aae, 0x5dae, 0x7d9e, 0x9eae, 0xdfae, 0x5fa6, 0x9f9e, 0xdea6, 0x3ea6, 0x5da6, 0xfdae, 0x5dae, 0x9ca6, 0xdb96, 0x5b96, 0xfc9e, 0x1d9e, 0x9c9e, 0x7c9e, 0xfd9e, 0x1ea6, 0xdeb6, 0xbdbe, 0xbbae, 0x1bbd, 0x1072, 0xf8c2, 0xfbd8, 0x9ef0, 0x5ef0, 0xbef0, 
0x7ff8, 0x3ff8, 0x9ef8, 0xdde1, 0x3dc4, 0x5eae, 0xbeae, 0xbc96, 0x7a8d, 0x9885, 0xb46c, 0x915b, 0x6f5b, 0xad53, 0x0c53, 0x2b4a, 0xaa4a, 0xaa42, 0xe93a, 0x4a3a, 0x8b4a, 0xcc52, 0xab4a, 0xeb42, 0x2c3a, 0x505b, 0x1374, 0x3895, 0xdc9d, 0x5cad, 0xd293, 0xb7ca, 0x1df0, 0x1ff8, 0x1ff8, 0x1ff8, 
0x3ff8, 0x3ff0, 0xbce8, 0xdcda, 0x1aa4, 0xdcae, 0x115b, 0x2e4b, 0x7053, 0xb053, 0xf063, 0x1073, 0xf17b, 0xf07b, 0x2e6b, 0x0d5b, 0x8e5b, 0x0f63, 0xef63, 0x4f63, 0x2e73, 0x4e73, 0x0e6b, 0x2c63, 0x2d73, 0x0d6b, 0xad63, 0x0b4a, 0x4f63, 0x34a5, 0x30b4, 0xcea2, 0x59e1, 0x9ff8, 0x1ff8, 0x1ff8, 
0x1ef8, 0xfdf1, 0x1bda, 0x95b3, 0x2e72, 0x5294, 0x97b5, 0x359d, 0x768d, 0x798d, 0x7c9e, 0x9ea6, 0xdeae, 0x3eae, 0x3dae, 0xfeae, 0x9fbf, 0x7fc7, 0x3fcf, 0xfec7, 0x5dbf, 0x5db7, 0xddae, 0xbca6, 0x3ca6, 0xfa9d, 0xf88d, 0xf484, 0x309c, 0xac83, 0xc431, 0x6c62, 0x96b4, 0xf7bb, 0x59d2, 0x59d1, 
0xb6ba, 0x9292, 0x2b62, 0x484a, 0x6000, 0x2e73, 0x5ab6, 0x3ec7, 0xbfc7, 0x5ebf, 0x9fb7, 0x3fb7, 0x5fb7, 0x5fbf, 0xfeb7, 0x5eb7, 0x7fbf, 0xffbf, 0x7fc7, 0xddb7, 0xfebf, 0xffbf, 0x1fbf, 0x1fbf, 0xbfbf, 0x9fbf, 0xdfc7, 0xfbae, 0xf495, 0x8f7c, 0x4539, 0x8742, 0x35a5, 0x559b, 0x1bda, 0x9be0, 
0x39d9, 0x19d2, 0x55b3, 0x4f7a, 0x8d62, 0x148c, 0x1bae, 0xbfc7, 0x9fcf, 0xbfc7, 0xffc7, 0x7fbf, 0x3fbf, 0x9fbf, 0x5fc7, 0x7ebf, 0x5fcf, 0xffe7, 0x9ecf, 0x5dc7, 0x1ec7, 0x7fcf, 0x9fbf, 0x9fbf, 0x7fbf, 0x3fbf, 0x9fcf, 0xbcbe, 0x1595, 0xcf84, 0x8c7b, 0xab7a, 0xf5c2, 0xf9d9, 0x1df8, 0x3ef8, 
0x1ef8, 0x5df0, 0xf8c9, 0xdef4, 0x1bcd, 0x169d, 0x7aae, 0x9fcf, 0x3fc7, 0xffc7, 0x9fbf, 0xffc7, 0xffc7, 0xffc7, 0x9fbf, 0xffc7, 0x5cbe, 0x1595, 0x97ae, 0x9ccf, 0xbed7, 0x9ecf, 0xffd7, 0xdfcf, 0xffcf, 0xffcf, 0x7fd7, 0x5fd7, 0x569d, 0x4e73, 0x4fa4, 0x35e4, 0x39e9, 0x9df8, 0x1ef8, 0x1ff8, 
0x1ff8, 0x1de8, 0x9cd9, 0x5ffd, 0xdfd6, 0x168d, 0xf9ae, 0xffef, 0xffe7, 0x9fd7, 0xffe7, 0xffe7, 0x7ee7, 0xffef, 0xbff7, 0x5fef, 0x3494, 0xe731, 0xcf6b, 0xfbd6, 0xfeef, 0xffef, 0xffe7, 0xffe7, 0xffdf, 0xffdf, 0x3edf, 0x9fef, 0xf9bd, 0xf294, 0x10ad, 0x77e5, 0x9bf2, 0x3cf0, 0x1ef0, 0x1ff8, 
0x5df8, 0xfce8, 0x3ad1, 0x3ffd, 0x9bbd, 0x3aae, 0xffe7, 0xfff7, 0xdbc6, 0xf8b5, 0x3ff7, 0x7cef, 0x97d6, 0x96ce, 0xf7d6, 0xb3ad, 0xb7c6, 0xbade, 0xdbe7, 0xfcef, 0x34be, 0x95c6, 0xd4ad, 0xd7bd, 0x5ce7, 0x75ad, 0x308c, 0xfdff, 0xdeff, 0xb9de, 0x72b5, 0x36dd, 0x99eb, 0xd7d0, 0x5de8, 0x5ff8, 
0x9ff8, 0xdce0, 0x3be2, 0xfffd, 0x1bde, 0x1be7, 0xf19c, 0x6a6b, 0x8439, 0x064a, 0xee84, 0x0e7c, 0x8b6b, 0x6b63, 0x474a, 0xa219, 0xcb63, 0x78d6, 0x55c6, 0x4f9c, 0x665a, 0x0662, 0x465a, 0xca73, 0xad83, 0xe962, 0x6442, 0x2863, 0xa96b, 0xf0a5, 0x54c6, 0x94cd, 0xb8fc, 0xb5d9, 0xdcf0, 0x1ff8, 
0xdff8, 0xfdd8, 0x3ddb, 0x7ffe, 0xd8c5, 0x0642, 0xe963, 0xea73, 0xa239, 0xc131, 0xe229, 0xe329, 0x4218, 0xc320, 0x0118, 0x0000, 0xca52, 0x97c6, 0x15be, 0x496b, 0x8018, 0x6010, 0xc018, 0x2018, 0xa010, 0xa010, 0xc010, 0x4018, 0x1094, 0xc95a, 0x274a, 0x72b4, 0xb6f4, 0xd5ea, 0x5bf0, 0x1ff8, 
0x1ef8, 0x1ce0, 0xdff4, 0xdcdd, 0x8a51, 0xa318, 0xbace, 0x9294, 0x484a, 0x4000, 0xa000, 0x2000, 0x4000, 0x8000, 0x675a, 0x0542, 0x107c, 0x0f6b, 0x6a5b, 0x4742, 0xe108, 0x0000, 0x0000, 0xc962, 0x8e8c, 0x4431, 0x2000, 0x0000, 0x96ad, 0x35a5, 0x4429, 0x4749, 0xb2c4, 0x76db, 0x7be0, 0x9ff8, 
0x1ff8, 0x7ce8, 0xd6b3, 0x8529, 0x4008, 0xc531, 0xb9df, 0xf3ad, 0x55be, 0x4d8c, 0xcd94, 0x0eac, 0x4db5, 0xe35a, 0x73bd, 0x56c6, 0x56b6, 0x9395, 0xb19c, 0x14b5, 0x93a4, 0xc329, 0x4242, 0xf6ef, 0x98ff, 0x53c6, 0x4331, 0x2000, 0xef73, 0x19be, 0x6110, 0xa328, 0x0541, 0xb3bb, 0xbad9, 0x1df0, 
0x5ad9, 0x3ffb, 0xb193, 0x8529, 0x6108, 0x6c63, 0x59c6, 0x494a, 0x9ae7, 0x17df, 0xb7e7, 0x16d6, 0xf7de, 0x35be, 0x2e73, 0xc839, 0x2739, 0xc429, 0xe431, 0x084a, 0x6952, 0x8a5a, 0xa329, 0xf19c, 0x33b5, 0x93b5, 0x0429, 0x2000, 0x293a, 0xb9be, 0x4311, 0xa429, 0x064a, 0x8fa3, 0xfcfb, 0xf7e0, 
0x99ba, 0x7cdc, 0x4e7b, 0xa119, 0x6000, 0xb39c, 0x58c6, 0xaa52, 0x1094, 0xeb73, 0x0f9c, 0x6c73, 0x319d, 0xf294, 0xc731, 0x0100, 0x0000, 0x0000, 0xa108, 0x0000, 0xc000, 0xa94a, 0x8a52, 0x929c, 0xd39c, 0xaa62, 0x8541, 0x2018, 0xc421, 0xfbcf, 0x2a43, 0xca4c, 0x8b64, 0xac73, 0xbafc, 0x95d9, 
0x1ac4, 0x36ab, 0x0952, 0xcb6b, 0xcc6b, 0x58ce, 0xb5b5, 0xb4ad, 0x4321, 0xa74a, 0x98d6, 0xdeff, 0xb6c6, 0xc219, 0xe219, 0x0519, 0xee5b, 0x38ad, 0x96ad, 0x2b5b, 0xe000, 0xe110, 0x12a5, 0x33ad, 0xf9d6, 0x96c6, 0x2ea4, 0x8452, 0xc331, 0x36be, 0xf085, 0x8e65, 0x5286, 0x5185, 0x37dd, 0x73c3, 
0x3eee, 0x78bd, 0x728c, 0x38b6, 0xb184, 0xbeef, 0x79c6, 0x18b6, 0x8e53, 0xf7a5, 0xb59d, 0xae6b, 0x8f7c, 0xd39d, 0x369d, 0x97a5, 0xd284, 0xb184, 0xd094, 0x8b73, 0x2e8c, 0x31a5, 0x9194, 0xd18c, 0xb7be, 0xfbdf, 0xd4ad, 0x2d73, 0x8a6b, 0x32a5, 0x58c7, 0xaf64, 0xb386, 0xb8b6, 0x59dd, 0x94c3, 
0x7eef, 0x7bce, 0xbabe, 0x38a6, 0x6f6c, 0x9ddf, 0x1cd7, 0xb384, 0xd885, 0xda8d, 0x3775, 0x7785, 0x9dc6, 0xdfef, 0x137c, 0x1174, 0x308c, 0x896b, 0x6662, 0xc97b, 0x054a, 0x0e7b, 0x5cdf, 0xd58d, 0xf685, 0xb57c, 0xf47c, 0x747c, 0xb27c, 0x1074, 0x7ddf, 0x0943, 0x0b64, 0x35be, 0x98ed, 0xf3c3, 
0x9edf, 0x9cce, 0xf8ad, 0x9bc6, 0xdcd7, 0x3ddf, 0x7bd6, 0x6d53, 0xb15b, 0x356c, 0x556c, 0xd784, 0xb78d, 0xbcc6, 0x18ad, 0xe629, 0xe531, 0x6439, 0xe349, 0xe028, 0x6539, 0x35ad, 0x3294, 0xcc4a, 0xee4a, 0x1053, 0xcd42, 0xcd42, 0xce53, 0xf06b, 0xdef7, 0x2f84, 0x2a6b, 0x36de, 0xbafd, 0x34d3, 
0x3def, 0x7ace, 0x5cd6, 0x3edf, 0x5dc7, 0xdfe7, 0x1bc6, 0xe208, 0x4000, 0x2000, 0xc000, 0x8000, 0x2000, 0x483a, 0x529c, 0xef84, 0x507c, 0x2c5b, 0x894a, 0x519c, 0x509c, 0x109c, 0xa321, 0x0000, 0x0000, 0x0000, 0x4000, 0xc000, 0x6200, 0x35a5, 0xfbe7, 0x98e7, 0xf0a5, 0x16d6, 0x55d5, 0x74d4, 
0x3ed7, 0xd595, 0x9bbe, 0x58a5, 0x19b5, 0x3cd6, 0x96a5, 0x4208, 0x4000, 0x4008, 0xe010, 0x8018, 0x0008, 0x6539, 0xb9be, 0x19b6, 0x7cdf, 0x4e73, 0xaf84, 0x37d6, 0x13b5, 0x75c6, 0xe43a, 0xc018, 0xa329, 0xe118, 0xc428, 0xa208, 0x8419, 0x59be, 0xdee7, 0xad63, 0x4e6b, 0x98cd, 0x94dd, 0xb0cc, 
0xfeef, 0x78be, 0x19b6, 0xaf5b, 0xbcce, 0x559d, 0x4942, 0xe110, 0xc852, 0xe752, 0x4231, 0x054a, 0x2339, 0xa220, 0xf07c, 0x907c, 0xe631, 0xc010, 0xe220, 0x6742, 0x2c6b, 0xcd6b, 0x4321, 0x8642, 0x285a, 0x2231, 0xe441, 0x8331, 0x0221, 0x93a5, 0x9adf, 0x73a5, 0x6752, 0x11b5, 0x15e6, 0xf1d5, 
0x38cd, 0x35ad, 0x79b6, 0xffd7, 0x9fdf, 0xd89d, 0xce5b, 0x0100, 0x0100, 0x0000, 0x4008, 0x0000, 0x0000, 0xe110, 0x4218, 0xe100, 0x2100, 0x0100, 0x0000, 0x0000, 0x4318, 0xe108, 0x6000, 0xe000, 0x0000, 0x0000, 0x4008, 0x0000, 0xc321, 0xd3ad, 0x79de, 0xf8ef, 0x8cb5, 0x48a4, 0xeed5, 0xcdc5, 
0xb5ac, 0x75a4, 0x38b6, 0xfedf, 0x3ddf, 0x99c6, 0x79ce, 0xc118, 0x2010, 0x6218, 0xa000, 0xc431, 0x0329, 0x8010, 0x0118, 0xc010, 0x4010, 0xc018, 0x8010, 0x6120, 0x4431, 0x8321, 0x8110, 0x8321, 0x0321, 0x4010, 0xe118, 0x6010, 0x6542, 0xfaef, 0xfcff, 0xb6ef, 0x4abd, 0xc6a4, 0xcaac, 0x6aa4, 
0xae83, 0x2b63, 0x37be, 0xb9ce, 0x1ef7, 0xfff7, 0x1def, 0xa208, 0x2000, 0x8000, 0x0000, 0x2008, 0x4000, 0x096b, 0xf1b5, 0x6e94, 0xcd94, 0x6e94, 0x2d94, 0x0e9c, 0x0e9c, 0xcd94, 0xa542, 0x4000, 0xc108, 0x0000, 0xc108, 0x0000, 0x0539, 0x58de, 0x18ef, 0xd3d6, 0x69a4, 0x079c, 0x6151, 0x287b, 
0xb18c, 0x8d6b, 0xf8c5, 0xd8cd, 0xe952, 0x8118, 0xe118, 0x2008, 0xe108, 0x0108, 0xc000, 0x0221, 0x0218, 0x4010, 0x8110, 0x0752, 0x296b, 0x0652, 0x875a, 0x4a63, 0x6531, 0x4110, 0x2110, 0x4218, 0x2110, 0x8008, 0xe110, 0xa010, 0x0008, 0x0118, 0x0008, 0xc549, 0xaaa4, 0xe9ac, 0xa683, 0x099c, 
0x31b5, 0x50ad, 0xd5ce, 0xec83, 0x0010, 0x0010, 0xe010, 0x0000, 0x8218, 0xe218, 0x6010, 0xa431, 0x8221, 0x2000, 0x0000, 0xae7c, 0x5195, 0x129d, 0xd29d, 0x108d, 0xa953, 0xc000, 0x2000, 0x8218, 0x0110, 0xe008, 0x6118, 0x4018, 0xa010, 0xc239, 0xe028, 0x0010, 0xe99b, 0xe7a3, 0xc7ac, 0x48bc, 
0xb1bd, 0xf0ac, 0xf3bd, 0x4439, 0x6008, 0xa118, 0xa118, 0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 0x6100, 0xa200, 0x0d4b, 0x1274, 0x927d, 0x537d, 0x127d, 0xa942, 0xa000, 0x6000, 0x0000, 0xe000, 0x2000, 0x8000, 0x0008, 0x0010, 0x6230, 0x8139, 0xe018, 0x6031, 0x0cac, 0x29ac, 0x0bcd, 
0xd5bd, 0xd4b5, 0x71a4, 0xe120, 0x0131, 0x0131, 0xc120, 0x0010, 0x2108, 0x6100, 0x6000, 0x8000, 0x2210, 0xa318, 0x8320, 0x0431, 0x6539, 0x2531, 0x4539, 0x6539, 0xe329, 0xc218, 0x2310, 0x0310, 0xa108, 0xe108, 0xa210, 0x8318, 0x2428, 0xe531, 0x2429, 0xa229, 0x6239, 0xcfbd, 0x699b, 0xa9a3, 
0x6f7c, 0x1095, 0xf3c6, 0x50bd, 0x10bd, 0x10bd, 0x53c5, 0x4f9c, 0x8962, 0x6a62, 0xca63, 0xe962, 0x0a7b, 0xb1b5, 0x35df, 0x92c6, 0x32c6, 0x13d6, 0xb3d6, 0x14d6, 0x15de, 0x76de, 0x92ad, 0x4e7c, 0x8b6b, 0x8a63, 0x6c73, 0x2f8c, 0x74c6, 0xb7ef, 0xb5de, 0x35df, 0xf7ef, 0x33d6, 0xe673, 0x6362, 
0xb4aa, 0x8d82, 0x6b8b, 0xa783, 0x4ba4, 0x8dbd, 0x4dad, 0x0773, 0x644a, 0x864a, 0x4639, 0x494a, 0xa842, 0xcd7c, 0x31ad, 0x70b5, 0x70bd, 0xafb5, 0x90b5, 0x6fb5, 0x6ead, 0x0fa5, 0x4b73, 0xe429, 0x6429, 0xe529, 0x0631, 0x8741, 0xc962, 0x0a7b, 0x2873, 0x6873, 0xe96b, 0x654a, 0x656a, 0x688b, 
0x39b9, 0x14a1, 0x0320, 0x0008, 0xe749, 0x0f8c, 0x8b62, 0x4a62, 0xcd7b, 0x4f94, 0x2a7b, 0xeb7b, 0x309c, 0xa541, 0x0008, 0xe008, 0x0008, 0x0108, 0x0010, 0x0010, 0x8010, 0x4008, 0x0000, 0x6000, 0xe000, 0xc000, 0x0000, 0x0000, 0xe000, 0x4000, 0xa000, 0x4000, 0x8000, 0x0010, 0x2a81, 0xf1ca, 
0xd8c8, 0xd5b1, 0x0218, 0xe000, 0x4000, 0xa000, 0x0100, 0x4000, 0x6000, 0xa110, 0x8008, 0xc010, 0x4331, 0xe010, 0x8000, 0x8000, 0xa000, 0xe000, 0xc210, 0x8218, 0xc010, 0x6221, 0x2539, 0x2431, 0x2000, 0x8008, 0xe220, 0xa538, 0x8539, 0x6639, 0xe739, 0x8639, 0xe43a, 0x0651, 0xcfa9, 0x54d1, 
0x7df0, 0x79d1, 0x0420, 0x2108, 0x0000, 0x0000, 0x6000, 0x4742, 0xc429, 0x0000, 0x2310, 0x4d6b, 0x0b63, 0xea6a, 0x2a6a, 0x8a6a, 0x2959, 0x6b69, 0xee81, 0x3089, 0x0f81, 0xcd70, 0x0f81, 0xd2a3, 0x0b73, 0x6000, 0x0239, 0x8c8c, 0xa96b, 0x664a, 0x464a, 0xc962, 0x2b7a, 0x30aa, 0xd6d8, 0x3af8, 
0x1ef8, 0x9df0, 0xbbd0, 0x74a0, 0x8c68, 0x0428, 0x0000, 0x2321, 0xe118, 0xc649, 0x4c79, 0xb099, 0x17c0, 0xb9c8, 0x5ad0, 0x7ad8, 0x3ad8, 0x5be0, 0x1df0, 0x1ef0, 0x1ff0, 0xdff8, 0xbee8, 0x55b0, 0x17c4, 0x52ac, 0x0fa4, 0xe762, 0xe440, 0xe648, 0x0850, 0x0d78, 0x57b8, 0x5cd8, 0x1ef8, 0x1ff8, 
0x9ff8, 0x3ff8, 0x7ff8, 0x1ff8, 0x1ff0, 0x1ce0, 0x14a8, 0x1098, 0x13b0, 0x58d0, 0xfde0, 0x3ee8, 0x3ff0, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ef8, 0x9ef8, 0x9ff8, 0x1ff8, 0x1ff8, 0xfde8, 0x75b0, 0xf8c9, 0x38d1, 0xf9d0, 0xbee8, 0x1ff8, 0x7ff8, 0x1ff8, 0x5ff8, 0x1ff8, 0xbff8, 0x9ff8};

#define CAR_LEFT_WIDTH (46)
#define CAR_LEFT_HEIGHT (40)
const uint16_t CAR_LEFT[] PROGMEM = {0x1ff8, 0x5ff8, 0x1ff8, 0x1ff8, 0xbff8, 0x1ff8, 0x5ff8, 0x1ff8, 0x3ff8, 0x5ff8, 0xbff8, 0x9ff8, 0x5ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0x1ff8, 0x9ff8, 0x5ff8, 0x1ef8, 0x3ff8, 0x9ff0, 0x1ff0, 0x1ff8, 0x1ff8, 0x1ff0, 0x5ff0, 0x7ef8, 0x1ef8, 0x1ff8, 0x1ff0, 0xdff8, 0x1ff0, 0xdff8, 0x1ff8, 0x1ff8, 0x7ff8, 0x1ef8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ef8, 0x1ff8, 0xfff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xbff8, 0x7ef8, 0x3ef8, 0x1ff8, 0x1ff8, 0x5ef8, 0x5df8, 0xdaf9, 0xd9fa, 0xf8fa, 0x38f3, 0x36eb, 0xb6ec, 0xd6ec, 0xf9f3, 0x3df9, 0x1ef8, 0x1df8, 0x5df8, 0x3df8, 0x1df8, 0x7ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff8, 0x1ff8, 0x1ef8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff0, 0xbff0, 0xbef0, 0x7ff8, 0x3ff8, 0x1ff8, 0x1ff8, 
0x5ff8, 0x7ff8, 0x1ff8, 0x3ff8, 0xfff8, 0x1df9, 0x3cf9, 0xfbf1, 0x3cf3, 0x7ceb, 0x9be4, 0x9bdd, 0x9acd, 0x78b5, 0xd8a5, 0xf99d, 0x598d, 0x7a85, 0xbb7d, 0x7c76, 0x5d6e, 0x7c75, 0x9a94, 0x7ccb, 0x9de1, 0x5ce0, 0x7ef0, 0x5ff8, 0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ef8, 0x3ef8, 0x5ef8, 0x5ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff0, 0xbff0, 0x9ff8, 0x3ff8, 0x1ff8, 0x1ff8, 
0x1ef8, 0x5de8, 0x9eeb, 0x3ddd, 0xfabd, 0x3aae, 0x1db6, 0x1da6, 0x5d8d, 0x7d85, 0xdb75, 0xfb75, 0xbb7d, 0x7b7d, 0xfb75, 0xdc75, 0xfd75, 0xdd75, 0x9c75, 0x1c76, 0xbf7e, 0x5f7e, 0x5f76, 0xdd85, 0x9593, 0xb6c2, 0x5de8, 0x1ff0, 0x7ff0, 0xfff8, 0x1ff8, 0x1ff8, 0xbff8, 0x5ff8, 0x9ff0, 0x1ef0, 0xbff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x39da, 0x5eec, 0x5db5, 0x3c8d, 0x1a65, 0x5e7e, 0xde86, 0x7d76, 0x9e76, 0x3e6e, 0x9d6e, 0x1d76, 0x5f86, 0x1f8e, 0xdf7e, 0xfe76, 0x1d86, 0xfe8e, 0x1e86, 0x9d76, 0x3e7e, 0x1f8e, 0x7f8e, 0x7e86, 0x1e86, 0x1b94, 0x17ba, 0x79e1, 0x3cf0, 0x3ef8, 0x1ff0, 0x1ff8, 0x1ff8, 0x1ff8, 0x7ff8, 0x7ff0, 0x9ff0, 0x3ff8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xf194, 0x0942, 0x199d, 0x9c96, 0xbd86, 0x1e86, 0xfe8e, 0x3f8e, 0x3f86, 0x9f86, 0x1f87, 0xff86, 0x9e7e, 0xde7e, 0xfe76, 0x1e76, 0x9e7e, 0x1f7e, 0xff76, 0x3f76, 0xdf76, 0x7f7e, 0x7e86, 0x1f97, 0xff9f, 0x3f96, 0x3a8d, 0x989a, 0x7dd8, 0x1ff8, 0xdff8, 0xfff8, 0xfff8, 0x1ef8, 0x1ff8, 0xdff8, 0x1ff0, 0x9ef0, 0xfef0, 0xdef0, 0x7ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x0e6b, 0x2a42, 0x7695, 0x3db7, 0x3c8e, 0x3f97, 0x9f8f, 0x7f87, 0xff8e, 0x1e8f, 0x3e8f, 0xde86, 0x5e76, 0x3d6e, 0x9b6e, 0xfa6d, 0x185d, 0x344c, 0xf03b, 0x0e3b, 0x0e33, 0x4b22, 0x8919, 0x4a21, 0x8b29, 0x6b21, 0xd043, 0xf683, 0x7bda, 0x19e8, 0xdbf8, 0xbcf8, 0xdbf1, 0x9cf1, 0x1cf0, 0x1ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0xfef0, 0xbef0, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x3ff8, 
0x8b6a, 0x8839, 0x736c, 0x5a86, 0x1f9f, 0xbe86, 0x1f8f, 0x3f97, 0x7f8f, 0x9e7e, 0x995d, 0x744c, 0x4f43, 0x0b42, 0x2839, 0x0529, 0xa528, 0x2631, 0xc539, 0xa742, 0x093a, 0xeb42, 0x8c4a, 0xec52, 0xed5b, 0x0f6b, 0xf063, 0x3063, 0x559d, 0xcb4a, 0x6721, 0x0d5a, 0x0520, 0x76b1, 0x7be0, 0x5ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0x9ff8, 0x3ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xf49a, 0x8938, 0xfaad, 0x724c, 0xdf9f, 0xff97, 0x5c86, 0xf454, 0x0c32, 0x682a, 0x683a, 0xca3a, 0xef5b, 0xf163, 0xf063, 0xf063, 0xd164, 0x346c, 0x7985, 0xdc8d, 0x1c86, 0x5c8e, 0x9b8e, 0x5d96, 0xbe8f, 0x9e8f, 0x9f8f, 0xbf97, 0x5f9f, 0xd87d, 0xa839, 0x0e8a, 0xf1a9, 0x7ae1, 0x7de0, 0xfff8, 0x9ff8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ef8, 0xddf8, 
0x75c1, 0x59e3, 0xcc72, 0x8e63, 0x5a96, 0x7c9e, 0xab32, 0xac4a, 0x8e6b, 0xd384, 0x167d, 0x1875, 0xba75, 0xfd8e, 0xde9f, 0x5d8f, 0x3e8f, 0xdf97, 0xff97, 0x5fa7, 0xffa7, 0xffaf, 0xffc7, 0x1eb7, 0x5eaf, 0xffbf, 0x5faf, 0xffbf, 0x9fa7, 0x9fbf, 0x1fc6, 0x5ab3, 0xdbd8, 0x1df0, 0xdef8, 0x1ef8, 0x1ff8, 0x3ff8, 0x3ef8, 0xdef8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xdde8, 0x3dea, 0x0951, 0x2842, 0x0f6b, 0xaf63, 0x4b42, 0x4e63, 0x906b, 0xd15b, 0x198e, 0xdfbf, 0x9fb7, 0xffb7, 0xdea7, 0xffaf, 0xdfb7, 0x5fb7, 0x1eaf, 0x7daf, 0xffb7, 0xffbf, 0x1ebf, 0xffdf, 0xffe7, 0x9ecf, 0x9fbf, 0xffb7, 0xffb7, 0xffb7, 0x3eb7, 0x9fde, 0x1ee2, 0x3ef0, 0x1ff8, 0x1ff8, 0x3ff8, 0x1ef0, 0xdff8, 0x9ff8, 0xbff0, 0x9ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x5ff8, 0x9ad0, 0xc948, 0x4008, 0x4118, 0x0000, 0xe100, 0x4a22, 0x534b, 0x3864, 0x976c, 0x7dae, 0xffdf, 0x9ecf, 0x9ebf, 0xffbf, 0xffbf, 0xffb7, 0xffc7, 0xdeb7, 0xbdaf, 0xffcf, 0x1ec7, 0x369d, 0x0a5b, 0x35a5, 0xffdf, 0xffd7, 0x9fcf, 0xffcf, 0xffd7, 0x19ae, 0x9ff6, 0xfbe3, 0x9ce1, 0xdde8, 0x7ff8, 0x5ff8, 0x1ff8, 0x1ff0, 0x9ff0, 0x5ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ef8, 0x9be0, 0x2b60, 0xc320, 0x474a, 0x8642, 0xe421, 0xec4a, 0x8e32, 0x512a, 0xaf12, 0x596d, 0x7fdf, 0xbfd7, 0xffd7, 0xffcf, 0xffbf, 0xffc7, 0xffcf, 0xffcf, 0x5fd7, 0xffdf, 0xf9be, 0xc842, 0x6221, 0x12a5, 0xdef7, 0x7bdf, 0xf5bd, 0xf6c5, 0xb5b5, 0x4b63, 0x2c6b, 0xd2a4, 0x31ac, 0x96d2, 0xdce8, 0x1ff8, 0x3ff0, 0x7ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0xbff8, 0xdde0, 0x2f79, 0x4639, 0x36ce, 0x52a5, 0x8e8c, 0x0742, 0x4a42, 0x7053, 0x8e12, 0x501a, 0x5dae, 0xffe7, 0x7fdf, 0x3dd7, 0xbcd7, 0xfeef, 0x7eef, 0x7bdf, 0x37c6, 0x15c6, 0xf1a4, 0x874a, 0x2c63, 0xdeef, 0x59df, 0x8b84, 0x0031, 0xa039, 0xe339, 0xa120, 0x4020, 0x4018, 0xa552, 0x2b83, 0x16da, 0xf9e0, 0xfcf0, 0x1ff8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff8, 0x5bd8, 0xf299, 0x8428, 0x94b5, 0x309c, 0xd4ad, 0xb39c, 0xaa4a, 0x0d42, 0x0a01, 0xae11, 0x198d, 0xffe7, 0x9fff, 0x7dee, 0xb07b, 0x37b5, 0xb39c, 0xa852, 0x8439, 0x4229, 0x0000, 0x6000, 0x693a, 0xb284, 0xae8c, 0x855a, 0xe008, 0x0010, 0x8010, 0x0008, 0x0008, 0x2010, 0x0a63, 0x9094, 0x296a, 0x91aa, 0xd7d0, 0x7ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
0x5ef8, 0x5ce8, 0x3bd1, 0xae60, 0x749c, 0xd4a5, 0x949c, 0xbbd6, 0x6e63, 0x6609, 0x0801, 0x3454, 0x1ecf, 0xbbdf, 0xc973, 0xe249, 0x8018, 0x4139, 0xa021, 0x4018, 0x0018, 0x0000, 0x0008, 0x2000, 0x6719, 0xb06c, 0x8a73, 0xa54a, 0x2000, 0x6000, 0x4a84, 0xcfa5, 0x4211, 0x4000, 0xa100, 0xd07b, 0x8842, 0xc740, 0x39da, 0xbae0, 0xbef0, 0x1ff8, 0x1ff8, 0x3ff8, 0x9ff8, 0xdff0, 
0x1df8, 0x3ef8, 0xdee8, 0xb7a8, 0x2d69, 0x56b5, 0x1194, 0x99c6, 0x18ae, 0x891a, 0xad3a, 0x5fdf, 0x75b5, 0xc128, 0x4562, 0x445a, 0x2010, 0xe010, 0x0000, 0x2000, 0x8000, 0x6542, 0x8542, 0x8000, 0x2a5a, 0x084a, 0x0542, 0x2a6b, 0xcc7b, 0x51ad, 0x2ead, 0x6fbe, 0x4c95, 0x6000, 0xe000, 0x4000, 0x707c, 0xca52, 0x3092, 0xf9d2, 0x1cd8, 0x1ff0, 0x1ff8, 0x1ff8, 0x1ef8, 0x5ff8, 
0x9ef8, 0x1ef8, 0x1ff8, 0xdee0, 0x0a40, 0xd6a4, 0x72a4, 0x36bd, 0x7dcf, 0xf895, 0xbab6, 0xb7a5, 0x6100, 0x8000, 0x1ac6, 0x3395, 0xc64a, 0x6000, 0x0021, 0xe54a, 0x255a, 0x4239, 0x6d84, 0xe329, 0xb4a5, 0x139d, 0x0d7c, 0x4a63, 0x074a, 0x4642, 0x0963, 0x6752, 0x6229, 0x0008, 0x0000, 0xe100, 0xe94a, 0x7184, 0xee4b, 0xf79c, 0xd9d1, 0x3cf8, 0x3ef8, 0xbff8, 0x1ef8, 0x1ef8, 
0xbff0, 0x1ff0, 0x1ff8, 0xdee0, 0xf170, 0x36a3, 0xf2ac, 0x72ad, 0xb7be, 0x77b6, 0xd5ad, 0xc008, 0x6000, 0x6000, 0x2f6c, 0x7de7, 0x74c6, 0x91c6, 0x91d6, 0x53ef, 0xaece, 0x805a, 0x077c, 0x8763, 0x6110, 0x2000, 0x6000, 0x6000, 0xc000, 0x6000, 0x2119, 0x509d, 0x11a5, 0x2f94, 0xa008, 0x4008, 0x4000, 0x6f6c, 0x735d, 0x314b, 0xfeec, 0xd8c8, 0xbff0, 0x1ff8, 0x1ff8, 0x1ff8, 
0x1ff0, 0xbff8, 0x7ff8, 0xbce0, 0x57b1, 0x4e69, 0xbacd, 0xf4ad, 0xf4bd, 0x76ce, 0x8000, 0xc008, 0xc010, 0x2008, 0xea5a, 0x7eef, 0xca5b, 0x17ce, 0x909c, 0xa96b, 0x454a, 0xb0a4, 0x72b5, 0x4021, 0x0000, 0x0100, 0xa000, 0xe731, 0x0f74, 0xaf7c, 0x6331, 0xaa6b, 0x6853, 0xb6be, 0x12a5, 0x0221, 0xe000, 0x8000, 0xd27c, 0xb074, 0x317b, 0x3ce4, 0xfce0, 0x1ff8, 0x7ff8, 0xdff8, 
0x1ff8, 0x5ff8, 0x1ff8, 0x5ef8, 0x9ad0, 0x3178, 0xbab4, 0x59ad, 0x59c6, 0xb8ce, 0xa421, 0x8000, 0x0110, 0x0000, 0xe731, 0x3de7, 0x1295, 0xae84, 0x2331, 0xf2ad, 0x9dff, 0x1cff, 0xee8c, 0x4000, 0x4529, 0xc631, 0x1174, 0x3073, 0x2e6b, 0x518c, 0xa74a, 0x52a5, 0x1cce, 0x0f53, 0x6a32, 0x2b3a, 0x8829, 0xc200, 0xa218, 0xd5bd, 0x0b6b, 0xb4b3, 0x79d9, 0x1cf0, 0x9df0, 0x1ef8, 
0x7ef8, 0x1ef8, 0x1ff8, 0x1ff8, 0x7ff8, 0x1cd1, 0x126a, 0x1bae, 0xb8ad, 0x58be, 0x4331, 0x2029, 0x0241, 0x465a, 0x8010, 0xb295, 0x9ce7, 0x2e73, 0x6d73, 0xdadf, 0x35be, 0x0642, 0x0419, 0x0d63, 0xf4ad, 0x6d73, 0x8731, 0xee73, 0x233a, 0x4029, 0xe34a, 0x8018, 0x518c, 0xb7a5, 0x0f5b, 0x4e4b, 0x8b32, 0x2719, 0x8100, 0xc318, 0x8008, 0xa430, 0x9adb, 0x19d1, 0xdef0, 0x7ff8, 
0xdff0, 0xbff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xded8, 0xb281, 0xb9b5, 0xfac6, 0x9ace, 0x6f8c, 0xafa5, 0xcc94, 0x2b8c, 0x2a73, 0xa74a, 0x3adf, 0xf7be, 0x7495, 0xab42, 0xa92a, 0xec32, 0x3153, 0xf995, 0x7dd7, 0x98be, 0x083a, 0xc110, 0xc229, 0x6231, 0xc110, 0x6218, 0x6f9c, 0xc963, 0xe108, 0x2000, 0x0100, 0x6000, 0x6000, 0x0000, 0x2000, 0x0008, 0xb08a, 0xfbdb, 0x5de8, 0x1ff8, 
0x1ff8, 0x1ff8, 0x3ef8, 0x3ef8, 0x5ff8, 0x9de0, 0x74a0, 0xd8bb, 0x3283, 0x7bbe, 0x7cc6, 0x7bbe, 0xdccf, 0x8e5b, 0x2d5b, 0x4e5b, 0x39be, 0x3ccf, 0x4e53, 0x6400, 0x3454, 0xb454, 0x7464, 0x336c, 0x916c, 0x8f63, 0xad63, 0xc110, 0xeb6b, 0x8c7b, 0xe652, 0x53b5, 0x0b84, 0x8b7c, 0x6110, 0x0008, 0x0008, 0x6120, 0x0020, 0xe028, 0x6019, 0x6008, 0xc852, 0x19dc, 0x5ae1, 0x5ef8, 
0xbff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x3ef8, 0x1df0, 0xd9d8, 0x9198, 0x8a59, 0xd18c, 0x5ace, 0x3abe, 0x5dc7, 0xb8a5, 0x57a5, 0xf48d, 0x579d, 0x59ae, 0x17a6, 0x4519, 0xa410, 0xa831, 0x6310, 0x0100, 0x4000, 0x6000, 0xa000, 0xa000, 0x484a, 0x12a5, 0x6021, 0xe752, 0x0c73, 0x3194, 0x483a, 0x6000, 0x6000, 0xe319, 0xc210, 0x8008, 0x0000, 0x2000, 0xa89c, 0xefd4, 0xd9ea, 0x1ad1, 
0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ef8, 0x9ef8, 0x5ce0, 0xf5a8, 0x0528, 0xc942, 0x58be, 0x39be, 0x78b6, 0x1edf, 0xf8a5, 0xb8a5, 0x9263, 0x1fdf, 0x716b, 0xd69d, 0xe942, 0xe210, 0x8000, 0x2008, 0x8118, 0x8018, 0xa331, 0x0010, 0x4842, 0xc420, 0x4110, 0x2000, 0x4000, 0x4000, 0xc000, 0xc000, 0x2000, 0x0000, 0xe008, 0x0000, 0xc000, 0x0000, 0x90bd, 0xefc4, 0x0d98, 0x95c9, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff8, 0x1ef0, 0x19c8, 0x6a40, 0x0310, 0xb08c, 0x38c6, 0x15a5, 0x9284, 0xdcce, 0x3274, 0x0200, 0x97bd, 0xd19c, 0xc852, 0x4221, 0x2000, 0x6000, 0x0129, 0xe442, 0x4010, 0xa000, 0x6008, 0x6000, 0x0000, 0x6100, 0x0100, 0xc100, 0x0000, 0x2000, 0x0000, 0x0000, 0x6000, 0x0110, 0xc000, 0x6000, 0xe000, 0x066b, 0xeb9b, 0x6c99, 0xd3d2, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x7ce0, 0x17aa, 0x6941, 0x6539, 0x6f94, 0xb8de, 0xad7b, 0x59b6, 0x4f5b, 0x6200, 0x7bd7, 0x79ce, 0xca52, 0x0210, 0x8000, 0x0000, 0x0000, 0x0000, 0x8008, 0x8008, 0x0000, 0x0000, 0x6108, 0x0000, 0xa231, 0x4352, 0x077b, 0xea8b, 0x4129, 0xa000, 0x4000, 0x6000, 0x2000, 0x4000, 0x0000, 0x0008, 0x6120, 0x2979, 0x70c3, 
0x3ff8, 0x1ff8, 0x1ff8, 0x3ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0xfde8, 0xb5a1, 0xea51, 0xc220, 0x2552, 0x11bd, 0x14c6, 0x4c5b, 0xd8ad, 0x3bb6, 0xfbbe, 0xfdd7, 0x4f6c, 0x9063, 0x0300, 0xe200, 0x0000, 0x8008, 0xa010, 0x6010, 0x4018, 0x0031, 0xca9c, 0x69a4, 0xa57b, 0xe663, 0x854a, 0x6018, 0xe008, 0xc000, 0x8000, 0xa000, 0xc000, 0x0000, 0xa008, 0x6108, 0x0010, 0xa450, 0x93dc, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0x1ff8, 0x1ff8, 0xdde8, 0x55a9, 0xe950, 0x0010, 0x4241, 0xa673, 0x6fb5, 0x0531, 0xcf7c, 0xd29d, 0x308c, 0x1adf, 0xfeff, 0xfeff, 0x15ad, 0x0000, 0x8100, 0x8100, 0x0000, 0x4000, 0x6000, 0x8100, 0x0a4a, 0x8953, 0x095b, 0xab6c, 0x0c6c, 0xc000, 0xc000, 0xa000, 0x8000, 0x2008, 0x4000, 0x0000, 0x0000, 0x4000, 0x0008, 0x0228, 0xd5c3, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x7ff8, 0x7ef8, 0x1ff8, 0x1de0, 0xf7c1, 0x0640, 0x4328, 0x8020, 0xc572, 0x8a9c, 0xa018, 0x2a6b, 0x0a7b, 0x4d94, 0xf2bd, 0x2fa4, 0x4752, 0x6329, 0x8008, 0x2000, 0xa000, 0x6008, 0xe000, 0xe211, 0x8000, 0x928d, 0x307d, 0xf07d, 0xf07d, 0x4d6c, 0x4000, 0x6000, 0x0100, 0x0200, 0x0200, 0x0100, 0xa008, 0xc220, 0x854a, 0xc873, 0xcca4, 0x8cb4, 
0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x9ef8, 0x9ef8, 0x7ff0, 0x3de0, 0x57c1, 0x0958, 0xc328, 0x6010, 0xa883, 0x4783, 0x0008, 0xc85a, 0x6973, 0x8a7b, 0x286b, 0x8000, 0xc000, 0x4000, 0x0000, 0x0000, 0xc008, 0x6000, 0x0000, 0x4000, 0x4000, 0x0a4b, 0xc73a, 0x6319, 0xe200, 0x8100, 0x6118, 0x8221, 0x0119, 0xe221, 0x0431, 0x254a, 0x0773, 0x6ec6, 0x08a5, 0x637c, 0xa052, 0x6262, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0x1ce8, 0x58c1, 0x0a58, 0xc528, 0x8008, 0x6283, 0x29cd, 0x0041, 0xc672, 0xe67b, 0x6993, 0x0349, 0xa018, 0x2018, 0xc010, 0x0000, 0x0000, 0x0000, 0x0000, 0x6200, 0x0100, 0xa000, 0xe229, 0x055a, 0x298c, 0xcbb5, 0xacce, 0x2fe6, 0x2cbd, 0x4652, 0x873a, 0xe410, 0x2410, 0x6210, 0x4008, 0x0000, 0x0008, 0x0218, 0xae82, 
0x1ff8, 0x1ff8, 0x1ff8, 0x1ef8, 0x5ef8, 0x5ef8, 0x5ef8, 0x7ef0, 0x5bd0, 0x5388, 0xea40, 0x0010, 0x8069, 0xaadc, 0xc6a2, 0x8279, 0x6593, 0x0683, 0x2028, 0x0020, 0x6238, 0xc128, 0x0018, 0xc018, 0xa110, 0xa329, 0x2342, 0xcba4, 0x6fff, 0x2eff, 0x8de7, 0xadd6, 0x2bbe, 0xa89c, 0x2573, 0x8031, 0x8000, 0x0100, 0x0000, 0x0000, 0x0008, 0x6008, 0xc118, 0x2328, 0x0528, 0xd7bb, 
0x3ff8, 0x3ef8, 0x7df8, 0x9df8, 0x5ef8, 0x5ef8, 0x9ff8, 0x7ef0, 0xfce0, 0x77b9, 0xa530, 0xc008, 0x8031, 0xcecd, 0x2362, 0x4673, 0x4ca4, 0x2773, 0xa55b, 0x4874, 0xa98c, 0xcdad, 0x696b, 0x074a, 0x2742, 0xa539, 0x8129, 0x234a, 0xa56b, 0x4042, 0x4039, 0x0029, 0x0000, 0x0000, 0x4000, 0x2000, 0x6000, 0x2000, 0x2000, 0x2020, 0x4551, 0x6772, 0x6562, 0x8458, 0x15d2, 0x17d9, 
0x1ff8, 0x1ff8, 0x5ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ef8, 0xbdf0, 0x3bd9, 0x4e69, 0xe100, 0xa000, 0xc86a, 0xca8b, 0x0020, 0x2e9c, 0xf3d6, 0xadd6, 0xebcd, 0x8cc6, 0xc994, 0x6231, 0x4229, 0xa44a, 0x255a, 0x076b, 0xeb83, 0x0000, 0x4100, 0x0200, 0x0200, 0xe328, 0xe120, 0x2120, 0xe541, 0xc752, 0x4010, 0x0220, 0xeb69, 0xab69, 0x0640, 0xb1a8, 0x9ae9, 0x1ef8, 0x1ff8, 
0x5ff8, 0x5ef8, 0x7ef8, 0x3ef8, 0x1ff8, 0x1ff8, 0x3ff8, 0xbff8, 0xffe8, 0xbdd1, 0x6f61, 0x4100, 0x2000, 0xa110, 0x6b83, 0x0018, 0x6000, 0x843a, 0xa029, 0x2031, 0x8872, 0x265a, 0x4331, 0x295b, 0x0329, 0xa010, 0x2008, 0x0000, 0xc520, 0xc529, 0x6218, 0xa431, 0x0859, 0xed81, 0x5298, 0x74a0, 0x4e89, 0x72b3, 0x11b3, 0x6b81, 0x2e90, 0x16c8, 0xdcf0, 0x1ff8, 0x1ff0, 0x3ff0, 
0x1ff8, 0x1ff8, 0xbff8, 0xbff0, 0x5ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff8, 0x1be0, 0x92a1, 0x0220, 0x0010, 0x6010, 0xe352, 0x655a, 0xe000, 0x2000, 0x2000, 0x6108, 0x6218, 0x6110, 0x0008, 0x0000, 0x6000, 0xa74a, 0x6c83, 0x2c8a, 0x51a9, 0x35b8, 0x39d0, 0x1bd0, 0x3cd8, 0xdee8, 0xdff0, 0x3ff0, 0xbcf0, 0x1ae0, 0xdcd8, 0x9de0, 0x1ff8, 0x1ff8, 0x1ff8, 0x7ff8, 0x1ff8, 0x1ff8, 
0xfee8, 0x7ef0, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xddf8, 0xfdf8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1de8, 0x5de8, 0x76b8, 0x0d70, 0x8950, 0x2210, 0xa100, 0x0218, 0xa950, 0x6e68, 0x2e70, 0x8e81, 0x4960, 0x0d78, 0x3190, 0x13a0, 0x1ad0, 0x1ff0, 0x5ff8, 0x1df0, 0xddf8, 0x1df0, 0x5ef8, 0x1ef8, 0x9ef8, 0xbef8, 0x1ef0, 0x1ff8, 0x9ff8, 0x1ff8, 0x5ff8, 0xbef0, 0xbef0, 0x3ef8, 0xddf0, 
0x1ff8, 0x1ff8, 0x3ff8, 0x3ff8, 0x5ff8, 0x5ff8, 0x5ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0xdff8, 0xdff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff8, 0x1bd8, 0x19c8, 0x1ad8, 0xdef8, 0x1ef0, 0x1ef0, 0x5ad8, 0x19d0, 0x1ce0, 0x3ef0, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0xbff8, 0x1ff8, 0x7ff8, 0x1ff8, 0x1ff8, 0x1ef8, 0xfef8, 0x1ef8, 0x1ff8, 0x1ff8, 0x1ff8, 0x9ff8, 0x1ff8, 0x1ff8, 0x5ff8, 0x1ff8};


#define CACTUS_WIDTH (16)
#define CACTUS_HEIGHT (40)
const uint16_t CACTUS[] PROGMEM = {0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x1ff8, 0x3ff8, 0x1ff8, 0x1ff8, 0x1ff8, 
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
