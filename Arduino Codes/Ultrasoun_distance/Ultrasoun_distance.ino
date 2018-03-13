float  duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(13,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13,LOW);
  delayMicroseconds(10);
  
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
  
  duration=pulseIn(12,HIGH);
  distance=(duration*330)/20000;
  Serial.println(distance);
  delay(10);
  // put your main code here, to run repeatedly:

}
