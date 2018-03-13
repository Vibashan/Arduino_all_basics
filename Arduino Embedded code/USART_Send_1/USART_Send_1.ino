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
void uwrite(int y)
{
  // Wait till the transmit buffer is empty, to send the data to the laptop
  while (!(UCSR0A&(1<<UDRE0)));
  
  // Load the data to be transmitted
  UDR0=y;
  
  // Clear the register to be used again
  UCSR0A |= 1<<UDRE0;
}

int main()
{
 sei();

  // 104 corresponds to baud rate as 9600
  utrans(104);
  while(1)
  {
    uwrite(8);
  }
  }


