int i;
void setup() {
 
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
// put your setup code here, to run once:

}

void loop() {

for(i=0;i<255;i++)
{
  
analogWrite(9,i);
delay(10);
}
for(i=255;i>0;i--)
{analogWrite(9,i);
delay(10);
}}



 

