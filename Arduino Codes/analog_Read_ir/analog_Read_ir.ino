int analogread=0;
void setup() {
 Serial.begin(1200); // put your setup code here, to run once:

}

void loop() {
  int analogread=analogRead(0);
  Serial.println(analogread);
  delay(100);// put your main code here, to run repeatedly:

}
