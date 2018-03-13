
int i,a;
int pin[5]={5,6,9,10,11};
void setup() {
for(a=0;a<5;a++) 
pinMode(pin[a],OUTPUT);

// put your setup code here, to run once:

}

void loop() {
int a;
for(a=0;a<5;a++)
{
for(i=0;i<255;i++)
{
  
analogWrite(pin[a],i);
delay(1);
}
for(i=255;i>0;i--)
{analogWrite(pin[a],i);
delay(1);
}}}



 

