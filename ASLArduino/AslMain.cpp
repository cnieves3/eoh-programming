#include "ASLHeaders.h"

//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
/*void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600); //opens serial port, sets data rate to 9600 bps
  Serial.println("8 channel Servo test!");

  //Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

 
  }*/
//void restart(){

//};

int finger::getServoMotor1() const{
  return servomotor1;
};

int finger::getServoMotor2() const{
  return servomotor2;
};

/*int finger::setServoMotor1() const{
  return servomotor1;
};

int finger::getServoMotor2() const{
  return servomotor2;
};*/


    
