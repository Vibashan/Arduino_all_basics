#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Define.h"

int main ()
{
    EICRA|=(1<<ISC00)|(1<<ISC01);
    EIMSK|=(1<<INT0); 
   // TCCR0A=(1<<WGM00)|(1<<COM0B1)|(1<<COM0A1);
   // TCCR0B=(1<<CS02);
    sei();
    DDRD = 0x00;
    DDRB=0b00000001;
    PORTB=0b00000001;
    
    Serial.begin(9600);

    while (1) 
    {
        void PID();
        Serial.println(Present_rpm);
     //   OCR0A=Final;
      //  OCR0B=Final;
    }
}

void Timer1_init()
{
  TCCR1B|=(1<<CS12)|(1<<CS10);
  TCNT1=0;
}

void PID()
{
  Error = Required_rpm - Present_rpm;
  H = Error * Dt;
  I_error = I_error + H;
  I = Error - Previous_error;
  D_error = I / Dt;
  P = P_gain * Error;
  I = I_gain * I_error;
  D = D_gain * D_error;
  M = P + I;
  Total_error = M + D;
  Previous_error = Error;
  Final = Final + Total_error; 
}
ISR(INT0_vect)
{
  count++;
  if(count==1)
  {
    Timer1_init();
  }
  if(count==2)
  {
    Time_period=TCNT1/200;
    TCNT1=0;
    count=1;
    Present_rpm=1800/Time_period;
  }
}
