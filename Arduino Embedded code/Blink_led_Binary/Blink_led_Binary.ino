#include <util/delay.h>
#include<avr/io.h>

int main(void)
{
  DDRB=0xFF;
  Serial.begin(9600);
  while(1)
  {
    PORTB=0b00100000;
    _delay_ms(5000);
    PORTB=0b0000000;
    _delay_ms(1000);
    PORTB=0b00000000;
    _delay_ms(1000);
    PORTB=0b00000000;
    _delay_ms(2000);
   
    //z = PORTB;
    //Serial.println(z);
    
  }
  return 0;
}


