#include<avr/io.h>
#include<util/delay.h>
int main()
{
  //TCCR2A=(1<<WGM01)|(1<<WGM00)|(1<<COM2A1);
  //TCCR2B=1;
  DDRB=(1<<PB3);
 // OCR2A=00;// working for pin 11
  //This can also be used for prescaler 255 (5volts)(16 MegaHZ)
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(CS22);
  OCR2A = 0;//perfect code 0-5 volts excatly
}

