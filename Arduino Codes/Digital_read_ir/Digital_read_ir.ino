int digitalread=0;
void setup() {
pinMode(10,INPUT); 
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  int digitalread=digitalRead(10);
  Serial.println(digitalread);
  delay(100);// put your main code here, to run repeatedly:

}
