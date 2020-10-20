//
//  TriangleWave.cpp
//  mySketch2
//
//  Created by William on 2020-10-14.
//

#include "TriangleWave.hpp"

float TriangleWave::getFX(float input) {
    return this->amp * 4 * abs(input / (2 * PI) - floor(input / (2 * PI) + 1.0 / 2.0)) - this->amp;
}

float TriangleWave::getDeriv(float input) {
//    float fx = getFX(input)
//    if (fx == 0) {
//
//    } else if (fx > 0){
//
//    } else {
//
//    }
    return 0;
}
