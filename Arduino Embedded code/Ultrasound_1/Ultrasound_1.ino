#include <avr/io.h>
#include <avr/interrupt.h>
#include<util/delay.h>

int main()
{
 Serial.begin(9600);
 
 //TCCR0B|=(1<<CS00);
 //DDRD=0b01000000;
 DDRB=0b00100000;;
 int a=0;
 int b=0;
 int c=340;
 float d;
 while(1)
 {
  unsigned int a;
  float  Time;
  int D;
  PORTB=0b00000000;
  _delay_ms(10);
  PORTB=0b00100000;
  _delay_ms(10);
  PORTB=0b00000000;
  Time=pulseIn(12,HIGH);
  D=(Time*330)/20000;
  Serial.println(D);
    
}}
