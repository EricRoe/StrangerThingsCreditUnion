void clear(){
  fill_solid(leds, NUM_LEDS, OFF);
  FastLED.show();
}

int seconds(int s){
  return 1000*s;
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
