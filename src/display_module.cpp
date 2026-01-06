#include "display_module.h"

// 直接定義腳位
#define TFT_CS   10
#define TFT_DC   14
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_RST  21

// 初始化物件 (軟體 SPI 方式最保險，若要追求速度再改硬體 SPI)
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void initDisplay() {
    Serial.println(">>> Adafruit ST7735 Init Start...");
    
    // 初始化 1.44 吋螢幕 (常見的綠標或紅標)
    tft.initR(INITR_144GREENTAB); 
    
    tft.fillScreen(ST77XX_BLACK);
    tft.setCursor(0, 0);
    tft.setTextColor(ST77XX_WHITE);
    tft.setTextSize(1);
    tft.println("Hello ESP32-S3!");
    
    Serial.println(">>> Display Ready!");
}