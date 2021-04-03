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
    if(input == 'a'){
      delay(1000);
      for(int alength = SERVOMIN; alength< 500; alength++){
        delay(5);
        pwm.setPWM(servoMotor2, 0, alength);
        delay(5);
      }
      resetFinger();


   }
  
};

void finger::resetFinger(){
  for (int pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    delay(5);
    pwm.setPWM(servoMotor2, 0, pulselen);
    delay(5);
  }
};

void finger::setThumb(char input){
  
};
