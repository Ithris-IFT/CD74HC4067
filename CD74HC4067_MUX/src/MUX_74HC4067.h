#ifndef MUX_74HC4067_H
#define MUX_74HC4067_H

#include <Arduino.h>

class Mux
{
  public:
    Mux(uint8_t s0, uint8_t s1, uint8_t s2, uint8_t s3);
    void begin();
    void selectChannel(uint8_t channel);

  private:
    uint8_t _s0, _s1, _s2, _s3;
};

#endif // MUXCONTROL_H
