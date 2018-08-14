#include "Arduino.h"
#include "Inner.h"
#include <math.h>

Inner::Inner(int p_pinCount) {
    pinCount = p_pinCount;
}

void Inner::innerTest() {
    Serial.println("Performing Inner.");
      
    Serial.print("pinCount = ( ");
    Serial.print(pinCount);
    Serial.print(" )\n");

    double value = pow(2, pinCount);
    double value2 = pow(2, 16);

    Serial.print("value = ");
    Serial.print(value);
    Serial.print("\n");

    Serial.print("value2 = ");
    Serial.print(value2);
    Serial.print("\n");
}
