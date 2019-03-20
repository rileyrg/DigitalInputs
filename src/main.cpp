#include <stdio.h>
#include <stdint.h>

#include <Arduino.h>
#include <avr/io.h>

#include <TFT_FastPin.h>

#define ledPin 5
#define  buttonApin 9
#define  buttonBpin 8

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  } 
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
