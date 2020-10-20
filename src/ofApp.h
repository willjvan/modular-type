#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Paragraph.hpp"
#include "Format.hpp"
#include "./Waveforms/SinWave.hpp"
#include "./Waveforms/TriangleWave.hpp"
#include "./Waveforms/Waveform.hpp"
#include "ModularType.hpp"



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    private:
//        ofxPanel gui;
//        ofxIntSlider colSlider;
//        ofxIntSlider letterSlider;
//        ofxIntSlider lineSlider;
//        ofxFloatSlider letterVariSlider;
//        ofxFloatSlider lineVariSlider;
//
//        ofParameterGroup parameters;
//        ofParameter<std::string> textParameter;
//        ofEventListener textParameterListener;
    
          ModularType modularType;
    
//        void initGlobal();
//        void initWindow();
//        void initColors();
//        void initGui();
//    
//        void onTextChange(std::string &text);
//        void onColChange(int &col);
//        void onLineChange(int &space);
//        void onLetterChange(int &space);
//        void onLineVariChange(float &vari);
//        void onLetterVariChange(float &vari);
};
