#define LED_PIN13

class Led 
{
private:
  byte pin;
public:

};

void setup() {
  pinMode(pin_mode, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, 1);
  delay(500);
  digitalWrite(LED_PIN, 0);
  delay(500);
}
