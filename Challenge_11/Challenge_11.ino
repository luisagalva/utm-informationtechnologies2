// C++ code
//
#include <Servo.h>
#include <NewPing.h>

//const is for variables that won't change
//There is not right or wrong code, there is just code that works and doesnt' work
const int ServoPin = 11;
const int TriggerPin = 1;
const int EchoPin = 2;

NewPing sonar(TriggerPin, EchoPin, 100);
Servo servo;
void setup()
{
  Serial.begin(9600);
  servo.attach(ServoPin);
}

void loop()
{
  int cm = sonar.ping_cm();
  Serial.println(cm);
  
  int angle = map(cm, 2, 15, 15, 165);
  servo.write(angle);
  
  delay(60);
}
