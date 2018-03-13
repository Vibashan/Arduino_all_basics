#include <avr/io.h>
#include <avr/delay.h>

#define  ps 64 //prescaler
#define  ss 343.2 //sound speed
#define  fcpu 10^6 //cpu frequency


void timer_init(void){
    TCCR0B|=(1<<CS01)|(1<<CS00);//prescale for timer 64 @1MHz    
}

uint8_t HC_SR04(void)
{
    //generate a trigger signal
    PORTB=1<<PB5;
    _delay_ms(10);
    PORTB=0<<PB5;
    
    //wait until echo pin be high
    while(PINB==(1<<PB4))
    {
        if (TCNT0>250)
        {
            return 255;//an error occured
        }
    }

    //count until echo pin be low
    TCNT0=0;
    while(!PINB==(1<<PB4))
    {
        if (TCNT0>220)
        {
            //if there is no obstacle in 5m area result will be 0
            TCNT0=0;
            break;
        } 
        
    }

return (TCNT0/2)*ps*(1/fcpu)*ss;    
}


int main(void)
{

 timer_init();
    uint8_t distance;
    PORTB=0b00100000;//PC0 output PC1 is input
    PORTD=0xff;//PORTD output
    Serial.begin(9600);
    while(1)
    {
        distance=HC_SR04();
        Serial.println(distance);
        _delay_ms(1000);
        
    }
}

