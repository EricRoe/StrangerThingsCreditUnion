#include <FastLED.h>

#include "alphabet.h"
#include "colors.h"

#define NUM_LEDS 50
#define DATA_PIN 6

CRGB leds[NUM_LEDS];
int msg[] = {S, W, E, E, T, I, E};
int msg_length = 7;
  
void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {  

  xmas();
  

}



void print(int str[],int len, int d) {
  for(int i = 0; i < len; i++) {
    showSingle(str[i], JAM, d);
    hideSingle(str[i], d);    
  }
}

void showSingle(int led, long color, int d){
  leds[led] = color;
  FastLED.show();
  delay(d);
}

void hideSingle(int led, int d) {
  leds[led] = OFF;
  FastLED.show();
  delay(d);
}
