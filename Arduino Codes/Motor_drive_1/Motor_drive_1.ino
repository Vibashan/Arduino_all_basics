#define E1 10 // Enable Pin for motor 1
#define E2 11 // Enable Pin for motor 2
#define I1 8 // Control pin 1 for motor 1 You can change any pin according to your need
#define I2 9 // Control pin 2 for motor 1
#define I3 12 // Control pin 1 for motor 2
#define I4 13 // Control pin 2 for motor 2

void setup() {

//pinMode(E1, OUTPUT);
//pinMode(E2, OUTPUT);

pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {

//analogWrite(E1, 153); // Run in half speed (you can control the speed of motor M1 by changing values from 0 to 255)
//analogWrite(E2, 255); // Run in full speed(you can control the speed of motor M2 by changing values from 0 to 255)

digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(11,LOW);

}

// change direction

/*digitalWrite(E1, LOW);
digitalWrite(E2, LOW);

delay(200);

analogWrite(E1, 255); // Run in full speed(you can control the speed of motor M2 by changing values from 0 to 255)
analogWrite(E2, 153); // Run in half speed (you can control the speed of motor M1 by changing values from 0 to 255)

digitalWrite(I1, LOW);
digitalWrite(I2, HIGH);
digitalWrite(I3, LOW);
digitalWrite(I4, LOW);

delay(10000);*/

