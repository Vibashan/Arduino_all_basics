#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <util/delay.h>

unsigned int temp=0;
void InitADC()
{ 
 
  ADMUX=(1<<REFS0); // For Aref=AVcc(+5V);***Now ADMUX IS NOW =0b010000000
  ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}    //Prescalar div factor =128
     //ADEN (ADC Enable):Set this pin to 1 to enable ADC
     //Without enabling this ADC cannot take place
     //1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0) for Prescalar div factor =128
     //Now ADCSRA IS NOW =0b10000111 
     
unsigned int ReadADC(int ch)
{ 
  ch=ch&0b00000111; // ch means channel-A0 or A1....
  // select the corresponding channel 0~7
  // ANDing with ’7′ will always keep the value
  // of ‘ch’ between 0 and 7
  //last 111 in (0b0000111) use to ascess pins 0-7

//***ADMUX will allows u to use  analog pins
//***Now ADMUX IS NOW =0b010000000 (Because ADMUX=(1<<REFS0);For Aref=AVcc(+5V)
//***Therfore to ascess Analog pin 0 ADMUX=0b01000000;
//***Therfore to ascess Analog pin 1 ADMUX=0b01000001;
//***Therfore to ascess Analog pin 3 ADMUX=0b01000011;
  ADMUX=(ADMUX&0xF8)|ch; 
  //(ADMUX&0xF8) clears the 111 bits in ADMUX (0b0100111)to 0b0100000 
  //so we will get analog values form our requried pins by ORing with "ch"
  ADCSRA|=(1<<ADSC);
  //Start single conversion//(1<<ADSC)=0b01000000
  //ADC conversion starts at this time ADCSRA=0b11000111  
  //and it finishes now ADCSRA turns to 0b10010111 
  //Because whenever the conversion is over it turns 0b10010111 automatically
  //Also Set this bit high before start of any conversion. 
  //After conversion is complete is set back to 0 automatically.
  while(!(ADCSRA & (1<<ADIF)));
  // wait till ADC conversion takes place
  //That is 0b11000111&0b00010000(1<<ADIF)=0b00000000 while coversion is going
  //When conversion is finished ADCSRA=0b11010111&0b00010000(1<<ADIF) is true
  //Now the loop ends and ADCSRA=0b10010111
   ADCSRA|=(1<<ADIF);  
  //reset interrupt flag 
  //Conversion finished so this function can't set to 1 so it will be like
  //0b10010111 is turned to 0b10000111 becasue no conversion take placed
   return (ADC);   
}


int main(void)
{ 
  DDRB|=0b00000011;//initialize the ports
  InitADC();//initialize the adc pins
   Serial.begin(9600);
while(1)

{ InitADC();
  int x=ReadADC(0);
  int AX=((((float)x - 331.5)/65*9.8)-6.8);
  int Ang=((AX*90)/11.9);
  Serial.println(Ang);
  _delay_ms(100);
  
  
}}

