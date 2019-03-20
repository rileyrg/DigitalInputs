#include <stdio.h>
#include <stdint.h>

#include <Arduino.h>
#include <avr/io.h>

#define ledPin 5
#define  buttonApin 9
#define  buttonBpin 8

byte leds = 0;
boolean pressed=false;
boolean on=false;

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
    if (!pressed) {
      pressed=true;
      digitalWrite(ledPin, (on=!on)?HIGH:LOW);
    }
  } else
    pressed=false;
}
