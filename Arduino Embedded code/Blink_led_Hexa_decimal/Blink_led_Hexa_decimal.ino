#include <util/delay.h>
#include<avr/io.h>

int main(void)
{
  DDRD=0xFF;
  while(1)
  {
    PORTD=0x08;
    _delay_ms(1000);
    PORTD=0x00;
    _delay_ms(1000);
  }
  return 0;
}


