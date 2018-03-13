int button=3;

void setup() {
 Serial.begin(9600);
 pinMode(3,1);
 
  // put your setup code here, to run once:

}

void loop() {
  int value=digitalRead(3);
  if(value==1)
  Serial.println("U Pressed");
  else {
  Serial.println("NOT yet Pressed");}
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
