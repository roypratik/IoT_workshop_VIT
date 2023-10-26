int ledPin = D3;
int buttonPin = D2;
int potPin = A0;

void setup() {
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);             
  pinMode(potPin, INPUT);

  // initialise serial port with baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // read the state of buttonPin and store it as buttonState (0 or 1)
  int buttonState = digitalRead(buttonPin);
  
  // read the value of the pot
  int potValue = analogRead(potPin);


  // turn led on with the value of button
  digitalWrite(ledPin,!buttonState);

  // print the value of the button
  Serial.print("Button: ");
  Serial.print(!buttonState);
  Serial.println("   ");

  // print the value of the pot
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.println("   ");

  delay(250);
}