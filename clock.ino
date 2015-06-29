/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int led0Pin =  0;      // the number of the LED2 pin
const int led1Pin =  1;      // the number of the LED2 pin
const int led2Pin =  2;      // the number of the LED2 pin
const int led3Pin =  3;      // the number of the LED3 pin
const int led4Pin =  4;      // the number of the LED4 pin
const int led5Pin =  5;      // the number of the LED5 pin
const int led6Pin =  6;      // the number of the LED2 pin
const int led7Pin =  7;      // the number of the LED2 pin
const int led8Pin =  8;      // the number of the LED2 pin
const int led9Pin =  9;      // the number of the LED2 pin
const int led10Pin =  10;      // the number of the LED2 pin
const int led11Pin =  11;      // the number of the LED2 pin

void setup() {
  // initialize the LED pin as an output:
  pinMode(led0Pin, OUTPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);  
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
  pinMode(led6Pin, OUTPUT);
  pinMode(led7Pin, OUTPUT);
  pinMode(led8Pin, OUTPUT);
  pinMode(led9Pin, OUTPUT);
  pinMode(led10Pin, OUTPUT);
  pinMode(led11Pin, OUTPUT);
}

void loop() {
    digitalWrite(led0Pin, HIGH);
    delay(1000);
    digitalWrite(led0Pin, LOW);
  
    digitalWrite(led1Pin, HIGH);
    delay(1000);
    digitalWrite(led1Pin, LOW);
 
    digitalWrite(led2Pin, HIGH);
    delay(1000);
    digitalWrite(led2Pin, LOW);

    digitalWrite(led3Pin, HIGH);
    delay(1000);
    digitalWrite(led3Pin, LOW);
      
    digitalWrite(led4Pin, HIGH);
    delay(1000);
    digitalWrite(led4Pin, LOW);
  
    digitalWrite(led5Pin, HIGH);
    delay(1000);
    digitalWrite(led5Pin, LOW);
 
    digitalWrite(led6Pin, HIGH);
    delay(1000);
    digitalWrite(led6Pin, LOW);

    digitalWrite(led7Pin, HIGH);
    delay(1000);
    digitalWrite(led7Pin, LOW);
    
    digitalWrite(led8Pin, HIGH);
    delay(1000);
    digitalWrite(led8Pin, LOW);
  
    digitalWrite(led9Pin, HIGH);
    delay(1000);
    digitalWrite(led9Pin, LOW);
 
    digitalWrite(led10Pin, HIGH);
    delay(1000);
    digitalWrite(led10Pin, LOW);

    digitalWrite(led11Pin, HIGH);
    delay(1000);
    digitalWrite(led11Pin, LOW);
}
