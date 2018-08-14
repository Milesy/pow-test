#ifndef Outer_h
#define Outer_h

#include "Arduino.h"
#include "Inner.h"

class Outer {
  public:
    Outer();
    void outerTest();
  
  private:
    int pinCount = 16;
    Inner inner;
    Inner inner2;
};

#endif
