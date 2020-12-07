#include "SinWave.hpp"

float SinWave::getFX(float input) {
    return sin(input) * this->amp;
}

float SinWave::getDeriv(float input) {
    return cos(input) * this->amp;
}
