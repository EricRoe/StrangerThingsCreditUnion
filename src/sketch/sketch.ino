#include <FastLED.h>
#include "alphabet.h"

#define NUM_LEDS 50
#define DATA_PIN 6
#define OFF CRGB::Black

CRGB leds[NUM_LEDS];
int msg[] = {S,T,C,U};
int msg_length = 4;
  
void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
  
}

void loop() {  
  
  print(msg, msg_length, 500);
  rainbowLoop();    

}

void rainbowLoop() {
  for (int i = 0; i < NUM_LEDS; i++){
    leds[i].setHue(i*5);
    FastLED.show();
    delay(50);
    leds[i] = OFF;
    FastLED.show();
  }
}

void print(int str[],int len, int d) {
  for(int i = 0; i < len; i++) {
    leds[str[i]] = 0x982371;
    FastLED.show();
    delay(d);
    
    leds[str[i]] = OFF;
    FastLED.show();
    delay(d);
  }
}

void showFor(int led, int color, int d){
  
}
