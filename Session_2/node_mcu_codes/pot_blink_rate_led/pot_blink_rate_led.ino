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
int potPin = A0;

void setup()
{
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop()
{
  // read the value of the pot and store it as potValue
  int potValue = analogRead(potPin);

  // turn led on and wait for the time equal to potValue
  digitalWrite(ledPin, HIGH);
  delay(potValue);

  // re-read the value of the pot and store it as potValue
  potValue = analogRead(potPin);

  // turn led off and wait for the time equal to potValue
  digitalWrite(ledPin, LOW);
  delay(potValue);
}