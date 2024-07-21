#include <Arduino.h>

// Definisikan pin LED
#define LED_PIN1 2
#define LED_PIN2 4

void setup() {
  // Atur kedua pin sebagai output
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  // Nyalakan LED pada pin GPIO2 dan matikan LED pada pin GPIO4
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, LOW);
  delay(1000); // Tunggu selama 1 detik

  // Matikan LED pada pin GPIO2 dan nyalakan LED pada pin GPIO4
  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, HIGH);
  delay(1000); // Tunggu selama 1 detik
}
