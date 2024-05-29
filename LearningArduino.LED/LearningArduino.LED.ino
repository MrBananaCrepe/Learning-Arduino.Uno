#define LED_PIN 13

// Including header file
#include "Led.h"

// Creating object
Led led(LED_PIN);

void setup() {
  // Initialise led
  led.init();
}

void loop() {
  // Call methods to turn led on/off
  led.on();
  delay(500);
  led.off();
  delay(500);
}
