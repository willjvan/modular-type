#ifndef SawtoothWave_hpp
#define SawtoothWave_hpp

#include "Waveform.hpp"

class SawtoothWave: public Waveform {
    
public:
    SawtoothWave():Waveform() {}
    SawtoothWave(float amp):Waveform(amp) {}
    float getFX(float input);
    float getDeriv(float input);
};

#endif
