#include <Arduino.h>
#include "display_module.h"

void setup() {
    Serial.begin(115200);
    
    // 呼叫自定義的初始化函數
    initDisplay();
    
   
}

void loop() {
    
}