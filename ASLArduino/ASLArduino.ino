#include "ASLHeaders.h"
finger thumb(0,1);

// the loop function runs over and over again forever
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

