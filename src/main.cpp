#include <Arduino.h>

#include <stdio.h>
#include "driver/gpio.h"

// The XIAO ESP32C6 has a built-in LED

void setup() {
  // initialize digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED_BUILTIN on 
  delay(1000);               // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED_BUILTIN off
  delay(1000);               // wait for a second
}