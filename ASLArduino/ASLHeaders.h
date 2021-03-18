void restart();

class finger{
  public:

    finger(int first, int second, string finger);
    finger(int first, int second, int third, string finger);

    setFinger(char input);
    resetFinger();


  private:
    servoMotor1 = -1;
    servoMotor2 = -1;
    servoMotor3 = -1;
    string fingerType; 
    
}
}
