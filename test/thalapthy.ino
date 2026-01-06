#include <SPI.h>
#include <TFT_eSPI.h>  
#include "thalapathy.h"
#define animation_height 240
#define animation_width 320

TFT_eSPI tft = TFT_eSPI();
void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(1);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
  delay(1000);
  tft.fillScreen(TFT_BLACK);
  delay(1000);
  tft.pushImage(0, 0, animation_width, animation_height, thalapathy);
}

void loop() {
}