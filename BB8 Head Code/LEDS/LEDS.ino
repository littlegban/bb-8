#include "FastLED.h"
#include "definitions.h"
#define NUM_LEDS 12
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
}

void loop() {
  PSI();
  HP();
  eye();
  logicOne();
  logicTwo();
  logicThree();
 
  FastLED.show();
}

void PSI() {
  leds[0] = CRGB::White;
}

void HP() {
  leds[1] = CRGB::Blue;
}

void eye() {
  leds[2] = CRGB::Red;
}

void logicOne() {
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
}

void logicTwo() {
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
}

void logicThree() {
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
}