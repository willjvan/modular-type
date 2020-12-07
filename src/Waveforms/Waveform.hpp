#ifndef Waveform_hpp
#define Waveform_hpp

#include <stdio.h>
#include "ofMain.h"

class Waveform {
    public:
        Waveform();
        Waveform(float amp);
        virtual float getFX(float input);
        virtual float getDeriv(float input);
        void setAmplitude(float amplitude);
        float getAmplitude();

    protected:
        int amp;
};
#endif 
