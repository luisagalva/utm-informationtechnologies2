int second = 1000;
int led_green = 3;
int led_red = 2;
int led_yellow = 4;
int button = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT); //button
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT); 
  pinMode(led_yellow, OUTPUT); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  turnled(led_green,5);
  turnled(led_yellow,2);
  turnled(led_red,7);
}

void turnled(int led, int sec){
  char on = "HIGH";
  char off = "LOW";
    digitalWrite(led, on);
    delay(second * sec);
    digitalWrite(led, off);
}
