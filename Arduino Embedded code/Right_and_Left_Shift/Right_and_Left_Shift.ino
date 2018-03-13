# include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main (void)
  {
    int a;
    int c;
    
    a=0b010;
    Serial.begin(9600);
    //Serial.println(a);
    c= a << 2 ;
    Serial.println(c);
  }

