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
  byte state;
public:
  // Default constructor
  Led() {} // do not use
  // Customised constructor
  Led(byte pin);

  // Methods
  // Initiate pin for led
  // Call in setup
  void init();
  void init(byte defaultState);

  // Power led
  void on();
  void off();

  //power on/off led depending on state
  void toggle();

  bool isPoweredOn();

};

#endif
