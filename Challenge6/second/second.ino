float var_voltage; 
int red_led = 7;

void setup() {
  Serial.begin(9600);//starts serial monitor
  pinMode(red_led, OUTPUT);//starting red led at pin7
  
}

void loop() {
  var_voltage = analogRead(A0)*0.004882125; //voltage returned by infrared analog sensor
  int distance = 13 * pow(var_volt, -1) ;//math equation to transform voltage to distance in centimeres(cm)
  Serial.println(distance);//prints distance to monitor
  if(distance>=12 && distance<=15){//if the distance is larger or equals than 12 and smaller or equals than 15
    digitalWrite(red_led, HIGH);
  }else{
    digitalWrite(red_led, LOW);
  }
  delay(1000);
}
