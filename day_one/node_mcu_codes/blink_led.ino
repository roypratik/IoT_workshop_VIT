void setup() {                
  pinMode(D0, OUTPUT);       //setup pin 13 as an output
}

void loop() {
  digitalWrite(D0, HIGH);    // turn the LED on (HIGH outputs 5V)
  delay(500);                 // wait for 500 milliseconds
  digitalWrite(D0, LOW);     // turn the LED off (LOW outputs 0V)
  delay(500);                 // wait for 500 milliseconds
}
