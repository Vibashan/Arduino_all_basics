# include <avr/io.h>

int main (void)
{
    Serial.begin(9600);
    DDRD =0x00;  
    PORTD=0b00000000; 

    while (1) 
    {
      if((PIND&(1<<PD2)))
      //!(PIND&(1<<PD2))==0
      //if(PIND&(1<<PD2))==(1<<PD2))
      {
        Serial.println(" White");
        }
        else
        {
          Serial.println("Black");
        }


    }
    return 0;
}
