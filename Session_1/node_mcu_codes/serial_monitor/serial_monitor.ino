/* MIT License

Copyright (c) 2024 Pratik Roy

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
int ledPin = D3;
int buttonPin = D2;
int potPin = A0;

void setup()
{
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(potPin, INPUT);

  // initialise serial port with baud rate of 9600
  Serial.begin(9600);
}

void loop()
{
  // read the state of buttonPin and store it as buttonState (0 or 1)
  int buttonState = digitalRead(buttonPin);

  // read the value of the pot
  int potValue = analogRead(potPin);

  // turn led on with the value of button
  digitalWrite(ledPin, !buttonState);

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