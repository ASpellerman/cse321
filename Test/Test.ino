#include <Servo.h>
int motorControl = 8;
int numSensors = 6;
int sens[6] = {1,2,3,4,5,6};
int sensAngles[6] = {212.3386, 235.8361, 270, 289.6907, 308.3787, 325.5331};
float sum = 0;
int numAng = 0;
float angle = 0;
float currentAngle = 0;
float delayAmount = 0;
float delayScaler = 0;
float sameAngle = 0.1;
Servo motor;

void setup() {
//sets up the motor with the library functionality
Serial.begin(9600);
motor.attach(motorControl);
pinMode(motorControl, OUTPUT);
pinMode(13, OUTPUT);

//input for the sensors
for(int i = 0; i < numSensors; i++){
    pinMode(sens[i], INPUT);
}
}

void loop() {
//adds up the angles of the sensors that are detecting motion
for(int i = 0; i < numSensors; i++){
    if(digitalRead(sens[i])){
    sum += sensAngles[i];
    numAng++;
    }
}

//if no sensors are active, then just quit
if(numAng == 0){
    delay(500);
    return;
}

//calculates the average angle of the sensors that are detecting motion 
//(their FOV is big enough that a person appears on several at a time)
angle = sum / numAng;
//this checks if the angle is more or less the same, and does not rotate if so.
if(abs(angle - currentAngle) > sameAngle){
    delay(500);
    return;
}

//delays while the servo is rotating
motor.write(angle);
delayAmount = (abs(currentAngle - angle) * delayScaler);
delay(delayAmount);
}
