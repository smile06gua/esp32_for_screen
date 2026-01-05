#include "display_module.h"

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite canvas = TFT_eSprite(&tft);

void initDisplay() {
    tft.init();
    tft.setRotation(0);
    tft.fillScreen(TFT_BLACK);
    
    // 建立 128x128 畫布
    canvas.createSprite(128, 128);
    canvas.setTextDatum(MC_DATUM); 
}

void updateUI(int value, const char* status) {
    canvas.fillSprite(TFT_BLACK); // 清除畫布
    
    // 畫標題
    canvas.setTextColor(TFT_GOLD);
    canvas.drawString("SYSTEM INFO", 64, 15, 2);
    
    // 畫中間的大數字
    canvas.setTextSize(3);
    canvas.setTextColor(TFT_WHITE);
    canvas.drawNumber(value, 64, 64);
    
    // 畫底部的狀態文字
    canvas.setTextSize(1);
    canvas.setTextColor(TFT_GREEN);
    canvas.drawString(status, 64, 110);
    
    // 畫外框
    canvas.drawRect(0, 0, 128, 128, TFT_BLUE);

    // 將畫布噴到螢幕
    canvas.pushSprite(0, 0);
}