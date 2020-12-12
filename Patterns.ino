//                                      ----------------                                                 //
   //////////////////////////////////     ALL PATTERNS    ////////////////////////////////////////////
//                                      ----------------                                                 //
//Here are ALL the Animations and patterns - Sorry if your pattern has no shout-out... I lost track!
//(I TOLD THE ELVES NOT TO DECORATE HERE) - (FOR EASY COPYING TO YOUR OWN SKETCHES)

//======================================================================

void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

//======================================================================

void addSparkle( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::Gold;
    leds[ random16(NUM_LEDS) ] += CRGB::White;     
  }
}

//======================================================================

void addIridescentSparkle( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[random16(NUM_LEDS)] += CRGB::Purple;
    leds[random16(NUM_LEDS)] += CRGB::Cyan;
  }
}

//======================================================================

void addSparklebomb( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
    leds[ random16(NUM_LEDS) ] += CRGB::FairyLight;
    leds[ random16(NUM_LEDS) ] += CRGB::Silver;
    leds[ random16(NUM_LEDS) ] += CRGB::FairyLightNCC;
   }
}

//======================================================================

void addOldSchoolSparkle1( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::FairyLight;
    leds[ random16(NUM_LEDS) ] += CRGB::FairyLightNCC;    
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

//======================================================================

void addOldSchoolSparkle2( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::FairyLightNCC;     
    leds[ random16(NUM_LEDS) ] += CRGB::Yellow;
    leds[ random16(NUM_LEDS) ] += CRGB::Gold;
  }
}

//======================================================================

void addGreenSparkle( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::Green;
    leds[ random8(NUM_LEDS) ] += CRGB::White;
  }
}
//======================================================================

void addRedSparkle( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::Red;     
    leds[ random8(NUM_LEDS) ] += CRGB::White;
  }
}
//======================================================================

void addBlueSparkle( fract8 chanceOfSparkle) 
{
  if( random8() < chanceOfSparkle) {
    leds[ random16(NUM_LEDS) ] += CRGB::Blue;
    leds[ random8(NUM_LEDS) ] += CRGB::White;
  }
}
//======================================================================

void addGlimmer( fract8 chanceOfGlitter) 
{
  int pos = beatsin16(15,1,NUM_LEDS-1);  // (speed , start , end)
  leds[pos] = CRGB( 130, GLOBAL_BRIGHTNESS, GLOBAL_BRIGHTNESS);     // (hue, sat , brightness)

  if( random8() < chanceOfGlitter) {
  leds[random16(0,pos)] += CRGB( 255, 0, GLOBAL_BRIGHTNESS);        
  leds[random16(pos,NUM_LEDS)] += CRGB( 255, 0, GLOBAL_BRIGHTNESS); 
  }
}

//======================================================================

void rainbow_pulse() 
{
    thishue++;
    if (thishue > 255) {thishue = 0;}
    for(int idex = 0 ; idex < NUM_LEDS; idex++ ) {
      leds[idex] = CHSV(thishue, thissat, GLOBAL_BRIGHTNESS);    
    }
      addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void rainbow_pulse2() 
{
    thishue++;
    if (thishue > 255) {thishue = 0;}
    for(int idex = 0 ; idex < NUM_LEDS; idex++ ) {
      leds[idex] = CHSV(thishue, thissat, GLOBAL_BRIGHTNESS);    
      leds[random8(0,NUM_LEDS)] = CHSV(thishue+25, thissat, GLOBAL_BRIGHTNESS);    
    }
FastLED.delay(60);
     addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void bighalfrainbow() 
{
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 1);
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void bigrainbow() 
{
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 2);
  addGlitter(GLITTER_AMOUNT);
  
}

//======================================================================

void rainbow() 
{
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 15);
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void miniRainbow() 
{
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 31);
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void rainbowDots() 
{
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 62);
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void confetti() 
{
  {// random colored speckles that blink in and fade smoothly
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/4);
  int pos = random16(NUM_LEDS);
  leds[pos] += CHSV( gHue + random8(64), 200, 255);
  }
  addGlitter(GLITTER_AMOUNT/4);
}

//======================================================================

void justGlitter() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void justSparkle() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addSparkle(SPARKLE_AMOUNT);
}

//======================================================================

void justSparkleOldSchool1() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addOldSchoolSparkle1(GLITTER_AMOUNT);
}

//======================================================================

void justSparkleOldSchool2() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addOldSchoolSparkle2(GLITTER_AMOUNT);
}

//======================================================================

void IridescentSparkle() 
{ 
  fill_solid(leds,NUM_LEDS,CHSV (ghue,70,(GLOBAL_BRIGHTNESS)));
  addIridescentSparkle(GLITTER_AMOUNT/2);
}
//======================================================================

void CandleTree1() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  fill_solid(leds,NUM_LEDS,CHSV (0,255,(GLOBAL_BRIGHTNESS)));
  addCandles(2);        //chance of flicker
}
//======================================================================
  
void CandleTree2() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  fill_solid(leds,NUM_LEDS,CHSV (85,255,(GLOBAL_BRIGHTNESS)));
  addCandles(2);        //chance of flicker
}
//======================================================================
  
void CandleTree3() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  fill_solid(leds,NUM_LEDS,CHSV (150,255,(GLOBAL_BRIGHTNESS)));
  addCandles(2);        //chance of flicker
}
//======================================================================
  
void CandleTree4() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  fill_solid(leds,NUM_LEDS,CHSV (42,255,(GLOBAL_BRIGHTNESS)));
  addCandles(2);        //chance of flicker
}
//======================================================================

void GreenSparkle() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/2);
  addGreenSparkle(GLITTER_AMOUNT*2);
}

//======================================================================

void RedSparkle() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/2);
  addRedSparkle(GLITTER_AMOUNT*2);
}

//======================================================================

void BlueSparkle() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/2);
  addBlueSparkle(GLITTER_AMOUNT*2);
}

//======================================================================

void rgbSparkle() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/2);
  addGreenSparkle(GLITTER_AMOUNT);
  addRedSparkle(GLITTER_AMOUNT);
  addBlueSparkle(GLITTER_AMOUNT);
}

//======================================================================

void Glimmer() 
{ 
  fill_solid(leds,NUM_LEDS,CHSV (90,255,GLOBAL_BRIGHTNESS));
  addGlimmer(GLITTER_AMOUNT);
//FastLED.delay(30);
}

//======================================================================

void RedRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addRedRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void GreenRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addGreenRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void BlueRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addBlueRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void PurpleRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addPurpleRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void TurquoiseRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addTurquoiseRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void YellowRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addYellowRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void RedWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addRedWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void GreenWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addGreenWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void BlueWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addBlueWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void PurpleWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addPurpleWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void TurquoiseWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addTurquoiseWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void YellowWhiteRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addYellowWhiteRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void GreenBlueRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addGreenBlueRipple(GLITTER_AMOUNT/4),GLOBAL_BRIGHTNESS;
//FastLED.delay(30);
}

//======================================================================

void YellowRedRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addYellowRedRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void TurquoisePurpleRipple() 
{
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED);
  addTurquoisePurpleRipple(GLITTER_AMOUNT/4);
//FastLED.delay(30);
}

//======================================================================

void juggle() {
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/2);

  byte dothue = 0;
  for( int i = 0; i < 8; i++) {
    leds[beatsin16(i+2,0,NUM_LEDS)] |= CHSV(dothue, 250, GLOBAL_BRIGHTNESS);
    dothue += 32;

    }
//    addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void sinelon()    // Original full color
{
  // a colored dot sweeping back and forth, with fading trails
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/32);

  int pos = beatsin16(5,1,NUM_LEDS-1);
  leds[pos] += CHSV( gHue, 255, GLOBAL_BRIGHTNESS);

//  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void sinelon2()    // Original half color (pastel)
{
  // a pastel colored dot sweeping back and forth, with fading trails
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/32);

  int pos = beatsin16(5,1,NUM_LEDS-1);
  leds[pos] += CHSV( gHue, 170, GLOBAL_BRIGHTNESS);

//  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void sinelonWhite()  // Original no color
{
  // a white dot sweeping back and forth, with fading trails
  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/32);

  int pos = beatsin16(10,1,NUM_LEDS-1);
  leds[pos] += CHSV( gHue, 1, GLOBAL_BRIGHTNESS);

//  addOldSchoolSparkle2(SPARKLE_AMOUNT);
}

//======================================================================

void random_burst() 
{
  int rndidx = random16(0, NUM_LEDS);
  int rndhue = random8(50, 200);  
  int rndbright = random8((GLOBAL_BRIGHTNESS-5), GLOBAL_BRIGHTNESS);
  leds[rndidx] = CHSV(rndhue, thissat, GLOBAL_BRIGHTNESS);
}

//======================================================================

void rgb_propeller() 
{
  thishue = 0;
  index++;
  int ghue = (thishue + 85) % 255;
  int bhue = (thishue + 171) % 255;
  int N3  = int(NUM_LEDS/3);
  int N6  = int(NUM_LEDS/6);  
  int N12 = int(NUM_LEDS/12);  
  for(int i = 0; i < N3; i++ ) {
    int j0 = (index + i + NUM_LEDS - N12) % NUM_LEDS;
    int j1 = (j0+N3) % NUM_LEDS;
    int j2 = (j1+N3) % NUM_LEDS;    
    leds[j0].maximizeBrightness();leds[j0] = CHSV(thishue, thissat, GLOBAL_BRIGHTNESS);
    leds[j1].maximizeBrightness();leds[j1]  = CHSV(ghue, thissat, GLOBAL_BRIGHTNESS);
    leds[j2].maximizeBrightness();leds[j2]  = CHSV(bhue, thissat, GLOBAL_BRIGHTNESS);    
  }
      FastLED.delay(30);
//  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void fill_rainbow_3(struct CRGB * pFirstLED, int numToFill, uint8_t initialhue, uint8_t deltahue, uint8_t saturation, uint8_t brightness)
{
    CHSV hsv;
    hsv.hue = initialhue;
    hsv.sat = saturation;
    hsv.val = GLOBAL_BRIGHTNESS;

    for( int i = 0; i < numToFill; i++) {
        hsv2rgb_rainbow( hsv, pFirstLED[i]);
        hsv.hue += deltahue;
    }
}
void rainbow3()
{
  fill_rainbow_3( leds, NUM_LEDS, thishue, thisstep, thissat, GLOBAL_BRIGHTNESS);
  thishue++;
  addSparkle(GLITTER_AMOUNT);
}

//======================================================================

void rainbow_loop() 
{
  
  index++;
  thishue = thishue + thisstep;
  if (index >= NUM_LEDS) {index = 0;}
  if (thishue > 255) {thishue = 0;}
  leds[index] = CHSV(thishue, thissat, GLOBAL_BRIGHTNESS);

//  addGlitter(10);
}

//======================================================================

void matrix1()  // Green base with Red dots.
{
  
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[0] = CHSV(255, thissat, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red
  }
  else {
    leds[0] = CHSV(100, thissat, GLOBAL_BRIGHTNESS);
  }

  for(int i = NUM_LEDS-1; i > 0; i--) 
  {
    leds[i] = leds[i-1];
  } 
    FastLED.delay(60);
}

//======================================================================

void matrix2()  // Blue base with Green dots.
{
  
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[0] = CHSV(100, thissat, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red

  }
  else {
    leds[0] = CHSV(150, thissat, GLOBAL_BRIGHTNESS);
  }

  for(int i = NUM_LEDS-1; i > 0; i--) 
  {
    leds[i] = leds[i-1];
  } 
    FastLED.delay(60);
}

//======================================================================

void matrix3()  // Red base with Green dots.
{
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[0] = CHSV(100, thissat, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red
  }
  else {
    leds[0] = CHSV(255, thissat, GLOBAL_BRIGHTNESS);
  }

  for(int i = NUM_LEDS-1; i > 0; i--) 
  {
    leds[i] = leds[i-1];
  } 
    FastLED.delay(60);
}

//======================================================================

void matrix4()  // Light Green base with (dull)Yellow dots.
{
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[NUM_LEDS] = CHSV(60, thissat, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red
  }
  else {
    leds[NUM_LEDS] = CHSV(120, thissat, GLOBAL_BRIGHTNESS);
  }

  for(int i = 0; i < NUM_LEDS; i++) 
  {
    leds[i] = leds[i+1]; 
  } 
    FastLED.delay(60);
}

//======================================================================

void matrix5()  // Light Green base with Red dots.
{
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[NUM_LEDS] = CHSV(255, thissat, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red
                                                
}
  else {
    leds[NUM_LEDS] = CHSV(120, thissat, GLOBAL_BRIGHTNESS);
  }

  for(int i = 0; i < NUM_LEDS; i++) 
  {
    leds[i] = leds[i+1]; 
  } 
    FastLED.delay(60);
 }

//======================================================================

void matrix6()  // Light White base with Purple dots.
{
  int rand = random8(230, 255);
  if (rand > 250) {
    leds[NUM_LEDS] = CHSV(200, 255, GLOBAL_BRIGHTNESS);   // 0=Red ,50=Yellowish, 100=Green , 150=Blue, 200=Purple, 255=Red
                                               
}
  else {
    leds[NUM_LEDS] = CHSV(150, 100, GLOBAL_BRIGHTNESS);
  }

  for(int i = 0; i < NUM_LEDS; i++) 
  {
    leds[i] = leds[i+1]; 
  } 
    FastLED.delay(60);
 }

//======================================================================

void random_march()
{  
 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {index=0;} 
  leds[index-1] = CHSV(random(16,120), 255,GLOBAL_BRIGHTNESS);
  leds[index] = CRGB::White;
  FastLED.delay(2);
} 

//======================================================================

void candycane() 
{
  index++;
  int N3  = int(NUM_LEDS/3);
  int N6  = int(NUM_LEDS/6);  
  int N12 = int(NUM_LEDS/12);  
  for(int i = 0; i < N6; i++ ) {
    int j0 = (index + i + NUM_LEDS - N12) % NUM_LEDS;
    int j1 = (j0+N6) % NUM_LEDS;
    int j2 = (j1+N6) % NUM_LEDS;
    int j3 = (j2+N6) % NUM_LEDS;
    int j4 = (j3+N6) % NUM_LEDS;
    int j5 = (j4+N6) % NUM_LEDS;
    leds[j0] = CRGB(255, 255, 255).nscale8_video(GLOBAL_BRIGHTNESS);
    leds[j1] = CRGB(255, 0, 0).nscale8_video(GLOBAL_BRIGHTNESS);
    leds[j2] = CRGB(255, 255, 255).nscale8_video(GLOBAL_BRIGHTNESS);
    leds[j3] = CRGB(255, 0, 0).nscale8_video(GLOBAL_BRIGHTNESS);
    leds[j4] = CRGB(255, 255, 255).nscale8_video(GLOBAL_BRIGHTNESS);
    leds[j5] = CRGB(255, 0, 0).nscale8_video(GLOBAL_BRIGHTNESS);
  }
    FastLED.delay(60);
 }

//======================================================================

void RedGreenWhiteDot()
{
  int pos = beatsin16(3,2,NUM_LEDS-2);
  leds[pos+1] = CHSV(100,255,GLOBAL_BRIGHTNESS);          //trail Green
  leds[pos] = CHSV (130,0,GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[pos-1] = CHSV(0,255,GLOBAL_BRIGHTNESS);          //trail Red
}

//===================================================================================================================================================

void GreenGreenWhiteDot()
{
  int pos = beatsin16(3,2,NUM_LEDS-2);
  leds[pos+1] = CHSV(90,255,GLOBAL_BRIGHTNESS);          //trail Green
  leds[pos] = CHSV (130,0, GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[pos-1] = CHSV(120,255,GLOBAL_BRIGHTNESS);          //trail Light Green
}

//===================================================================================================================================================

void GreenBlueWhiteDot()
{
  int pos = beatsin16(3,2,NUM_LEDS-2);
  leds[pos+1] = CHSV(135,255,GLOBAL_BRIGHTNESS);          //trail Light Blue
  leds[pos] = CHSV (130,0,GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[pos-1] = CHSV(115,255,GLOBAL_BRIGHTNESS);          //trail Light Green
}
//===================================================================================================================================================

void YellowGreenWhiteDot()
{ 
  int pos = beatsin16(3,2,NUM_LEDS-2);
  leds[pos+1] = CHSV(40,255,GLOBAL_BRIGHTNESS);          //trail Random Yellow
  leds[pos] = CHSV (130,0,GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[pos-1] = CHSV(80,255,GLOBAL_BRIGHTNESS);          //trail Random Green
}

//===================================================================================================================================================

void chaserfadeRedGreenWhiteDot()  // OLD VERSION DOES NOT WORK WITH REMOTE PROPERLY SO NOT BEING USED
{   
  uint32_t irCode=0;               // TRIED A FIX....
  if (irCode >=1){return;}         // .... BUT NEEDS TESTING STILL...
  
  for(int dot=(NUM_LEDS-1) ; dot >=0 ; dot--){
  leds[dot-1] = CRGB::White;
  leds[dot] = CRGB::Red;
  fadeToBlackBy( leds, NUM_LEDS, 1);
  FastLED.delay(1000/fps*8);            
 }

  for(int dot = 0;dot < NUM_LEDS; dot++){
  leds[dot] = CRGB::White;
  leds[dot-1] = CRGB::Green;
  fadeToBlackBy( leds, NUM_LEDS, 0.1);
  FastLED.delay(1000/fps*8);            
 }
}

//======================================================================

void SilentNightRiderRedGreen()// OLD VERSION DOES NOT WORK WITH REMOTE PROPERLY SO NOT BEING USED
{ 
  uint32_t irCode=0;
  if (irCode >=1){return;} 

  for(int dot=(NUM_LEDS-1) ; dot >=0 ; dot--){
  leds[dot] = CRGB::Red;
  fadeToBlackBy( leds, NUM_LEDS, 1);
  FastLED.delay(1000/fps*8);            
}

  for(int dot = 0;dot < NUM_LEDS; dot++){ 
  leds[dot] = CRGB::Green;
  fadeToBlackBy( leds, NUM_LEDS, 0.1);
  FastLED.delay(1000/fps*8);            
 }
}

//======================================================================

void colorwipeRedGreen()// OLD VERSION DOES NOT WORK WITH REMOTE PROPERLY SO NOT BEING USED
{  
  uint32_t irCode=0;
  if (irCode >=1){return;} 

  for(int dot=(NUM_LEDS-1) ; dot >=0 ; dot--){ 
  leds[dot] = CRGB::Red;
  FastLED.delay(1000/fps*8);            
}

  for(int dot = 0;dot < NUM_LEDS; dot++){
  leds[dot] = CRGB::Green;
  FastLED.delay(1000/fps*8);            
 }
}

//===================================================================================================================================================

void fireStarter(){

 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)
      
      ledh[index] = 64;                    // can be used to choose color 
  
      //The following lines create the fire starter effect
      thisbright = random((GLOBAL_BRIGHTNESS-5), (GLOBAL_BRIGHTNESS));// Randomly select a brightness between 50 and 100
      ledb[index] = thisbright;                          // Assign this random brightness value to the trailing LEDs
      addPixieDust(0);   // change to 1 for pulse 10 for neato pulse // Call the sparkle routine to create that sparkling effect. The potentiometer controls the difference in hue from LED to LED.
      leds[index] = (ledh[index],255,255); 
      leds[index] = CRGB::White;
//      leds[index] = CHSV (64,random(20,80), GLOBAL_BRIGHTNESS);  //dot  WHITE TO PALE YELLOW DOT
//  fadeToBlackBy( leds, NUM_LEDS, 200);
        FastLED.delay(1000/fps);                                  
}
//======================================================================

void pixieDustBackground1(){      //still needs that yellow trail between colors...??? how???

 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)
 if(index<= 0) {thishue+=64;}

  ledh[index] = thishue;                    // can be used to choose color uncomment
     
        //The following lines create the fire starter effect
  thisbright = random((GLOBAL_BRIGHTNESS-5), (GLOBAL_BRIGHTNESS));// Randomly select a brightness between 50 and 100
  ledb[index] = thisbright;                          // Assign this random brightness value to the trailing LEDs
  sparkle(0);   // change to 1 for pulse 10 for neato pulse // Call the sparkle routine to create that sparkling effect. The potentiometer controls the difference in hue from LED to LED.
  leds[index] = (ledh[thishue],255,255); 
  leds[index] = CRGB::White;
//      leds[index] = CHSV (64,random(20,80), GLOBAL_BRIGHTNESS);  //dot  WHITE TO PALE YELLOW DOT
//   fadeLEDs(0.4);                                         // A low number creates a longer tail
    FastLED.delay(1000/fps);                                 
}
//======================================================================

void fireStarterGHUE_RAINBOW(){
 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)

      ledh[index] = (gHue);                    // can be used to choose color uncomment
      
      //The following lines create the fire starter effect
      thisbright = random((GLOBAL_BRIGHTNESS-5), (GLOBAL_BRIGHTNESS));// Randomly select a brightness between 50 and 100
      ledb[index] = thisbright;                          // Assign this random brightness value to the trailing LEDs
      sparkle(0);   // change to 1 for pulse 10 for neato pulse // Call the sparkle routine to create that sparkling effect. The potentiometer controls the difference in hue from LED to LED.
      leds[index] = (ledh[gHue],255,255); 
      leds[index] = CRGB::White;
//      fadeLEDs(0.4);                                         // A low number creates a longer tail
        FastLED.delay(1000/fps);                                 
}
//======================================================================

void fireStarter_RAINBOW_PULSE_SLOW(){
 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)
 
      ledh[index] = (ghue);                    // can be used to choose color uncomment

      //The following lines create the fire starter effect
      thisbright = random((GLOBAL_BRIGHTNESS-5), (GLOBAL_BRIGHTNESS));// Randomly select a brightness between 50 and 100
      ledb[index] = thisbright;                          // Assign this random brightness value to the trailing LEDs
      sparkle(0);   // change to 1 for slow pulse 10 for fast neato pulse 
                                                        // Call the sparkle routine to create that sparkling effect. 
                                                         //The index (or could be gHue) controls the difference in hue from LED to LED.
      leds[index] = (ledh[ghue],255,255); 
      leds[index] = CRGB::White;
//      fadeLEDs(0.4);                                         // A low number creates a longer tail
        FastLED.delay(1000/fps);                                 
}

//======================================================================

void fireStarter_YELLOW_GREEN(){
 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)
 
      ledh[index] = 64;                    // can be used to choose color uncomment

      //The following lines create the fire starter effect
      thisbright = random((GLOBAL_BRIGHTNESS-5), (GLOBAL_BRIGHTNESS));// Randomly select a brightness between 50 and 100
      ledb[index] = thisbright;                          // Assign this random brightness value to the trailing LEDs
      sparkle(1);   // change to 1 for slow pulse 10 for fast neato pulse 
                                                         // Call the sparkle routine to create that sparkling effect. 
                                                         //The index (or could be gHue) controls the difference in hue from LED to LED.
      leds[index] = (ledh[index],255,255); 
      leds[index] = CRGB::White;
//      fadeLEDs(0.4);                                         // A low number creates a longer tail
        FastLED.delay(1000/fps);                                  
}

//===================================================================================================================================================
// sparkle() : is used by the fireStarter routine to create a sparkling/fire-like effect
//             Each LED hue and brightness is monitored and modified using arrays  (ledh[]  and ledb[])
//===================================================================================================================================================
void sparkle(byte hDiff){

  for(int i = 0; i < NUM_LEDS; i++) {
    ledh[i] = ledh[i] + hDiff;                // hDiff controls the extent to which the hue changes along the trailing LEDs
    
    // This will prevent "negative" brightness.
    if(ledb[i]<255-17){
      ledb[i]=255-20;

    }
    
    // The probability of "re-igniting" an LED will decrease as you move along the tail
    // Once the brightness reaches zero, it cannot be re-ignited unless the leading LED passes over it again.
    if(ledb[i]>255-20){
      ledb[i]=ledb[i]-2;
      sparkTest = random(0,GLOBAL_BRIGHTNESS);
      if(sparkTest>(GLOBAL_BRIGHTNESS-(ledb[i]/1.1))){
        ledb[i] = GLOBAL_BRIGHTNESS;
      } else {
        ledb[i] = ledb[i] / 2;                 
      }
    }
    leds[i] = CHSV(ledh[i],255,ledb[i]);   
  }
//  addGlitter(GLITTER_AMOUNT/2);
}

//===================================================================================================================================================
void addPixieDust(byte hDiff){

  for(int i = 0; i < NUM_LEDS; i++) {
    ledh[i] = ledh[i] + hDiff;                // hDiff controls the extent to which the hue changes along the trailing LEDs
    
    // This will prevent "negative" brightness.
    if(ledb[i]<3){
      ledb[i]=0;

    }
    
    // The probability of "re-igniting" an LED will decrease as you move along the tail
    // Once the brightness reaches zero, it cannot be re-ignited unless the leading LED passes over it again.
    if(ledb[i]>0){
      ledb[i]=ledb[i]-2;
      sparkTest = random(0,GLOBAL_BRIGHTNESS);
      if(sparkTest>(GLOBAL_BRIGHTNESS-(ledb[i]/1.1))){
        ledb[i] = GLOBAL_BRIGHTNESS;
      } else {
        ledb[i] = ledb[i] / 2;   //was 2               
        
      }
    }
    leds[i] = CHSV(ledh[i],255,ledb[i]);   
  }
//  addGlitter(GLITTER_AMOUNT/2);
}

//===================================================================================================================================================

void cometEffect()
{
 if(index < NUM_LEDS) {index++;}
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)
  leds[index] = CHSV(64,255,GLOBAL_BRIGHTNESS);                  //trail
    
    //  leds[index] = CHSV(gHue*10,random16(0,60),random16((GLOBAL_BRIGHTNESS/3),(GLOBAL_BRIGHTNESS)));          //trail RAINBOW++
  fadeLEDs(4);
  FastLED.delay(1000/fps*2);
}

//===================================================================================================================================================

void cometEffectSinelonGHUE_SLOW_RAINBOW()
{
//  fadeToBlackBy( leds, NUM_LEDS, FADEOUT_SPEED/32);

 int pos = beatsin16(3,2,NUM_LEDS-2);
  
//  leds[pos] += CHSV( gHue, 255, 255);
  leds[pos+1] = CHSV(ghue,random16(200,255),GLOBAL_BRIGHTNESS);          //trail RAINBOW++
  leds[pos] = CHSV (130,0, GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[pos-1] = CHSV(ghue,random16(200,255),GLOBAL_BRIGHTNESS);          //trail RAINBOW++

//  leds[index] = CHSV (random(64, 86), random(0, 50), random16((GLOBAL_BRIGHTNESS/3),(GLOBAL_BRIGHTNESS))); //trail YELLOW TO LIGHT GREEN   
  fadeLEDs(3);
//  FastLED.delay(1000/fps*2);
}
//===================================================================================================================================================

void cometChaserRAINBOW()
{ 
 if(index < NUM_LEDS) {index++;}              
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)

  leds[index+1] = CHSV (130,0,GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[index] = CHSV(gHue,random16(200,255),GLOBAL_BRIGHTNESS);//trail RAINBOW++
  fadeLEDs(4);
  FastLED.delay(1000/fps*2);
}
//===================================================================================================================================================

void cometChaserAQUA()
{ 
 if(index < NUM_LEDS) {index++;}              
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)

  leds[index+1] = CHSV (130,0, GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[index] = CHSV(random16(128,135),random16(100,255),GLOBAL_BRIGHTNESS);   //trail AQUA TO LIGHT BLUE
  fadeLEDs(4);
  FastLED.delay(1000/fps*2);
}
//===================================================================================================================================================

void cometChaserYELLOW_GREEN()
{ 
 if(index < NUM_LEDS) {index++;}              
 if(index >= NUM_LEDS-1) {leds[index] = leds[index-1]; index=0;} // take last index=0; off for a 1 shot comet (1 pass)

  leds[index+1] = CHSV (64,30, GLOBAL_BRIGHTNESS);                       //dot  WHITE TO PALE YELLOW
  leds[index] = CHSV (random(64, 86), random(100, 255), GLOBAL_BRIGHTNESS);   //trail YELLOW TO LIGHT GREEN   
  fadeLEDs(4);
  FastLED.delay(1000/fps*2);
}

//===================================================================================================================================================

void fadeLEDs(int fadeVal){              // used for cometChaser
  for (int i = 0; i<NUM_LEDS; i++){
    leds[i].fadeToBlackBy(fadeVal/4);
  }
}

//===================================================================================================================================================

void meteorRain()
{               
 // meteorRain - Color (red, green, blue), meteor size, trail decay, random trail decay (true/false), speed delay
 meteorRain(0xff,0xff,0xff, 2, 20, true); 
                                               //  20 for testing 100 leds / 10 for 200 leds?
}               
void meteorRain(byte red, byte green, byte blue, byte meteorSize, byte meteorTrailDecay, boolean meteorRandomDecay) {  
  setAll(0,0,0);
 
  for(int i = 0; i < NUM_LEDS+NUM_LEDS; i++) {
   
   
    // fade brightness all LEDs one step
    for(int j=0; j<NUM_LEDS; j++) {
      if( (!meteorRandomDecay) || (random(10)>5) ) {
        fadeToBlack(j, meteorTrailDecay );        
      }
    }
   
    // draw meteor
    for(int j = 0; j < meteorSize; j++) {
      if( ( i-j <NUM_LEDS) && (i-j>=0) ) {
        setPixel(i-j, red, green, blue);
      }
    }
   
    showStrip();
  FastLED.delay(1000/fps*2);
  }
}

// used by meteorrain
void fadeToBlack(int ledNo, byte fadeValue) {
   leds[ledNo].fadeToBlackBy( fadeValue );
}

//======================================================================
  
  void NewKITT_ALL()
  {
  RightToLeft(0, 0xff, 0, 50, 25, 0);
  LeftToRight(0, 0xff, 0, 50, 25, 0);
  }

// used by NewKITT
void LeftToRight(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = 0; i < NUM_LEDS-EyeSize-2; i++) {
    setAll(0,0,0);
    setPixel(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      setPixel(i+j, red, green, blue);
    }
    
    setPixel(i+EyeSize+1, red/10, green/10, blue/10);
    showStrip();
      FastLED.delay(SpeedDelay);
  }
    FastLED.delay(ReturnDelay);
}

// used by NewKITT
void RightToLeft(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = NUM_LEDS-EyeSize-2; i > 0; i--) {
    setAll(0,0,0);
    setPixel(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      setPixel(i+j, red, green, blue);
    }
    setPixel(i+EyeSize+1, red/10, green/10, blue/10);
    showStrip();
      FastLED.delay(SpeedDelay);
  }
    FastLED.delay(ReturnDelay);
}


//======================================================================

void showLED(int pos, int thishue, int thissat, int GLOBAL_BRIGHTNESS)
{
  leds[pos] = CHSV (thishue, thissat, GLOBAL_BRIGHTNESS);
   FastLED.show();
}
//======================================================================

void showStrip() 
{
   FastLED.show();
}
//======================================================================

void setPixel(int Pixel, byte red, byte green, byte blue) {
   leds[Pixel].r = red;
   leds[Pixel].g = green;
   leds[Pixel].b = blue;
}
//======================================================================

void setAll(byte red, byte green, byte blue) {
  for(int i = 0; i < NUM_LEDS; i++ ) {
    setPixel(i, red, green, blue);
  }
}
//======================================================================
//======================================================================

//*Animations End*
