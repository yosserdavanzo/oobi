
#pragma once
#include <Arduino.h>
#include <Servo.h> 

class Body{
    private:
        // FACE MOTOR
        const  int FACE_SERVO_PIN = 10;
        Servo faceServo;

        // BASE MOTOR
        const int BASE_SERVO_PIN = 9;
        Servo baseServo;

        // ROTARY SENSOR
        const int POT_PIN = A0;
        // Moves Clockwise
        const int POT_MIN = 0;
        const int POT_MAX = 1023;

    public:
        // CONSTs
        // Face
        const int FACE_UP = 20;
        const int FACE_DOWN = 180;

        // Base
        const int BASE_LEFT = 178;
        // TODO: off center by a bit
        const int BASE_RIGHT = 2;
        const int BASE_CENTER = 90;

        // Roll Reader
        const int POT_ANGLE_MIN = 0; 
        const int POT_ANGLE_MAX = 270; 

        // Movement
        void const home();
        Body(bool const &homing=true);

        int const readFace();
        int const readBase();

        void const writeFace(int const &angle);
        void const writeBase(int const &angle);

        // Sensors
        // returns: 0 - 270 deg
        int const readRoll();

};