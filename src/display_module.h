#ifndef DISPLAY_MODULE_H
#define DISPLAY_MODULE_H

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

// 宣告全域物件
extern Adafruit_ST7735 tft;

void initDisplay();

#endif