int i;
void setup() {
 pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);// put your setup code here, to run once:

}

void loop() {

 for(i=0;i<4;i++)
 {
  digitalWrite(6,HIGH); 
  delay(1000);
  digitalWrite(6,LOW); 
  delay(1000);
  
 }
 digitalWrite(7,HIGH);
 delay(1000);
 digitalWrite(7,LOW); 
  delay(1000);
  // put your main code here, to run repeatedly:

}
