# include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    Serial.begin(9600);
   // DDRB =0x00; 
     DDRB =0xFF;   
PORTB=0xFF;
_delay_ms(1000);
PORTB=0x00;
_delay_ms(1000);
PORTB=0xFF;
_delay_ms(1000);
PORTB=0x00;
_delay_ms(1000);


    while (1) 
    {
      if((PINB&(1<<PB2)))
      //!(PIND&(1<<PD2))==0
      //(PIND&(1<<PD2))==(1<<PD2)
      {
        Serial.println(" PRESSED");
       
        }
        else
        {
          //Serial.println("NOT PRESSED");
        }
        //_delay_ms(200);

    }
    return 0;
}
