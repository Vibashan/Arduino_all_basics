void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
 int L=712;
 double x;
 double y;
 double z;
 float angle;
 
 x= analogRead(0);
 y= analogRead(1);
 z= analogRead(2);
 
 angle=asin(x/L);
 Serial.println(angle);

}
