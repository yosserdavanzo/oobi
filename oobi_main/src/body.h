
#pragma once
#include <Arduino.h>
#include <Servo.h> 

class Body{
    private:
        // FACE
        const  int FACE_SERVO_PIN = 13;
        const int FACE_UP = 2;
        const int FACE_DOWN = 180;

        Servo faceServo;

        // BASE
        const int BASE_SERVO_PIN = 9;
        // TODO: find min/max
        const int BASE_LEFT = 2;
        const int BASE_RIGHT = 180;
        const int BASE_CENTER = 90;

        Servo baseServo;


    public:
        void home();
        Body(bool const &skip_home=false);
};