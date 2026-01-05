#ifndef DISPLAY_MODULE_H
#define DISPLAY_MODULE_H

#include <TFT_eSPI.h>

// 初始化螢幕
void initDisplay();

// 更新顯示畫面的函式 (傳入想要顯示的數值)
void updateUI(int value, const char* status);

#endif