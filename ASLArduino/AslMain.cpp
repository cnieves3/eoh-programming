#include "ASLHeaders.h"
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600); //opens serial port, sets data rate to 9600 bps
  Serial.println("8 channel Servo test!");
  
pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

  delay(10);
  finger thumb(0,1);
  thumb.resetFinger();
  }
//void restart(){

//};

finger::finger(int first, int second){
  servoMotor1 = first;
  servoMotor2 = second;

};

finger::finger(int first, int second, int third){
  servoMotor1 = first;
  servoMotor2 = second;
  servoMotor3 = third;

};

void finger::setFinger(char input){
  //if(fingerType == "Thumb")
   setThumb(input);
  
};

void finger::resetFinger(){
  for (int pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    pwm.setPWM(servoMotor1, 0, pulselen);
  }
};

void finger::setThumb(char input){
  
};
