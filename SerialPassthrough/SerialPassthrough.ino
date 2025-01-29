#include <Adafruit_TinyUSB.h> //comment this line if you are using arduino-nRF5 SDK

void setup() {
  Serial.begin(115200);

}

void loop() {
  if (Serial.available()) { 
    Serial.write(Serial.read()); 
  }
}
