int i;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
do{
  analogWrite(9,i);
  i=i+5;
}while(i<255);}
  // put your main code here, to run repeatedly:


