#include<avr/io.h>
#include<util/delay.h>
int main()
{
   TCCR2A|=(1<<WGM20)|(1<<WGM21)|(1<<COM2A1)|(1<<COM2B1);
    TCCR2B=(1<<CS22);
    DDRD|=(1<<PD3); 
     OCR2B=20;// not workin for OCRB type pin (10,3)
     //for B type we need to find some format
     //5 th pin not accesable Y???
     //we need to max limti for timer 0,1,2 for ocra values
  
}
