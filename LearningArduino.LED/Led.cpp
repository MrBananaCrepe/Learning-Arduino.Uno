#include "Led.h"

// Customised constructor
Led::Led(byte pin)
{
  // 'this->' allows for no mix ups
  this->pin = pin;
}

// Methods
void Led::init()
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