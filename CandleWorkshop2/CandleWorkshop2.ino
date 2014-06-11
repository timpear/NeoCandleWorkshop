#include <Adafruit_NeoPixel.h>
#define PIN 0

Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  colorStep(2000);
  fader();
  fadeRepeater(4);
}

void colorStep(int pause) {
  strip.setPixelColor(0, 255, 0, 0);
  strip.show();
  delay(pause);
  strip.setPixelColor(0, 0, 255, 0);
  strip.show();
  delay(pause);
  strip.setPixelColor(0, 0, 0, 255);
  strip.show();
  delay(pause);
  strip.setPixelColor(0, 255, 255, 255);
  strip.show();
  delay(pause);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(pause);
}

void fader() {
  for (int i = 0; i < 255; i++) {
    strip.setPixelColor(0, i, i, 0);
    strip.show();
    delay(4);
  }
  for (int i = 255; i > 0; i--) {
    strip.setPixelColor(0, i, i, 0);
    strip.show();
    delay(4);
  }  
}

void fadeRepeater (int reps) {
  for (int i = 0; i < reps; i++) {
    fader();
  }
}
