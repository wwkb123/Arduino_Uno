#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void setup() {
  // put your setup code here, to run once:

  
  servoRight.attach(12); 
  servoRight.writeMicroseconds(1300); //right wheel clockwise
  servoLeft.attach(13);
  servoLeft.writeMicroseconds(1700); //left wheel anticlockwise

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
