#include<reg51.h>

sbit LED= P0^3;

void delay( unsigned int a);

void main()

{   LED=0;

While (1)

{ LED=0;

delay(600);

LED=1;

delay(600);

}

}

void delay (unsigned int b)

{   unsigned int k;

for(k=0;k<b;k++);

}
