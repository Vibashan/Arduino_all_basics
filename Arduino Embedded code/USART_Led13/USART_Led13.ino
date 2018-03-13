#include<avr/io.h>

void usart_int(void)
{
  UCSR0B=(1<< RXEN0)|(1<< TXEN0);//TRANSMIT AND RECEIVE ENABLE
  UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);//ASYNCHRONOUS, 8 BIT TRANSFER
  UBRR0L= 0x67 ; //BAUD RATE 9600
  
}
void usart_send(int ch )
{
  while(UCSR0A!=(UCSR0A|(1<<UDRE0)));//waiting for UDRE to become high
  UDR0= ch;
}




int main(void)
{
  pinMode(13,OUTPUT);
  usart_int();
  unsigned int ch;
  while(1)
  {
    
    while(UCSR0A!= (UCSR0A|(1<<RXC0)));
    
    ch=UDR0;
    usart_send(ch);
    
    if(ch=='1')
    {
      //usart_send('1');
      digitalWrite(13,HIGH);
    }
    else if(ch=='0')
    {
      //usart_send('0');
      digitalWrite(13,LOW);
    }
      
  }
  
    
}
  

