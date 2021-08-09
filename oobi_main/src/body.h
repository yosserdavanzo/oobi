
#pragma once
#include <Arduino.h>
#include <Servo.h> 

class Body{
    private:
        // FACE
        const  int FACE_SERVO_PIN = 13;
        Servo faceServo;

        // BASE
        const int BASE_SERVO_PIN = 2;
        Servo baseServo;


    public:
        // CONSTs
        // Face
        // TODO VERify
        const int FACE_UP = 2;
        const int FACE_DOWN = 178;

        // Base
        // TODO VERify
        const int BASE_LEFT = 178;
        const int BASE_RIGHT = 2;
        const int BASE_CENTER = 90;

        // FUNCs
        void const home();
        Body(bool const &homing=true);

        int const readFace();
        int const readBase();

        void const writeFace(int const &angle);
        void const writeBase(int const &angle);
};