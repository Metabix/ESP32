#include <Arduino.h>

// Built-in LED pin (GPIO2)
const int BUILTIN_LED = 2;

// For external LED, you can use any GPIO pin
// const int LED_PIN = 4;  // Uncomment and change pin number for external LED

void setup() {
  // Initialize Serial for debugging
  Serial.begin(115200);
  
  // Set LED pin as output
  pinMode(BUILTIN_LED, OUTPUT);
  // pinMode(LED_PIN, OUTPUT);  // Uncomment for external LED
  
  Serial.println("LED Blink Program Started");
}

void loop() {
  // Turn LED on
  digitalWrite(BUILTIN_LED, HIGH);
  // digitalWrite(LED_PIN, HIGH);  // Uncomment for external LED
  Serial.println("LED ON");
  delay(1000);  // Wait for 1 second
  
  // Turn LED off
  digitalWrite(BUILTIN_LED, LOW);
  // digitalWrite(LED_PIN, LOW);  // Uncomment for external LED
  Serial.println("LED OFF");
  delay(1000);  // Wait for 1 second
}