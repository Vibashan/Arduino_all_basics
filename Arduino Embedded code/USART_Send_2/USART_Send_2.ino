
#include<avr/io.h>
#include<avr/interrupt.h>

void utrans(uint16_t d)
{
  //8 DATA BITS
  UCSR0C |= 1<<UCSZ01 | 1<<UCSZ00 ;
  
  // Enable transmit to the laptop
  UCSR0B |= 1<<TXEN0 ; 

  // Set BAUD rate - 9600
  UBRR0H = d>>8;
  UBRR0L = d;
}
int main()
{
  sei();
  UART_init();
  while(1)
  {
    UDR0="8";
    
  }
  }
