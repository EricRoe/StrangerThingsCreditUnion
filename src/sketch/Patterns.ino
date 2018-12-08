void rainbowLoop() {
  for (int i = 0; i < NUM_LEDS; i++){
    leds[i].setHue(i*5);
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

void red_green(){
  fill_solid(leds, NUM_LEDS, CRGB::Green);
  for (int i = 0; i < 256; i++){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(15);
  }
  for (int i = 255; i >= 0; i--){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(15);
  }
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  for (int i = 0; i < 256; i++){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(15);
  }
  for (int i = 255; i >= 0; i--){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(15);
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
  CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Purple, CRGB::Green};
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = colors[random(5)];
  }
  FastLED.show();
  delay(150 + random(100));
  
  fill_solid(leds, NUM_LEDS, OFF);
  FastLED.show();
  delay(50 + random(200));
}

void xmas(){
  for (int i = 0; i < NUM_LEDS; i++){
    if(i % 2 == 0){
      leds[i] = CRGB::Red;
    } else {
      leds[i] = CRGB::Green;
    }
  }
  FastLED.show();
  delay(400);
  for (int i = 0; i < NUM_LEDS; i++){
    if(i % 2 == 1){
      leds[i] = CRGB::Red;
    } else {
      leds[i] = CRGB::Green;
    }
  }
  FastLED.show();
  delay(400);
}
