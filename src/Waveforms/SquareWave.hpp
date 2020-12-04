#ifndef SquareWave_hpp
#define SquareWave_hpp

#include <stdio.h>
#include "Waveform.hpp"

class SquareWave: public Waveform {
    
public:
    SquareWave():Waveform() {}
    SquareWave(float amp):Waveform(amp) {}
    float getFX(float input);
    float getDeriv(float input);
};

#endif 
