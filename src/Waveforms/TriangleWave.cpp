#include "TriangleWave.hpp"

float TriangleWave::getFX(float input) {
    float p = 5;
    return this->amp * 2/PI * asin(sin(2*PI*input/p));
}

float TriangleWave::getDeriv(float input) {
    return 0;
}
