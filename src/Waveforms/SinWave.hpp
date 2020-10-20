//
//  SinWave.hpp
//  mySketch2
//
//  Created by William on 2020-10-14.
//

#ifndef SinWave_hpp
#define SinWave_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Waveform.hpp"

class SinWave: public Waveform {
    public:
        SinWave():Waveform() {}
        SinWave(float amp):Waveform(amp) {}
        float getFX(float input);
        float getDeriv(float input);
};


#endif /* SinWave_hpp */
