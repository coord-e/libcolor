#ifndef _LIBCOLOR_H
#define _LIBCOLOR_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <avr/pgmspace.h>

#define THEME_PRIMARY 0
#define THEME_FLAT 1
#define THEME_JAPANESE 2
#define THEME_WESTERN 3

class colors{

public:

  colors(uint8_t theme);
  
  uint16_t BLACK(void);
  uint16_t RED(void);
  uint16_t BLUE(void);
  uint16_t GREEN(void);
  uint16_t YELLOW(void);
  uint16_t WHITE(void);
  
  uint16_t CYAN(void);
  uint16_t MAGENTA(void);
  uint16_t GRAY(void);
  uint16_t SILVER(void);
  uint16_t ORANGE(void);
  uint16_t TOMATO(void);
  uint16_t NAVY(void);
  uint16_t LIME(void);
  uint16_t VIOLET(void);
  uint16_t PINK(void);
  uint16_t OLIVE(void);
  uint16_t WHEAT(void);
  uint16_t TEAL(void);
  uint16_t INDIGO(void);
  uint16_t SALMON(void);
  
private:
  const uint16_t blacks[4] = {0x0000,0x29ea,0x0802,0x0000};
  const uint16_t reds[4] = {0xf800,0xc1c5,0xd987,0xeaaa};
  const uint16_t blues[4] = {0x001f,0x2c17,0x4b76,0x03b8};
  const uint16_t greens[4] = {0x0400,0x256c,0x036a,0x054d};
  const uint16_t yellows[4] = {0xffe0,0xf4e2,0xfec0,0xfee0};
  const uint16_t whites[4] = {0xffff,0xef9e,0xffff,0xffff};
  
  const uint16_t cyans[4] = {0x07ff,0x8e3e,0xa6dd,0x051d};
  const uint16_t magentas[4] = {0xf81f,0x8a35,0xb272,0xe00f};
  const uint16_t grays[4] = {0x8410,0x7c71,0x94b2,0x7bef};
  const uint16_t silvers[4] = {0xc618,0xbe18,0xc639,0xce59};
  const uint16_t oranges[4] = {0xfd20,0xd2a0,0xfda0,0xebc0};
  const uint16_t tomatoes[4] = {0xfb08,0xe267,0xec0d,0xeaa9};
  const uint16_t navies[4] = {0x0010,0x19d2,0x4a51,0x216a};
  const uint16_t limes[4] = {0x07e0,0x2e6e,0x3d8e,0xe752};
  const uint16_t violets[4] = {0xec1d,0xbc9a,0xc517,0x5a33};
  const uint16_t pinks[4] = {0xfe19,0xe410,0xedd9,0xf596};
  const uint16_t olives[4] = {0x8400,0xeeac,0x6c03,0x7321};
  const uint16_t wheats[4] = {0xf6f6,0xff14,0xff18,0xff7c};
  const uint16_t teals[4] = {0x0410,0x1510,0x0288,0x034d};
  const uint16_t indigoes[4] = {0x4810,0x6193,0x6191,0x01ef};
  const uint16_t salmons[4] = {0xfc0e,0xe34d,0xeccd,0xf531};
  
  uint8_t _theme;
};
  
class colorUtil{

public:

  colorUtil(void);
 
  static uint16_t rgb565(uint8_t r, uint8_t g, uint8_t b);
  static uint16_t htmlCode(char *code);

private:
 
};
#endif // _LIBCOLOR_H
