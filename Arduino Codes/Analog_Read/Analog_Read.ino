int analogPin=0; 
void setup() {
  
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  
  float value=analogRead(0);
  float avalue=analogRead(1);
  
  Serial.println(value);
  //Serial.println(avalue);
  //delay(5000);
}
