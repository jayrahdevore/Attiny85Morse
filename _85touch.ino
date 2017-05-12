void setup() {
  // put your setup code here, to run once:
  DDRB = DDRB | B00000110;
  DDRB = DDRB & B11101110;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB = PORTB & B11111101;
  delay(1);
  PORTB = PORTB | B00000010;
  delayMicroseconds(30);
  if (PINB & B00010000) {
    PORTB = PORTB & B11111011;
  }
  else {
    PORTB = PORTB | B00000100;
  }
  PORTB = PORTB & B11111101;
  delay(1);
  PORTB = PORTB | B00000010;
  delayMicroseconds(30);
  if (PINB & B00000001) {
    PORTB = PORTB & B11110111;
  }
  else {
    PORTB = PORTB | B00001000;
  }
  
}
