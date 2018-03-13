int button=2;
int i=0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(1200);
  // put your setup code here, to run once:

}

void loop() {
 
  int value=digitalRead(2);
  Serial.println(value);
  if(value==1)
  {
 
  
  i=i+51;
  delay(10); 
  }// put your main code here, to run repeatedly:
analogWrite(3,i);
delay(10);
}
