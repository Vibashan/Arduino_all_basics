#include<avr/io.h>
#include<util/delay.h>
int main()
{
  //TCCR1A=(1<<WGM10)|(1<<WGM11)|(1<<COM1A1);
  //TCCR1B=1;
  TCCR1A = _BV(COM1A1) | _BV(COM1B1) | _BV(WGM10)|(1<<WGM11);
  TCCR1B = 1;
  DDRB=(1<<PB1);
  OCR1A=1020;//working for pin 9
   //WE have to check thid code for 0-5 volts excatly
 // I think its not upto to 255
  // We have to finf cycle for 255
  
}

