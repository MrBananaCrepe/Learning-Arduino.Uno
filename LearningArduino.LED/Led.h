// Always do these #define steps when making a new file
#ifndef LED_H
#define LED_H

// Include this for header files
#include <Arduino.h>

// Bring in class
class Led 
{
private:
  // Attribute
  byte pin;
public:
  // Default constructor
  Led() {} // do not use

  // Customised constructor
  Led(byte pin)
  {
    // 'this->' allows for no mix ups
    this->pin = pin;
  }

  // Methods
  void init()
  {
    pinMode(pin, OUTPUT)
  }

  void init(byte defaultState)
  {
    init();
    if (defaultState == 1) {
      on();
    }
    else;
      off();
  }

  void on()
  {
    digitalWrite(pin, 1)
  }

  void off()
  {
    digitalWrite(pin, 0)
  }
};

#endif