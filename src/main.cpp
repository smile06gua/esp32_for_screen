#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// 4D Systems ESP32-S3 RGB 燈通常在 GPIO 48
Adafruit_NeoPixel rgb(1, 48, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  rgb.begin();
  
  // 關鍵：如果沒連上 Serial，燈會閃黃燈等你，程式不往下跑
  while (!Serial) {
    rgb.setPixelColor(0, rgb.Color(50, 50, 0)); // 黃色
    rgb.show();
    delay(200);
    rgb.setPixelColor(0, rgb.Color(0, 0, 0));
    rgb.show();
    delay(200);
  }

  Serial.println("\n\n*******************************");
  Serial.println("   終於連上了！這就是你要的輸出！");
  Serial.println("*******************************\n");
}

void loop() {
  // 成功連線後，燈會變綠色閃爍，並每秒印一次訊息
  rgb.setPixelColor(0, rgb.Color(00, 50, 0)); // 綠色
  rgb.show();
  Serial.printf("系統運行中... 毫秒數: %lu\n", millis());
  delay(500);
  
  rgb.setPixelColor(0, rgb.Color(0, 0, 0));
  rgb.show();
  delay(500);
}