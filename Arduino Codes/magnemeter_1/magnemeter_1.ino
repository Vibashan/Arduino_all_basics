#include <Wire.h>

void setup() {
  
   Wire.begin();
   Serial.begin(9600); // put your setup code here, to run once:
  Serial.println("Initializing 12C devices");
  
}

void loop() {
  int x_value;
  int y_value;
  int z_value;
  x_value=analogRead(0);
  y_value=analogRead(1);
  z_value=analogRead(2);
  
  Serial.print(x_value);
  Serial.println("X-axis");
    Serial.print( y_value);
  Serial.println("Y-axis");
 
  // Serial.print( z_value);
 // Serial.println("Z-axis");
  

  Serial.println("  ");
    float heading = atan2( y_value, x_value);
    
    Serial.print("heading:\t");
    Serial.println(heading * 180/M_PI);

 
   delay(5000);
  


}
