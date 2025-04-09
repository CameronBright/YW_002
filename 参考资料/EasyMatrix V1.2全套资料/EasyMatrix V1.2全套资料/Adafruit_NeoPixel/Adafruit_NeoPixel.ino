#include <Adafruit_NeoPixel.h>

#define PIN 1  // 灯珠数据输入引脚
#define NUMPIXELS 64// 灯珠数量
#define DELAYVAL 50

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.setBrightness(50);
}

void loop() {
  pixels.clear();
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 250, 250));
    pixels.show();
    delay(DELAYVAL);
  }
}
