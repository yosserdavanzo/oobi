#include <Servo.h> 
#include "src/body.h"

// const int BASE_SERVO_PIN = 13;
// Servo baseServo;
// int FACE_UP = 2;
// int FACE_DOWN = 180;

void setup() {
  Body oobi();

  Serial.begin(9600);
}

void loop() {
  // baseServo.write(FACE_UP);
  // delay(5000);
  // baseServo.write(FACE_DOWN);
  // delay(1000);
}
