#include <Arduino.h>

#include <stdio.h>
#include "driver/gpio.h"

// The XIAO ESP32C6 has a built-in LED on GPIO15 active low.

#define ONBOARD_LED 15

void setup() {
  // initialize digital pin ONBOARD_LED as an output
  pinMode(ONBOARD_LED, OUTPUT);
}

void loop() {
  digitalWrite(ONBOARD_LED, LOW);   // turn the ONBOARD_LED on 
  delay(1000);               // wait for a second
  digitalWrite(ONBOARD_LED, HIGH);    // turn the ONBOARD_LED off
  delay(1000);               // wait for a second
}