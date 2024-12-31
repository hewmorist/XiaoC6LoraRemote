#include <Arduino.h>

#include <stdio.h>
#include "driver/gpio.h"

// The XIAO ESP32C6 has a LED_BUILTIN

void setup() {
  // initialize digital pin led as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(1000);               // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off
  delay(1000);               // wait for a second