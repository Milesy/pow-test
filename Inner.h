#ifndef Inner_h
#define Inner_h

#include "Arduino.h"

class Inner {
  public:
    Inner(int p_pinCount);
    void innerTest();
  
  private:
    int pinCount;
};

#endif
