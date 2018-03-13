void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);

  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
    
  // put your setup code here, to run once
}

void loop()
{
  analogWrite(6,100);
  analogWrite(5,100);
  analogWrite(10,100);
  analogWrite(11,100);

  digitalWrite(2, LOW);//TR
  digitalWrite(3,HIGH);

  digitalWrite(4,LOW);//TL
  digitalWrite(7,HIGH);
  
  digitalWrite(8,HIGH);//BL
  digitalWrite(9,LOW);

  digitalWrite(12,HIGH);//BR
  digitalWrite(13,LOW);
}
