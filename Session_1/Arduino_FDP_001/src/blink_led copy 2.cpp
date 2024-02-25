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

const int buttonPin = 2; // Pin connected to the button
const int ledPin = 13;   // Pin connected to the LED

// Variables will change:
int ledState = HIGH;       // the current state of the output pin
int buttonState;           // the current reading from the input pin
int lastButtonState = LOW; // the previous reading from the input pin

// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a larger number than can be stored in an int.
unsigned long lastDebounceTime = 0; // the last time the output pin was toggled
unsigned long debounceDelay = 50;   // the debounce time; increase if the output flickers

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up resistor
    digitalWrite(ledPin, ledState);
}

void loop()
{
    // read the state of the switch into a local variable:
    int reading = digitalRead(buttonPin);

    // check to see if you just pressed the button
    // (i.e. the input went from HIGH to LOW), and you've waited long enough
    // since the last press to ignore any noise:

    // If the switch changed, due to noise or pressing:
    if (reading != lastButtonState)
    {
        // reset the debouncing timer
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay)
    {
        // whatever the reading is at, it's been there for longer than the debounce
        // delay, so take it as the actual current state:

        // if the button state has changed:
        if (reading != buttonState)
        {
            buttonState = reading;

            // only toggle the LED if the new button state is LOW
            if (buttonState == LOW)
            {
                ledState = !ledState;
            }
        }
    }

    // set the LED:
    digitalWrite(ledPin, ledState);
    // save the reading. Next time through the loop, it'll be the lastButtonState:
    lastButtonState = reading;
}

/*
To use an internal pull-up resistor on an input pin and debounce the input to account for noise,
you typically deal with a scenario like reading a pushbutton. The Arduino has internal pull-up
resistors that you can activate. When using a pull-up resistor, the input pin will be at a HIGH
state by default. Pressing the button connects the pin to ground (GND), pulling it to a LOW state.
Debouncing is necessary because pressing or releasing a button can produce a noisy signal, causing
the input to rapidly fluctuate between HIGH and LOW states. A simple software debounce mechanism
waits a short period to ensure the button state is stable before changing the output state.

- Uses an internal pull-up resistor for the button pin, meaning the button is connected between the pin and ground.
- Checks the button state every loop and uses a simple debouncing algorithm. If the button state has changed and stayed changed for longer than the debounce delay (50ms in this case), it toggles the LED state.
- The INPUT_PULLUP mode in pinMode(buttonPin, INPUT_PULLUP); activates the internal pull-up resistor, making the default state of the button HIGH and going LOW when pressed.
- Adjust debounceDelay if your setup still experiences bouncing issues, as the optimal value can depend on the specific button and application.

*/