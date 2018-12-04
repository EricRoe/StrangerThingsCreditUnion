#include <FastLED.h>

#define NUM_LEDS 50
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < NUM_LEDS; i++){
    leds[i].setHue(i*5);
    FastLED.show();
    delay(50);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}
