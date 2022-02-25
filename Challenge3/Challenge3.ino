void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //button
  pinMode(3, OUTPUT); //yellow
  pinMode(4, OUTPUT); //red
  pinMode(5, OUTPUT); //green
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == 3 ) {
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    delay(1000);
  } else {
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(1000);
  }

}
