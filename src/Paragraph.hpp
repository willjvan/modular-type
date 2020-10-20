#ifndef Paragraph_hpp
#define Paragraph_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Format.hpp"
#include "./Waveforms/Waveform.hpp"
#include "./Waveforms/SinWave.hpp"
#include "./Waveforms/SquareWave.hpp"
#include "./Waveforms/TriangleWave.hpp"
#include "./Waveforms/SawtoothWave.hpp"

#include "Line.hpp"


class Paragraph{
    public:
        Paragraph();
        Paragraph(std::string text, float lineVari, float lettVari, vector<shared_ptr<Waveform>> waves, Format format);
    
        void update(float input);
        void draw();
    
        // setters
        void setText(string &text);
        void setFormat(Format format);
        void setLineVariation(float &vari);
        void setLetterVariation(float &vari);
        void setXAmp(float &amp);
        void setYAmp(float &amp);
    
        enum waveType {
            SIN, SQUARE, TRIANGLE, SAWTOOTH
        };
    
        void setXWave(waveType wave);
        void setYWave(waveType wave);
    
        // getters
        int getWidth();
        int getHeight();
    

    
    private:
        string text;
        float lineVari, lettVari;
        int width, height;
        Format format;
        vector<shared_ptr<Waveform>> waves;
    
        void setupLines();
        vector<string> getStrings();
        vector<unique_ptr<Line>> lines;
        
};

#endif /* Paragraph_hpp */
