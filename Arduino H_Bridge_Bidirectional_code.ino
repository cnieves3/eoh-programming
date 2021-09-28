int MotorPositve = 10;
int MotorNegative = 11;

  // This code is for a H BRIDGE design:
void setup() {
  // put your setup code here, to run once:

pinMode(MotorPositve, OUTPUT);
pinMode(MotorNegative, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(MotorPositve,HIGH);
delay(1000);
digitalWrite(MotorPositve,LOW);
delay(1000);
digitalWrite(MotorNegative,HIGH);
delay(1000);
digitalWrite(MotorNegative,LOW);
delay(1000);
  // Do not exceed motor value of 255 as this is the max speed:
}
