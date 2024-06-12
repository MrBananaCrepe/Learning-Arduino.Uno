#include "Led.h"

// Customised constructor
Led::Led(byte pin)
{
  // 'this->' allows for no mix ups
  this->pin = pin;
  state = 0;
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
  state = 1;
  digitalWrite(pin, state);
}

void Led::off()
{
  state = 0;
  digitalWrite(pin, state);
}

bool Led::isPoweredOn()
{
  return (state == 1);
}

void Led::toggle()
{
  if (isPoweredOn()) {
    off();
  }
  else {
    on();
  }
}


