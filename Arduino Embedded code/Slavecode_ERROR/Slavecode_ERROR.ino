#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>
#include<util/twi.h> 

void TWI_init_slave(void);
void TWI_match_read_slave(void);
void TWI_read_slave(void);
void TWI_match_write_slave(void);
void TWI_write_slave(void);

unsigned char write_data,recv_data;

int main(void)
{
  DDRB=0xFF;
  TWI_init_slave();
  while(1)
  {
    TWI_match_read_slave();
    TWI_read_slave();
    
    write_data=~recv_data; 
    
    TWI_match_write_slave();
    TWI_write_slave();       
  }
}

void TWI_init_slave(void) 
{
  TWAR=0x20; 
}

void TWI_write_slave(void)
{
  TWDR= write_data;           
  TWCR= (1<<TWEN)|(1<<TWINT);   
  while((TWSR & 0xF8) != 0xC0); 
}

void TWI_match_write_slave(void) 
{
  while((TWSR & 0xF8)!= 0xA8) 
  {
   
    TWCR=(1<<TWEA)|(1<<TWEN)|(1<<TWINT);
    while (!(TWCR & (1<<TWINT)));  
  }
}

void TWI_read_slave(void)
{
  
  TWCR= (1<<TWINT)|(1<<TWEA)|(1<<TWEN);
  while (!(TWCR & (1<<TWINT))); 
  while((TWSR & 0xF8)!=0x80); 
  recv_data=TWDR; 
  PORTB=recv_data;
}

void TWI_match_read_slave(void)
{
  while((TWSR & 0xF8)!= 0x60)  
  {
   
    TWCR=(1<<TWEA)|(1<<TWEN)|(1<<TWINT);
    while (!(TWCR & (1<<TWINT)));  
  }
}
