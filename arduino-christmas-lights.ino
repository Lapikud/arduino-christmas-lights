int randNumber;
int leds[] = {5, 6, 7, 8, 9, A0, A1, A2, A3, A4};
int ledcount = 10;

void setup() {
  // init random engine
  randomSeed(analogRead(5));

  // set all led as output
  for (int i=0; i < ledcount; i++) {
    pinMode(leds[i], OUTPUT);
  }


  // blink all the leds once
  for (int i=0; i < ledcount; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  
  delay(1000);

  for (int i=0; i < ledcount; i++) {
    digitalWrite(leds[i], LOW);
    delay(100);
  }
}

void loop() {
  for (int i=0; i < 3; i++) {
    randNumber = random(ledcount);
    digitalWrite(randNumber, !digitalRead(randNumber));
  }
  delay(500);
}
