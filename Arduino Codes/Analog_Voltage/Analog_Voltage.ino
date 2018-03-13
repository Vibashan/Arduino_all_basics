float analogPin=0; 
void setup() {
  
  Serial.begin(1200);// put your setup code here, to run once:

}

void loop() {
  
 float value=analogRead(0);
  float voltage=((5*value)/1023);
  Serial.println(voltage);
  delay(1);
}
