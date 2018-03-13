#include <Servo.h>
int i;
Servo myservo;

void setup() {
  
 myservo.attach(6); // put your setup code here, to run once:

}

void loop() {
  for(i=0;i<180;i++)
 { myservo.write(i);
  delay(30);}
  for(i=180;i>0;i--){
  myservo.write(i);
  delay(30);}
  
  // put your main code here, to run repeatedly:

}
