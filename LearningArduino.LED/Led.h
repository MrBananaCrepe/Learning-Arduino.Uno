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
  Led(byte pin);

  // Methods
  void init();
  void init(byte defaultState);

  void on();
  void off();

};

#endif