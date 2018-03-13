#include <Servo.h>
int i;
int angle;
Servo myservo; 

void setup() {
  Serial.begin(9600);
  myservo.attach(6);// put your setup code here, to run once:

}

void loop() {
  Serial.println("What angle do u need?");
  while(Serial.available()==0);{}

angle=Serial.parseInt();
   myservo.write(angle);
  // put your main code here, to run repeatedly:

}
