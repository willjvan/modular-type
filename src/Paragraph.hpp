//
//  Paragraph.hpp
//  mySketch2
//
//  Created by William on 2020-10-13.
//

#ifndef Paragraph_hpp
#define Paragraph_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Format.hpp"
#include "./Waveforms/Waveform.hpp"
#include "Line.hpp"


class Paragraph{
    public:
        Paragraph();
        Paragraph(std::string text, float lineVari, float lettVari, vector<shared_ptr<Waveform>> waves, Format format);
    
        void update(float input);
        void draw();
        void setText(string &text);
        void setFormat(Format format);
        void setLineVariation(float &vari);
        void setLetterVariation(float &vari);
        void setXAmp(float &amp);
        void setYAmp(float &amp);
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
