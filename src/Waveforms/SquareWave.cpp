#include "SquareWave.hpp"

float SquareWave::getFX(float input) {
    if (sin(input) > 0){
        return this->amp;
        
    } else if (sin(input < 0)) {
        return -1 * this->amp;
    } else {
        return 0;
    }
}

float SquareWave::getDeriv(float input) {
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
