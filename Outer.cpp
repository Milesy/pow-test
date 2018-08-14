#include "Arduino.h"
#include "Outer.h"
#include "Inner.h"
#include <math.h>

Outer::Outer() : inner(pinCount), inner2(pinCount) {
    
}

void Outer::outerTest() {
    Serial.println("Performing Outer.");
    inner.innerTest(); 
    inner2.innerTest(); 
}
