//
//  Paragraph.cpp
//  mySketch2
//
//  Created by William on 2020-10-13.
//

#include "Paragraph.hpp"

Paragraph::Paragraph() {
    
}

Paragraph::Paragraph(std::string text, float lineVari, float lettVari,  vector<shared_ptr<Waveform>> waves, Format format) {
    this->text = text;
    this->lineVari = lineVari;
    this->lettVari = lettVari;
    this->waves = waves;
    cout << waves.size() << endl;
    this->format = format;
    setupLines();

}

void Paragraph::update(float input) {
    for (int i = 0; i < lines.size(); i++) {
        lines[i]->update(input + i * lineVari, waves);
    }
}

void Paragraph::draw() {
    for (int i = 0; i < lines.size(); i++) {
        lines[i]->draw();
    }
}

void Paragraph::setLineVariation(float &vari) {
    this->lineVari = vari;
    setupLines();
}

void Paragraph::setLetterVariation(float &vari) {
    this->lettVari = vari;
    setupLines();
}

void Paragraph::setXAmp(float &amp) {
    this->waves[0]->setAmplitude(amp);
}

void Paragraph::setYAmp(float &amp) {
    this->waves[1]->setAmplitude(amp);
}

void Paragraph::setXWave(waveType wave) {
    float amp = waves[0]->getAmplitude();
    switch (wave) {
        case SIN:
            waves[0] = shared_ptr<Waveform>(new SinWave(amp));
            break;
        case TRIANGLE:
            waves[0] = shared_ptr<Waveform>(new TriangleWave(amp));
            break;
        case SQUARE:
            break;
        case SAWTOOTH:
            break;
    }
}

void Paragraph::setYWave(waveType wave) {
    float amp = waves[1]->getAmplitude();
    switch (wave) {
        case SIN:
            waves[1] = shared_ptr<Waveform>(new SinWave(amp));
            break;
        case TRIANGLE:
            waves[1] = shared_ptr<Waveform>(new TriangleWave(amp));
            break;
        case SQUARE:
            break;
        case SAWTOOTH:
            break;
    }
}

void Paragraph::setText(string &text) {
    this->text = text;
    setupLines();
}

void Paragraph::setFormat(Format format) {
    this->format = format;
    setupLines();
}

void Paragraph::setupLines() {
    lines.clear();
    vector<string> words = getStrings();
    for (int i = 0; i < words.size(); i++) {
        glm::vec3 origin(0, i * format.getLineSpace(), 0);
        unique_ptr<Line> line(new Line(words[i], lettVari, origin, format));
        lines.push_back(std::move(line));
    }
}

vector<string> Paragraph::getStrings() {
    int colCount = 0;
    vector<string> strings;
    string word;
    for (int i = 0; i < text.length(); i++) {
        if (colCount == format.getCol()) {
            colCount = 0;
            strings.push_back(word);
            word = "";
        }
        word += text.at(i);
        colCount++;
        
        if (i == text.length() - 1) {
            strings.push_back(word);
        }
    }
    return strings;
}

int Paragraph::getWidth() {
    return (lines[0]->getWidth()-1)*format.getLetterSpace();
}

int Paragraph::getHeight() {
    return (lines.size()-1)*format.getLineSpace();
}

