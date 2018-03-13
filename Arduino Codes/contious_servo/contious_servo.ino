#include <Servo.h>
int i;
  int a=1; 
Servo myservo;
void setup(){
  

 myservo.attach(6);
}

void loop() {
 if(a==1){
  for(i=0;i<=100;i++)
 { myservo.write(i);
  delay(100);}
  for(i=0;i<=100;i++)
 { myservo.write(-i);
  delay(20);}}

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(4000);
 a=2; 
  // put your main code here, to run repeatedly:

}
