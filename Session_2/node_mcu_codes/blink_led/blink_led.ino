void setup() {                
  pinMode(D2, OUTPUT);       //setup pin 13 as an output
}

void loop() {
  digitalWrite(D2, HIGH);    // turn the LED on (HIGH outputs 5V)
  delay(500);                 // wait for 500 milliseconds
  digitalWrite(D2, LOW);     // turn the LED off (LOW outputs 0V)
  delay(500);                 // wait for 500 milliseconds
}