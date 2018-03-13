int button=2;
int now=0;
char var;
int i;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(1200);
  // put your setup code here, to run once:

}

void loop() {


int value=digitalRead(2);
Serial.println(value);
if(value==1 && now==0)
{var=HIGH;
 now=1;
 delay(200);
}
else if( value==1 && now==1)
{
  var=LOW;
 now=0;
 delay(200);
}
digitalWrite(3,var);
}
