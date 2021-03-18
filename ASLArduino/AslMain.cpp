#include "ASLHeaders.h"

void restart(){

};

finger::finger(int first, int second, string finger){
  servoMotor1 = first;
  servotMotor2 = second;
  fingerType = finger;
};

finger::finger(int first, int second, int third, string finger){
  servoMotor1 = first;
  servoMotor2 = second;
  servoMotor3 = third;
  fingerType = finger;

};

finger::setFinger(char input){
  if(fingerType == "Thumb")
   setThumb(input);
  
};

finger::resetFinger(){
  
};

finger::setThumb(char input){
  
};
