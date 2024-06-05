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
  pinMode(pin, OUTPUT);
}

void Led::init(byte defaultState)
{
  init();
  if (defaultState == 1) {
    on();
  }
  else;
    off();
}

void Led::on()
{
  digitalWrite(pin, 1);
}

void Led::off()
{
  digitalWrite(pin, 0);
}
