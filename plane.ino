#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int angle;
int angle_mapped;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  angle = analogRead(A0);
  angle_mapped = map(angle, 0, 1023, 30, 45);
  myservo.write(angle_mapped);              
  delay(10); 
}
