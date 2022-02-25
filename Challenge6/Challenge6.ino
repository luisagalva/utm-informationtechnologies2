int second = 1000;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int sensor = 5;
int red_led = 6;
int tempsensor = analogRead(A0);

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(sensor, INPUT);
  pinMode(red_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sensor) == HIGH) {
    digitalWrite(red_led, HIGH);
  }else{
    digitalWrite(red_led, LOW);
    }

}
