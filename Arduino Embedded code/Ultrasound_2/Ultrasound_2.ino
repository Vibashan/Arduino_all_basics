#include <avr/io.h>
#include <avr/interrupt.h>

int main(){
  DDRD=0xFF;
  DDRB=0x00;
  int i=0;
  Serial.begin(9600);
 while(1){  
  PORTB=0b00000000;
  PORTD=0b01000000;   // Ping all ultrasonic for 10 us
  _delay_us(10);
 for (int i=0;i < 10000;i++)  
  if ((PINB)&(1<<PB0)){
    i=i+1;
  }
Serial.println(i);
_delay_ms(2000);
/*       // delay to wait for transmitter to die off
  for (int i=0;i < 10000;i++){ // Checking port in loop 10,000 times

    if (PINF&0x10){      // read PORTF pin 5 for echo pulse
      count++;  // count if still high count      
    }*/
  }

//return count;
}
