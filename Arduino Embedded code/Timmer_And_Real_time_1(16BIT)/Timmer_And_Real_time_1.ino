#include <avr/io.h>
#include <avr/interrupt.h>


int count=0;
int clock_millisecond=0;


int main(void)
{
     sei();
     DDRB |= 0b11111111;
     Serial.begin(9600);
     
           TCCR1A|=(1<<COM1A1);
                     TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
                     OCR1A=250;
                     TIMSK1|=(1<<OCIE1A); //Enable the Output Compare A interrupt

     
  while (1)
          {
            }         
}
ISR(TIMER1_COMPA_vect)
{
  clock_millisecond++;
      if(clock_millisecond==1000)
      {
         count++;
         if (count==1)
         {PORTB= (1<<PB5);
         Serial.println(count);}
         else if (count==3)
         {PORTB= 0b00000000;
          count=0;}
         clock_millisecond=0;

}
}
