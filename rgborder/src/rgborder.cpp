#include "rgborder.h"
#include <Arduino.h>

void RGBorder::rgbo(const char* color) {
  // Perform actions based on the color argument
  if (strcmp(color, "red") == 0) {
    // Code for handling the "red" command
    // Example: Turn on red LED
    digitalWrite(LED_PIN, HIGH);
  } else if (strcmp(color, "green") == 0) {
    // Code for handling the "green" command
    // Example: Turn on green LED
    digitalWrite(GREEN_LED_PIN, HIGH);
  } else if (strcmp(color, "blue") == 0) {
    // Code for handling the "blue" command
    // Example: Turn on blue LED
    digitalWrite(BLUE_LED_PIN, HIGH);
  }
  // Add other color handling cases as needed
}
