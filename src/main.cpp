#include <Arduino.h>
#include "display_module.h"

int count = 0;

void setup() {
  initDisplay();
}

void loop() {
  count++;
  // 調用顯示函式，只傳入資料
    if (count % 2 == 0) {
        updateUI(count, "SYSTEM RUNNING");
    } else {
        updateUI(count, "PROCESSING...");
    }

    delay(100);
}