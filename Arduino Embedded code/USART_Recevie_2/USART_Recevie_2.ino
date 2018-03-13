#include<avr/io.h>

void usart_int(void)
{
  UCSR0B=(1<< RXEN0)|(1<< TXEN0);//TRANSMIT AND RECEIVE ENABLE
  UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);//ASYNCHRONOUS, 8 BIT TRANSFER
  UBRR0L= 0x67 ; //BAUD RATE 9600
  
}
void usart_send(char ch )
{
  while(UCSR0A!=(UCSR0A|(1<<UDRE0)));//waiting for UDRE to become high
  
}
int main(void)
{
  Serial.begin(9600);
  //usart_int();
  unsigned char ch;
  while(1)
  {
    
   //while(UCSR0A!= (UCSR0A|(1<<RXC0)));
   ch=UDR0;
  
   Serial.println(ch);

  } 
     
}

