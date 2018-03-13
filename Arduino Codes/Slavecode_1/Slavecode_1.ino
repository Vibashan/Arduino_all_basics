#include <Wire.h>
int LED = 13;
int x = 0;
void setup() {
  // Define the LED pin as Output
  pinMode (LED, OUTPUT);
  // Start the I2C Bus as Slave on address 9
  Wire.begin(1); 
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
}
void receiveEvent(int howMany)
{
 char x;
 while(Wire.available()>0)
 {
  x=Wire.read();

   if (x == 'H') {
    digitalWrite(LED, HIGH);
  }
  //If value received is 3 blink LED for 400 ms
 else if (x == 'L') {
    digitalWrite(LED, LOW);

 }
}}
void loop() {
  //If value received is 0 blink LED for 200 ms
  
  }

