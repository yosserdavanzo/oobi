#include "body.h"


Body::Body(bool const &homing){
    baseServo.attach(BASE_SERVO_PIN);
    faceServo.attach(FACE_SERVO_PIN);

    if(homing)
        this->home();
}


void const Body::home(){
    this->writeFace(FACE_UP);
    this->writeBase(BASE_CENTER);
}


int const Body::readFace(){
    return faceServo.read();
}

int const Body::readBase(){
    return baseServo.read();
}

void const Body::writeFace(int const &angle){
    faceServo.write(constrain(angle, FACE_UP, FACE_DOWN));
    delay(200);
    return;
}

void const Body::writeBase(int const &angle){
    baseServo.write(constrain(angle, BASE_RIGHT, BASE_LEFT));
    delay(200);
    return;
}