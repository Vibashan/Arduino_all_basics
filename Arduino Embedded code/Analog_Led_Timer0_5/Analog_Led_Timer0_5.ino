#include<avr/io.h>
#include<util/delay.h>
int main()
{
  Serial.begin(9600);
   TCCR2A|=(1<<WGM20)|(1<<WGM21)|(1<<COM2A1)|(1<<COM2B1);
   TCCR1A = _BV(COM1A1) | _BV(COM1B1) | _BV(WGM10)|(1<<WGM11);
  TCCR1B = (1<<CS02);
    TCCR2B=(1<<CS02);
    DDRD=0b010010000;
 DDRB=0xFF;
 while(1)
        {
          float  Time;
          int D;
          int a;
          PORTD=0b00000000;
  _delay_ms(10);
  PORTD=0b01000000;
  _delay_ms(10);
  PORTD=0b00000000;
  Time=pulseIn(5,HIGH);
  D=(Time*330)/20000;
  Serial.println(D);
          /*if(D<=15)
          {
           a=15-D;
           OCR2B=a*10;
           OCR0B=a*10;
          }
          else if(D>=10&&D<=30)
          {
            a=40-D;
            OCR2A=a*10;
            OCR0A=a*10;
          }
          else
          {
            PORTB=0b10000000;
          }
          Serial.println(D);
        }*/
 //OCR2B=200;// working for pin 5 lb
    // OCR1A=1000;// working for pin 9 rb
     //OCR1B=1000;// working for pin 10 rf
     //OCR2A=100;// working for pin 11 lf
  //perfect code 0-5 volts excatly
        }}
