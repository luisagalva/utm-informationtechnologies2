// C++ code
//
//Include Servo library
#include <Servo.h>

Servo myServo;
int servoPin = 1;
const int sensorPin = A0;
int sensorValue = 0;

void setup()
{
  //Define pin for servo motor
  myServo.attach(servoPin);
  //Starts the monitor
  Serial.begin(9600);
}

void loop()
{
  //Read the sensor
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
    delay(1000);
  if(sensorValue >=30){
    myServo.write(90);
    delay(3000);
  }if(15 >= sensorValue <= 30){
    myServo.write(45);
    delay(3000);
  }if(0 >= sensorValue <= 15){
    myServo.write(0);
    delay(3000);
  }
  
}
