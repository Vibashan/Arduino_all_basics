#include<avr/io.h>

void usart_int(void) {
  UCSR0A=0x00;
  UCSR0B=(1<< RXEN0)|(1<< TXEN0);//TRANSMIT AND RECEIVE ENABLE
  UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);//ASYNCHRONOUS, 8 BIT TRANSFER
  UBRR0L= 103 ; //BAUD RATE 9600 
}
void usart_send(char ch ) {
  while(UCSR0A!=(UCSR0A|(1<<UDRE0)));//waiting for UDRE to become high
  UDR0= ch;
 
}
void uwrite(char y)
{
  while (!(UCSR0A&(1<<UDRE0)));
   UDR0=y;
   UCSR0A |= 1<<UDRE0;
}

int main() {
  int p;
  int x1;
    usart_int();
    
    
  while(1)
  {
    p=5;
    for(x1=0;x1<10;x1++)
      {usart_send('2');//can use both
       uwrite((p + '2'));
       
       
      }
     
  }}
