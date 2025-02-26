#include <Arduino.h>

// Pin untuk LED
const int led1 = 21;  // Ganti dengan pin yang sesuai
const int led2 = 23;  // Ganti dengan pin yang sesuai
const int led3 = 22;  // Ganti dengan pin yang sesuai

void setup() {
  // Set pin sebagai output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Nyalakan LED 1, matikan yang lain
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(30000);  // Tunggu 3 detik

  // Nyalakan LED 2, matikan yang lain
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(3000);  // Tunggu 3 detik

  // Nyalakan LED 3, matikan yang lain
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(15000);  // Tunggu 3 detik
}