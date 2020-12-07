#include "SawtoothWave.hpp"

float SawtoothWave::getFX(float input) {
    float period = 5;
    return this->amp * 2.0 * ((input / period) - floor(.5 + (input / period)));
}

float SawtoothWave::getDeriv(float input) {
    return 0;
}
