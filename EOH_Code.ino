// Initial Arduino Code Used for Servo Motor Testing
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;// variable to store the servo position
char input;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); 
  delay(2000);  
  Serial.println("Type a letter");
}

void loop() {
  if(Serial.available()){
        input = Serial.read();
    }
  if (input=='1'){
    for (pos = 0; pos <= 180; pos += 6) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 6) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
    
  }
  
  }
}
/* hi*/