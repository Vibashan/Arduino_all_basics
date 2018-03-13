#include <Wire.h>
int x = 0;
void setup() {
  // Start the I2C Bus as Master
  Wire.begin(); 
}
void loop() {
  Wire.beginTransmission(1); // transmit to device #9
  Wire.write('H');              // sends x 
  Wire.endTransmission();    // stop transmitting
  delay(1000);

  Wire.beginTransmission(1); // transmit to device #9
  Wire.write('L');              // sends x 
  Wire.endTransmission();    // stop transmitting
  delay(500);
  

  
}
