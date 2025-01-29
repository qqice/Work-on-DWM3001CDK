#include <Adafruit_TinyUSB.h> //comment this line if you are using arduino-nRF5 SDK

void setup() {
  Serial.begin(115200);
  Serial.println("RGB Blink Example");
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED_TOP, OUTPUT);
  pinMode(LED_RED_BOT, OUTPUT);
}

void loop() {
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  digitalWrite(LED_RED_TOP, HIGH);
  digitalWrite(LED_RED_BOT, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_RED_TOP, LOW);
  digitalWrite(LED_RED_BOT, LOW);
  delay(1000);
}
