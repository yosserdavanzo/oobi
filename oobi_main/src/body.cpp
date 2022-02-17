#include "body.h"

Body::Body(bool const &homing){
    this->attachBase();
    this->attachFace();

    if(homing)
        this->home();
}

void const Body::home(){
    this->writeFace(FACE_UP);
    this->writeBase(BASE_CENTER);
}

void const Body::attachFace(){
    baseServo.attach(FACE_SERVO_PIN);
}

void const Body::attachBase(){
    baseServo.attach(BASE_SERVO_PIN);
}

void const Body::detachFace(){
    baseServo.detach();
}

void const Body::detachBase(){
    baseServo.detach();
}

int const Body::readFace(){
    return faceServo.read();
}

int const Body::readBase(){
    return baseServo.read();
}

void const Body::writeFace(int const &angle){
    faceServo.write(constrain(angle, FACE_UP, FACE_DOWN));
    delay(MOVE_DELAY);
    return;
}

void const Body::writeBase(int const &angle){
    baseServo.write(constrain(angle, BASE_RIGHT, BASE_LEFT));
    delay(MOVE_DELAY);
    return;
}

int const Body::readRoll(){
    return map(analogRead(POT_PIN), POT_MIN, POT_MAX, POT_ANGLE_MIN, POT_ANGLE_MAX);
}
