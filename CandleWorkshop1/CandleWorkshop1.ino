#include <Adafruit_NeoPixel.h>
#define PIN 0 // where your NeoPixel is attached to the board

// set the number of pixels in the series
// NEO_GRB for most NeoPixels, but NEO_RGB for the through-hole models
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  //strip.setPixelColor(0, 255, 255, 255);
  //strip.show();
}
