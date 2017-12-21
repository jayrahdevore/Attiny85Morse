#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


void setup(void) {
  // put your setup code here, to run once:
  DDRB = DDRB | 0b00000110;
  DDRB = DDRB & 0b11101110;
}

int main (void) {

setup();

while (1) {
  // put your main code here, to run repeatedly:
  PORTB = PORTB & 0b11111101;
  _delay_ms(1);
  PORTB = PORTB | 0b00000010;
  _delay_us(30);
  if (PIN0 & 0b00010000) {
    PORTB = PORTB & 0b11111011;
  }
  else {
    PORTB = PORTB | 0b00000100;
  }
  PORTB = PORTB & 0b11111101;
  _delay_ms(1);
  PORTB = PORTB | 0b00000010;
  _delay_us(30);
  if (PINB & 0b00000001) {
    PORTB = PORTB & 0b11110111;
  }
  else {
    PORTB = PORTB | 0b00001000;
  }
}
return 1;
  
}
