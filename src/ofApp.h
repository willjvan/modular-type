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
          ModularType modularType;
};
