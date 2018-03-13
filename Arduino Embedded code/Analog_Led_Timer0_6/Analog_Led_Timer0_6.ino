#include<avr/io.h>
#include<util/delay.h>
int main()
{
  //TCCR1A=(1<<WGM10)|(1<<WGM11)|(1<<COM1A1);
  //TCCR1B=1;
  TCCR1A = _BV(COM1A1) | _BV(COM1B1) | _BV(WGM10)|(1<<WGM11);
  TCCR1B = 1;
  DDRB=(1<<PB2);
  OCR1B=1020;//working for pin 10
  //WE have to check thid code for 0-5 volts excatly
 // 0-1020 - 0-5v
}

