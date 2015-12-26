#include "libcolor.h"

colors::colors(uint8_t theme)
{
  if(theme > 3 || theme < 0)
    theme = 0;
  _theme = theme;
}
uint16_t colors::BLACK(void){
  return blacks[_theme];
}
uint16_t colors::RED(void){
  return reds[_theme];
}
uint16_t colors::BLUE(void){
  return blues[_theme];
}
uint16_t colors::GREEN(void){
  return greens[_theme];
}
uint16_t colors::YELLOW(void){
  return yellows[_theme];
}
uint16_t colors::WHITE(void){
  return whites[_theme];
}
  
uint16_t colors::CYAN(void){
  return cyans[_theme];
}
uint16_t colors::MAGENTA(void){
  return magentas[_theme];
}
uint16_t colors::GRAY(void){
  return grays[_theme];
}
uint16_t colors::SILVER(void){
  return silvers[_theme];
}
uint16_t colors::ORANGE(void){
  return oranges[_theme];
}
uint16_t colors::TOMATO(void){
  return tomatoes[_theme];
}
uint16_t colors::NAVY(void){
  return navies[_theme];
}
uint16_t colors::LIME(void){
  return limes[_theme];
}
uint16_t colors::VIOLET(void){
  return violets[_theme];
}
uint16_t colors::PINK(void){
  return pinks[_theme];
}
uint16_t colors::OLIVE(void){
  return olives[_theme];
}
uint16_t colors::WHEAT(void){
  return wheats[_theme];
}
uint16_t colors::TEAL(void){
  return teals[_theme];
}
uint16_t colors::INDIGO(void){
  return indigoes[_theme];
}
uint16_t colors::SALMON(void){
  return salmons[_theme];
}

colorUtil::colorUtil(void){
  
}
uint16_t colorUtil::rgb565(uint8_t r, uint8_t g, uint8_t b){
  uint16_t rb, gb, bb;
  rb = (r & 0xF8) << 8;
  gb = (g & 0xFC) << 3;
  bb = b >> 3;
  return rb | gb | bb;
}
uint16_t colorUtil::htmlCode(char *code){
  uint32_t n = (uint32_t) strtol( &code[1], NULL, 16);
  return rgb565(n >> 16, n >> 8 & 0xFF, n & 0xFF);
}