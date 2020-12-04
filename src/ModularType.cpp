#include "ModularType.hpp"

ModularType::ModularType() {
    
}

void ModularType::init() {
    initGlobal();
    initWindow();
    initColors();
    initParagraph();
    initGui();
}

void ModularType::update() {
    paragraph.update(ofGetElapsedTimef()*2);
}

void ModularType::draw() {
    ofPushMatrix();
    ofTranslate(width/2, height/2, 0);
    ofTranslate(-paragraph.getWidth()/2, -paragraph.getHeight()/2, 0);
    paragraph.draw();
    ofPopMatrix();
    gui.draw();
}

void ModularType::initGlobal() {
    width = 1200;
    height = 800;
    font.load("cour.ttf", 32);
    format = Format(12, 50, 50, font);
}

void ModularType::initWindow() {
    ofSetWindowShape(width, height);
    ofSetWindowPosition(100, 100);
}

void ModularType::initColors() {
    ofClear(255,255,255);
    ofBackground(255,255,255);
    ofSetColor(0,0,0);
    ofFill();
}

void ModularType::initParagraph() {
    vector<shared_ptr<Waveform>> waves;
    waves.push_back(shared_ptr<Waveform>(new SinWave(5.0)));
    waves.push_back(shared_ptr<Waveform>(new SinWave(10.0)));
    waves.push_back(shared_ptr<Waveform>(new SinWave(0.0)));
    cout <<waves[1]->getFX(.5)<<endl;
    paragraph = Paragraph("hehehehehehehehehehehehehehehehehehehehehe", 0.0f, 0.0f, waves, format);
}

void ModularType::initGui() {
//    ofColor background(21,200,21);
//    gui.setDefaultTextColor(background);
//    gui.setHeaderBackgroundColor(background);

    title.setName("Modular Type");
    layout.setName("Format");
    xWave.setName("X Wave");
    yWave.setName("Y Wave");
    
    // X Wave
    xAmp.addListener(this, &ModularType::onXAmpChange);
    xWave.add(xAmp.set("X Amp", 0, 0, 100));
    
    xType.addListener(this, &ModularType::onXTypeChange);
    xWave.add(xType.set("Wave Type", 0, 0, 3));

    // Y Wave
    yAmp.addListener(this, &ModularType::onYAmpChange);
    yWave.add(yAmp.set("Y Amp", 0, 0, 100));
    yType.addListener(this, &ModularType::onYTypeChange);
    yWave.add(yType.set("Wave Type", 0, 0, 3));

    
    // Format
    textParameter.addListener(this, &ModularType::onTextChange);
    layout.add(textParameter.set("text", "hehehehehehehehehehehehehehehehehehehehehe"));
    
    columns.addListener(this, &ModularType::onColChange);
    layout.add(columns.set("Columns", 14, 1, 30));
    
    letterSpace.addListener(this, &ModularType::onLetterChange);
    layout.add(letterSpace.set("Letter Space", 50, 0, 100));
    
    lineSpace.addListener(this, &ModularType::onLineChange);
    layout.add(lineSpace.set("Line Space", 50, 0, 100));
    
    letterVariation.addListener(this, &ModularType::onLetterVariChange);
    layout.add(letterVariation.set("Letter Vary", 0, 0, 10));
    
    lineVariation.addListener(this, &ModularType::onLineVariChange);
    layout.add(lineVariation.set("Line Vary", 0, 0, 10));
    
    // add
    gui.setup(title);
    gui.add(layout);
    gui.add(xWave);
    gui.add(yWave);

}

void ModularType::onTextChange(string &text){
    paragraph.setText(text);
}

void ModularType::onColChange(int &col){
    format.setCol(col);
    paragraph.setFormat(format);
}

void ModularType::onLetterChange(int &space){
    format.setLetterSpace(space);
    paragraph.setFormat(format);
}

void ModularType::onLineChange(int &space){
    format.setLineSpace(space);
    paragraph.setFormat(format);
}

void ModularType::onLineVariChange(float &vari){
    paragraph.setLineVariation(vari);
}

void ModularType::onLetterVariChange(float &vari){
    paragraph.setLetterVariation(vari);
}

void ModularType::onXAmpChange(float &amp){
    paragraph.setXAmp(amp);
}

void ModularType::onYAmpChange(float &amp){
    paragraph.setYAmp(amp);
}

void ModularType::onXTypeChange(int &x){
    switch(x) {
        case 0:
            paragraph.setXWave(Paragraph::SIN);
            break;
        case 1:
            paragraph.setXWave(Paragraph::TRIANGLE);
            break;
        case 2:
            paragraph.setXWave(Paragraph::SQUARE);
            break;
        case 3:
            paragraph.setXWave(Paragraph::SAWTOOTH);
            break;
    }
}

void ModularType::onYTypeChange(int &x){
    switch(x) {
        case 0:
            paragraph.setYWave(Paragraph::SIN);
            break;
        case 1:
            paragraph.setYWave(Paragraph::TRIANGLE);
            break;
        case 2:
            paragraph.setYWave(Paragraph::SQUARE);
            break;
        case 3:
            paragraph.setYWave(Paragraph::SAWTOOTH);
            break;
    }
}
