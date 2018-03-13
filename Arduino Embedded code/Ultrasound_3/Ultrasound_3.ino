#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main()
{
 Serial.begin(9600);
 TCCR0B=0;
 int c=0;
 float d;
 int b=340;
 sei();    
 // TIMSK = (1 << TOIE1);
  TCCR1A = 0;
 while(1)
 {
  int a=0;
  //int c=0;
  DDRD=0x0b01000000;
  PORTD=0b00000000;
  _delay_us(10);
  PORTD=0b01000000;
  _delay_us(12);
  PORTD=0b00000000;
  
  

  while(((PIND)&(1<<PD5))==0)
  {
    c=c+1;
     Serial.println(c);
  }
 _delay_us(1000);
 /* if(((PIND)&(1<<PD5))==(1<<PD5))
  {
    a=a+1;
    Serial.println(a);
  }
  
    d=170*a;
  // Serial.println(d);
   // Serial.println(a);
    _delay_ms(1000);
  }*/
  
 } }

