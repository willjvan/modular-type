#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Format.hpp"
#include "Letter.hpp"
#include "./Waveforms/Waveform.hpp"

class Waveform;

class Line {
    public:
        Line();
        Line(string text, float lettVari, glm::vec3 origin, Format format);
        void update(float input, vector<shared_ptr<Waveform>>& waves);
        void draw();
        int getWidth();

    private:
        string text;
        float lettVari;
        vector<unique_ptr<Letter>> letters;
        glm::vec3 origin;
        Format format;

        glm::vec3 getOffset(float input, vector<shared_ptr<Waveform>>& waves);
        glm::vec3 getRotate(float input, vector<shared_ptr<Waveform>>& waves);
        void setupLetters();
};

#endif 
