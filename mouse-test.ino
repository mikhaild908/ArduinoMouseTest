/*
  http://www.arduino.cc/en/Tutorial/KeyboardAndMouseControl
*/

#include "Mouse.h"

void setup() {
  Serial.begin(9600);
  Mouse.begin();
}

void loop() {
  Mouse.move(0, -5); // move mouse up
  //Mouse.move(0, 5); // move mouse down
  //Mouse.move(-5, 0); // move mouse left
  //Mouse.move(5, 0); // move mouse right
  delay(60000);
}
