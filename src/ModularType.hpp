#ifndef ModularType_hpp
#define ModularType_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxGui.h"
#include "Paragraph.hpp"
#include "Format.hpp"
#include "./Waveforms/SawtoothWave.cpp"
#include "./Waveforms/SquareWave.hpp"
#include "./Waveforms/SinWave.hpp"
#include "./Waveforms/TriangleWave.hpp"
#include "./Waveforms/Waveform.hpp"

class ModularType {
    

    public:
        ModularType();
        void init();
        void update();
        void draw();
    
    private:
        void initGlobal();
        void initWindow();
        void initColors();
        void initGui();
        void initParagraph();
    
        // gui functions
        void onTextChange(std::string &text);
        void onColChange(int &col);
        void onLineChange(int &space);
        void onLetterChange(int &space);
        void onLineVariChange(float &vari);
        void onLetterVariChange(float &vari);
        void onXAmpChange(float &amp);
        void onYAmpChange(float &amp);
        void onXTypeChange(int &x);
        void onYTypeChange(int &y);
    
        // global
        Paragraph paragraph;
        int width, height, paraWidth;
        Format format;
        ofTrueTypeFont  font;
    
        // gui
        ofxPanel gui;
        ofParameterGroup title, layout, xWave, yWave;
        ofParameter<string> textParameter;
        ofParameter<int> letterSpace, lineSpace, columns, xType, yType;
        ofParameter<float> letterVariation, lineVariation, xAmp, yAmp;
};

#endif 
