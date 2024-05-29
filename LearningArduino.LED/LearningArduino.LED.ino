#define LED_PIN 13

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
