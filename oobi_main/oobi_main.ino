
#include "src/body.h"

Body* oobi;


void setup() {

  oobi = new Body;
  delay(1000);

  Serial.begin(9600);
  Serial.println("Communications Begin...");
}

void loop() {
//
////  oobi->writeFace(oobi->FACE_DOWN);
//  oobi->writeBase(oobi->BASE_RIGHT);
//  delay(1000);
//
//  oobi->writeBase(oobi->BASE_CENTER);
//  delay(1000);
//
////  oobi->writeFace(oobi->FACE_UP);
//  oobi->writeBase(oobi->BASE_LEFT);
//  delay(1000);
  Serial.println(oobi->readRoll());
  delay(500);
   
}
