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

// const int buttonPin = 2; // Pin connected to the button
// const int ledPin = 13;   // Pin connected to the LED

// bool ledState = false;              // Variable to store the state of the LED
// int buttonState;                    // Current reading from the input pin
// int lastButtonState = LOW;          // Previous reading from the input pin
// unsigned long lastDebounceTime = 0; // Last time the output pin was toggled
// unsigned long debounceDelay = 50;   // The debounce time; increase if the output flickers

// void setup()
// {
//     pinMode(ledPin, OUTPUT);
//     pinMode(buttonPin, INPUT_PULLUP);
//     digitalWrite(ledPin, ledState);
//     Serial.begin(9600); // Initialize serial communication at 9600 bits per second
// }

// void loop()
// {
//     // Debounce button input
//     int reading = digitalRead(buttonPin);
//     if (reading != lastButtonState)
//     {
//         lastDebounceTime = millis();
//     }
//     if ((millis() - lastDebounceTime) > debounceDelay)
//     {
//         if (reading != buttonState)
//         {
//             buttonState = reading;
//             if (buttonState == LOW)
//             {
//                 ledState = !ledState;
//                 digitalWrite(ledPin, ledState);
//             }
//         }
//     }
//     lastButtonState = reading;

//     // Check for serial input
//     if (Serial.available() > 0)
//     {
//         String command = Serial.readStringUntil('\n');
//         if (command == "ON")
//         {
//             digitalWrite(ledPin, HIGH);
//             Serial.println("LED turned ON");
//         }
//         else if (command == "OFF")
//         {
//             digitalWrite(ledPin, LOW);
//             Serial.println("LED turned OFF");
//         }
//     }
// }

/*
Conditional Statements: Used to make decisions based on serial input.
UART (Serial Communication): Allows communication between the Arduino and a computer or other devices.
Debouncing: Ensures stable button readings.
Variables: Store states and other data.
Arrays: Hold multiple button states for potential expansion.

Debounces a button connected to buttonPin to toggle the LED state.
Reads serial input commands to control the LED:
Sending "ON" turns the LED on.
Sending "OFF" turns the LED off.
Utilizes conditional statements (if and else if) to execute actions based on the button's debounced state and the serial command received.
Employs variables to store the state of the button, the LED, and the last debounce time.
While this example doesn't use an array for multiple buttons or LEDs, the concept of arrays can be easily integrated if managing multiple inputs or outputs by storing their states in arrays.
*/