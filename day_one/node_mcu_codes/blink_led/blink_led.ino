void setup() {                
  pinMode(D3, OUTPUT);       //setup pin 13 as an output
}

void loop() {
  digitalWrite(D3, HIGH);    // turn the LED on (HIGH outputs 5V)
  delay(500);                 // wait for 500 milliseconds
  digitalWrite(D3, LOW);     // turn the LED off (LOW outputs 0V)
  delay(500);                 // wait for 500 milliseconds
}