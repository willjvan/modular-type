#include "Waveform.hpp"

Waveform::Waveform() {
    
}

Waveform::Waveform(float amp) {
    this->amp = amp;
}

float Waveform::getFX(float input) {
    cout << "waveform fx" << endl;
    return 0;
}

float Waveform::getDeriv(float input) {
    cout << "waveform fx" << endl;
    return 0;
}

void Waveform::setAmplitude(float amp) {
    this->amp = amp;
}

float Waveform::getAmplitude() {
    return this->amp;
}
