 # include <avr/io.h>
 #include <util/delay.h>
 #include <avr/interrupt.h>
  int Time; 
 
 int main (void)
{
    DDRB =0b00100000;
    sei();
  
    TCCR0A|=(1<<WGM01)|(1<<COM0A1);
    TCCR0B|=(1<<CS02)|(1<<CS00);
    OCR0A=156;
    TIMSK0|=(1<<OCIE0A);
    
    

    while(1)
    {
      
    }
}
ISR(TIMER0_COMPA_vect)
 {
  Time++;
  if (Time==500)
  {
    PORTB ^=0b00100000;
    //PORTB^=(1<<PB5);
    Time=0;
  }
 }

