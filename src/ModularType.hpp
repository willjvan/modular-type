//
//  ModularType.hpp
//  mySketch2
//
//  Created by William on 2020-10-15.
//

#ifndef ModularType_hpp
#define ModularType_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxGui.h"
#include "Paragraph.hpp"
#include "Format.hpp"
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
    
        // gui
        void onTextChange(std::string &text);
        void onColChange(int &col);
        void onLineChange(int &space);
        void onLetterChange(int &space);
        void onLineVariChange(float &vari);
        void onLetterVariChange(float &vari);
        void onXAmpChange(float &amp);
        void onYAmpChange(float &amp);
        void onXSinChange(bool &on);
//        void onXWaveChange(float &amp);
//        void onYWaveChange(float &amp);
    
        // global
        Paragraph paragraph;
        int width, height, paraWidth;
        Format format;
        ofTrueTypeFont  font;
    
//        // gui
        ofxPanel gui;
        ofParameterGroup title, layout, xWave, yWave;
        ofParameter<string> textParameter;
        ofParameter<int> letterSpace, lineSpace, columns;
        ofParameter<float> letterVariation, lineVariation, xAmp, yAmp;
        ofParameter<bool> xSin;
};

#endif /* ModularType_hpp */
