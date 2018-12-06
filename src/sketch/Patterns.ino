void rainbowLoop() {
  for (int i = 0; i < 256; i++){
    leds[i % NUM_LEDS].setHue(i);
    FastLED.show();
    delay(50);
    leds[i] = OFF;
    FastLED.show();
  }
}

void rainbow() {
  for (int i = 0; i < 256; i++){
    for(int l = 0; l < NUM_LEDS; l++){
      leds[l].setHue(i); 
    }
    FastLED.show();
    delay(50);
  }
}

void rainbowWave(){
  for(int h = 0; h < 256; h = h + 16){
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i].setHue((h+i)%256);
      FastLED.show();
      delay(50);
    }
  }
}

void scary(){
  CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Purple};
  for (int i = 0; i < NUM_LEDS; i++) {
    if (random(3) == 0){
      leds[i] = colors[random(4)];
    } else {
      leds[i] = OFF;
    }
  }
  FastLED.show();
  delay(100);
}

void scary2(){
  CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Purple};
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = colors[random(1, 4)];
  }
  FastLED.show();
  delay(100);
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = OFF;
  }
  FastLED.show();
  delay(100);
}

void xmas(){
  
}
