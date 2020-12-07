#ifndef TriangleWave_hpp
#define TriangleWave_hpp

#include <stdio.h>
#include "Waveform.hpp"

class TriangleWave: public Waveform {
    
    public:
        TriangleWave():Waveform() {}
        TriangleWave(float amp):Waveform(amp) {}
        float getFX(float input);
        float getDeriv(float input);
};

#endif 
