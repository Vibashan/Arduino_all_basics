int button=2;
int now=0;
int i;
void setup() {
  pinMode(3,INPUT);
  pinMode(10,OUTPUT);
  Serial.begin(1200);
  char var;
int now;
}
void loop(){
  char var;
int value=digitalRead(3);
Serial.println(value);
if(value==1 && now==0)
{var=HIGH;
 now=1;
}
else if( value==1 && now==1)
{
  var=LOW;
 now=0;
}
digitalWrite(10,value);
  // put your setup code here, to run once:

}

 


