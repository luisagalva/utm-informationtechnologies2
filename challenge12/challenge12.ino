void setup() {
 Serial.begin(9600);
 pinMode(8, OUTPUT); // Led light
}

void loop() {
 if(Serial.available()>0)
   {     
      char data = Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'a': digitalWrite(8, HIGH);break; // when a is pressed on the app on your smart phone
        case 'c': digitalWrite(8, LOW);break; // when d is pressed on the app on your smart phone
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
