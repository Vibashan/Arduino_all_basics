int i;
int x;
int y;
void setup() {
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Serial.begin(1200);
  }

void loop() {

  Serial.println(digitalRead(2));// put your main code here, to run repeatedly:
Serial.println(analogRead(0));
Serial.println(analogRead(1));
Serial.println(" ");
delay(2000);

}
