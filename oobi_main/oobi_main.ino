#include <Servo.h> 
#include "src/body.h"

Body oobi;


void setup() {
  oobi.home();

  Serial.begin(9600);
}

void loop() {
  oobi.home();

  
}
