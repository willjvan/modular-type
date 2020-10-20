#include "ofApp.h"

void ofApp::setup(){
    modularType = ModularType();
    modularType.init();
}

void ofApp::update(){
    modularType.update();
}

void ofApp::draw(){
    modularType.draw();
}
