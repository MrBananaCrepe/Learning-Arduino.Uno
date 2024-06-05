#ifndef LED_BLINKER_H
#define LED_BLINKER_H

#include <Arduino.h>
#include "Led.h"

class LedBlinker
{
private:
  Led led;

public:
  LedBlinker() {} // Do not use
  LedBlinker(Led &led);

  void initLed();

};



#endif