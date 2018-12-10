#include <FastLED.h>

#include "alphabet.h"
#include "colors.h"

#define NUM_LEDS 50
#define DATA_PIN 6

CRGB leds[NUM_LEDS];
int msg[] = {R,U,N};
int msg_length = 3;
  
void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {  

  for(int i = 0; i < 20; i++){ xmas(); }
  for(int i = 0; i < 2; i++){ red_green(); }

  delay(seconds(3));
  print(msg, msg_length, 1000); 
  delay(seconds(2));

  for(int i = 0; i < 20; i++){ scary2(); }

  clear();
  delay(seconds(5));
}
