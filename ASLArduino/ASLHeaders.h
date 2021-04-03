#include <string.h>
// the setup function runs once when you press reset or power the board
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  800 // This is the 'maximum' pulse length count (out of 4096)
#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates


using namespace std;

//void restart();

class finger{
  public:

    finger(int first, int second);
    finger(int first, int second, int third);

    void setFinger(char input);
    void setThumb(char input);
    void resetFinger();


  private:
    int servoMotor1 = -1;
    int servoMotor2 = -1;
    int servoMotor3 = -1;
    //string fingerType; 
    
};
