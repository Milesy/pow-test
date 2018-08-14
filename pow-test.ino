#include "Inner.h"
#include "Outer.h"

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    while(!Serial);

    Outer outer;
    outer.outerTest();
}

void loop() {
  // put your main code here, to run repeatedly:
}
