#include "SR04.h"
#define TRIG_PIN 5
#define ECHO_PIN 18

SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long distance;

void setup() {

  Serial.begin(115200);
  delay(1000);
  Serial.println("SR04 library test started");

}

void loop() {

  distance = sr04.Distance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);

}