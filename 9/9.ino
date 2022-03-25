int IN1 = 2;
int IN2 = 3;
int ENA = 5;
int LeftButton = 8;
int RightButton = 9;
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(LeftButton, INPUT);
  pinMode(RightButton, INPUT);
}

void loop() {
  
  if (digitalRead(LeftButton) ==  HIGH ) {
    digitalWrite(IN1, HIGH);
      digitalWrite(ENA, HIGH);
    }
    else if (digitalRead(RightButton) == HIGH) {
    digitalWrite(IN2, HIGH);
      digitalWrite(ENA, HIGH);
    }
    else {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(ENA, LOW);
    }
}
