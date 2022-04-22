int IN1 = 2; //magnet1, if on rotates left
int IN2 = 3; //magnet2, if on rotates right
int ENA = 5; //enable/turn on motor
int LeftButton = 8;
int RightButton = 9;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(LeftButton, INPUT);
  pinMode(RightButton, INPUT);
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(LeftButton) ==  HIGH ) {
    Serial.println("rotate left");
    delay(2000);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(ENA, HIGH);
  }
  else if (digitalRead(RightButton) == HIGH) {
    Serial.println("rotate right");
    delay(2000);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(ENA, HIGH);
  }
  else {
    Serial.println("turned off");
    delay(2000);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(ENA, LOW);
  }
}
