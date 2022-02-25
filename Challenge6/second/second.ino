float var_volt; 
int red_led = 7;

void setup() {
  Serial.begin(9600);
  pinMode(red_led, OUTPUT);
  
}

void loop() {
  
  var_volt = analogRead(A0)* 0.004882125;
  float distance = 13 * pow(var_volt, -1) ;
  Serial.println(distance);
  if(distance>=12 && distance<=15){
    digitalWrite(red_led, HIGH);
  }else{
    digitalWrite(red_led, LOW);
    }
  delay(1000);
}
