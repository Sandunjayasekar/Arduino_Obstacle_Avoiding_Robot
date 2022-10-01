void setup() {
#include <Servo.h>         
#include <NewPing.h>        

//motor control pins
const int LeftMotorForward = 6;
const int LeftMotorBackward = 7;
const int RightMotorForward = 5;
const int RightMotorBackward = 4;

//Ultrasonic sensor pins
#define trig_pin A1
#define echo_pin A2 

#define maximum_distance 200
boolean goesForward = false;
int distance = 100;

NewPing sonar(trig_pin, echo_pin, maximum_distance);
Servo servo_motor;
}

void loop() {
 

}
