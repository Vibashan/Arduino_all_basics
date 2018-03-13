#include<avr/io.h>
#include<util/delay.h>
int main()
{
   TCCR2A =(1<<WGM20)|(1<<COM2A1)|(1<<COM2B1);// non inverting
  //  TCCR2A =(1<<WGM20)|(1<<COM2A1)|(1<<COM2A0)|(1<<COM2B1);// inverting
    //  TCCR2A =(1<<WGM21)|(1<<COM2A1)|(1<<COM2A0)|(1<<COM2B1);
    //  TCCR2A =(1<<WGM21)|(1<<COM2A1)|(1<<COM2B1);
    TCCR2B=(1<<CS22);
    DDRD|=(1<<PD3); 
   for(int cnt=0;cnt<255;cnt++)
      {
        OCR2B=cnt;
        _delay_us(300);
      }//Working for PD3
  //perfect code 0-5 volts excatly
}
