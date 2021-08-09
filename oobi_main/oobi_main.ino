#include <Servo.h> 
#include "src/body.h"

Body oobi;


void setup() {
  oobi.home();

  Serial.begin(115200);

  TIMSK0=0;

  delay(1000);
}

void loop() {
  oobi.home();

  delay(3000);
}
