#include <SoftwareSerial.h>
SoftwareSerial BT(1,0);
char a;
 
void setup() {
 DDRB=0xFF;
 PORTB=0x00;
 BT.begin(9600);

}

void loop() {

if(BT.available()){
  a=(BT.read());
  if(a=='1')
  {
    PORTB=0b00100000;
  }
  if(a=='0')
  {
    PORTB=0b00000000;
  }
}

 
}
