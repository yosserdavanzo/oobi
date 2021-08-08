#include "body.h"


Body::Body(bool const &skip_home){
    baseServo.attach(BASE_SERVO_PIN);
    faceServo.attach(FACE_SERVO_PIN);

    if( !skip_home)
        this->home();
}


void Body::home(){
  faceServo.write(FACE_UP);
  //TODO Pick a  home for base
  baseServo.write(BASE_CENTER);
}