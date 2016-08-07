#include "FastLED.h"
#define NUM_LEDS 12
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
}

void loop() {
  leds[0] = CRGB::White;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Red;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
 
  FastLED.show();
}
