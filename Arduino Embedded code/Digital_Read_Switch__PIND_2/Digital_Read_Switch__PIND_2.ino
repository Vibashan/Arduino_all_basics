#include <avr/io.h>        //This is our usual include
#define F_CPU 16000000UL    //This says to the compiler at what frequency our Atmega is running, in this case its 16Mhz
#include <util/delay.h>        //The delay functions/routines
 
uint8_t readButton(void);    //Declaration of the readButton function
 
int main(void){
DDRD &= ~(1<<PD2);    //Configure PORTD pin 2 as an input
PORTD |= (1<<PD2);    //Activate pull-ups in PORTD pin 2
DDRB |= (1<<PB5);
Serial.begin(9600);//Configure PORTB pin 5 an output, this is the digital 13 in the Arduino that as the built-in led
 
 while(1){                //Infinite loop
 if(readButton()==1){        //Verify the button state
 PORTB ^=(1<<PB5);
 Serial.println("fuck u");//This is the above mentioned XOR that toggles the led
 }
 _delay_ms(250);            //Delay between consecutive button presses
 }
}
 
uint8_t readButton(void){
 if((PIND & (1<<PD2)) == 0){        //If the button was pressed
 _delay_ms(25); }        //Debounce the read value
 if((PIND & (1<<PD2)) == 0){        //Verify that the value is the same that what was read
 return 1; }            //If it is still 0 its because we had a button press
 else{                    //If the value is different the press is invalid
 return 0; }
 
}
