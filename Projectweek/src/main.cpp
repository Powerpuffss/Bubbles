#include <Arduino.h>

#include <Blink.h>

// Maak een instantie aan van de Blink klasse voor pin 2 (de standaard ingebouwde LED op veel ESP32 borden)
Blink myLed(2);

void setup() {
  // De pinMode initialisatie gebeurt automatisch in de constructor van de Blink klasse
}

void loop() {
  // Roep de now() methode aan om de led te laten knipperen (1 seconde aan, 1 seconde uit)
  myLed.now();
}