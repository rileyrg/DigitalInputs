#include <Arduino.h>

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
  static boolean pressed=false,  on=false; //
  if (digitalRead(buttonApin) == LOW)
  {
    if (!pressed) {
      pressed=true;
      digitalWrite(ledPin, (on=!on)?HIGH:LOW);
    }
  } else
    pressed=false;
}
