#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  //print some text to usb port

  Serial.println("\n001211882 \nGeorge Mathiouddakis");
  Serial.println("Chip ID: " +String(ESP.getChipId()));
  Serial.println("FlashID: "+String(ESP.getFlashChipId()));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Time in miliseconds Since Start: "+String(millis()));
  delay(2000);

}