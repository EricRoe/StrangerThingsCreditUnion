#include <FastLED.h>

#include "alphabet.h"
#include "colors.h"

#define NUM_LEDS 50
#define DATA_PIN 6

CRGB leds[NUM_LEDS];
int msg[] = {S,T,C,U};
int msg_length = 4;
  
void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
  randomSeed(millis);
}

void loop() {  
  
  rainbowLoop(); 

}



void print(int str[],int len, int d) {
  for(int i = 0; i < len; i++) {
    showSingle(str[i], JAM, d);
    hideSingle(str[i], d);    
  }
}

void showSingle(int led, int color, int d){
  leds[led] = color;
  FastLED.show();
  delay(d);
}

void hideSingle(int led, int d) {
  leds[led] = OFF;
  FastLED.show();
  delay(d);
}
