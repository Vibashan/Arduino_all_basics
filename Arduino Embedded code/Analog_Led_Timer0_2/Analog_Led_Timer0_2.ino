#include<avr/io.h>
#include<util/delay.h>
int main()
{
   Serial.begin(9600);
   TCCR0A=(1<<WGM00)|(1<<COM0B1)|(1<<COM0A1);
   //TCCR0A=0b10100001(128+64+1)
    TCCR0B=(1<<CS02);
    //TCCR0B=0b00000100(4)
    while(1)
    {Serial.println(TCCR0A);
    Serial.println(TCCR0B);
    }
    DDRD|=(1<<PD6); 
     OCR0A=510;// working for pin 6
  //perfect code 0-5 volts excatly
}
