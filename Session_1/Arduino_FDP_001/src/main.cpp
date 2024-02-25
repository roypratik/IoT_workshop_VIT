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

#include <Arduino.h>

// Define the LED pin
const int ledPin = 13; // Most Arduino boards have an on-board LED on pin 13

// The setup function runs once when you press reset or power the board
void setup()
{
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

// The loop function runs over and over again forever
void loop()
{
  digitalWrite(ledPin, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(1000);                // Wait for a second (1000 milliseconds)
  digitalWrite(ledPin, LOW);  // Turn the LED off by making the voltage LOW
  delay(1000);                // Wait for a second (1000 milliseconds)
}

/* Key points:

- int ledPin = 13; - Defines the pin number to which the LED is connected.
- pinMode(ledPin, OUTPUT); - Configures the LED pin as an output in the setup() function.
- digitalWrite(ledPin, HIGH); - Turns the LED on by setting the pin to HIGH.
- delay(1000); - Pauses the program execution for 1000 milliseconds (1 second).
- digitalWrite(ledPin, LOW); - Turns the LED off by setting the pin to LOW.
- Upload this code to your Arduino board, and you will see the LED connected to pin 13 blinking on and off every second.

*/