

float  duration;
float distance;
float i;
void setup() {
  Serial.begin(1200);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(7,LOW);
  delayMicroseconds(10);
  
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  
  duration=pulseIn(6,HIGH);
  distance=(duration*330)/20000;
  Serial.println(distance);
  delay(10);
  Serial.println(duration);
  delay(10);
 
   i=(255*distance)/300; 
   Serial.println(i);
delay(10);
analogWrite(3,i);
 
if(distance<=10){
  digitalWrite(3,LOW);  
}

}
