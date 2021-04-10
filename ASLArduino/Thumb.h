#include "ASLHeaders.h"

class Thumb: public finger{

public:

      Thumb(int motor1, int motor2, Adafruit_PWMServoDriver & pwm);
      void setFinger(char input);
      void resetFinger();
      
private:
      Adafruit_PWMServoDriver pwm_;

  
};
