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

const int buttonPin = 2; // Define the pin for the button
int buttonState = 0;     // Variable to store the button state

void setup()
{
  pinMode(buttonPin, INPUT); // Set the button pin as input
  Serial.begin(9600);        // Initialize serial communication
}

void loop()
{
  buttonState = digitalRead(buttonPin); // Read the state of the button

  if (buttonState == HIGH)
  {
    Serial.println("Button is pressed"); // Print a message when button is pressed
  }
  else
  {
    Serial.println("Button is not pressed"); // Print a message when button is not pressed
  }

  delay(100); // Delay for debouncing
}

/*
In this code:

We define the pin to which the button is connected and a variable to store the button state.
In the setup() function, we set the button pin as input and initialize serial communication.
In the loop() function, we read the state of the button using digitalRead() function.
If the button state is HIGH, we print a message indicating that the button is pressed. If
the state is LOW, we print a message indicating that the button is not pressed.
We include a small delay for debouncing to ensure the button press is detected accurately.
You can upload this code to your Arduino board and open the Serial Monitor to see the output
when you press and release the button.

*/