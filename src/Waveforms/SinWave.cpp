//
//  SinWave.cpp
//  mySketch2
//
//  Created by William on 2020-10-14.
//

#include "SinWave.hpp"

float SinWave::getFX(float input) {
    return sin(input) * this->amp;
}

float SinWave::getDeriv(float input) {
    return cos(input) * this->amp;
}
