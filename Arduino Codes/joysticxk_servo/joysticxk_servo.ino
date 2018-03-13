#include <Servo.h>
Servo myservo;
int i;
int x;
int y;

void setup() {
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Serial.begin(1200);
  myservo.attach(3);
  }

void loop() {

 int val=analogRead(0);
 val=map(val,0,1023,0,180);
 myservo.write(val);
 

}
