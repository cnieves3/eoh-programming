#include "Thumb.h"


Thumb::Thumb(int motor1,int motor2, Adafruit_PWMServoDriver & pwm):finger(motor1,motor2),pwm_(pwm){
  };

void Thumb::setFinger(char input){

    if(input == 'a'){
      delay(1000);
      for(int alength = SERVOMIN; alength< 500; alength++){
        delay(5);
        pwm_.setPWM(getServoMotor2(), 0, alength);
        pwm_.setPWM(getServoMotor1(), 0, alength);
        delay(5);
      }
      resetFinger();


   }
  
};

void Thumb::resetFinger(){
  for (int pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    delay(5);
    pwm_.setPWM(getServoMotor1(), 0, pulselen);
    pwm_.setPWM(getServoMotor2(), 0, pulselen);
    delay(5);
  }
};
