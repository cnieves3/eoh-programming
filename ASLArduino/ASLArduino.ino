#include "ASLHeaders.h"
#include "Thumb.h"
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

Thumb thumb(0,1,pwm);

// the loop function runs over and over again forever
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600); //opens serial port, sets data rate to 9600 bps
  Serial.println("8 channel Servo test!");

  //Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

 /* delay(10);
   Thumb thumb(0,1);
  Thumb.resetFinger();*/
  }
void loop() {
  
  if(Serial.available()){
      char  input = Serial.read();
      Serial.print("You typed: ");
      Serial.println(input);
      thumb.setFinger(input);


  }
  char alph;
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
