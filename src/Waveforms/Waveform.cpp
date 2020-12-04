//
//  Waveform.cpp
//  mySketch2
//
//  Created by William on 2020-10-13.
//

#include "Waveform.hpp"

Waveform::Waveform() {
    
}

Waveform::Waveform(float amp) {
    this->amp = amp;
}

float Waveform::getFX(float input) {
    return 0;
}

float Waveform::getDeriv(float input) {
    return 0;
}

void Waveform::setAmplitude(float amp) {
    this->amp = amp;
}

float Waveform::getAmplitude() {
    return this->amp;
}
