//
//  Line.cpp
//  mySketch2
//
//  Created by William on 2020-10-13.
//

#include "Line.hpp"

Line::Line(){
    
}

Line::Line(string text, float lettVari, glm::vec3 origin, Format format){
    this->text = text;
    this->lettVari = lettVari;
    this->origin = origin;
    this->format = format;
    setupLetters();
}

void Line::update(float input, vector<shared_ptr<Waveform>>& waves) {
    for (int i = 0; i < letters.size(); i++) {
        glm::vec3 offset = getOffset(input + i * lettVari, waves);
        glm::vec3 rotate = getRotate(input + i * lettVari, waves);
        letters[i]->setOffset(offset);
        letters[i]->setRotate(rotate);
    }
}

void Line::draw() {
    for (int i = 0; i < letters.size(); i++) {
        letters[i]->draw();
    }
}

int Line::getWidth() {
    return text.length();
}

glm::vec3 Line::getOffset(float input, vector<shared_ptr<Waveform>>& waves) {
    glm::vec3 offset(waves[0]->getFX(input),waves[1]->getFX(input),waves[2]->getFX(input));
    return offset;
}

glm::vec3 Line::getRotate(float input, vector<shared_ptr<Waveform>>& waves) {
    glm::vec3 rotate(waves[0]->getDeriv(input),waves[1]->getDeriv(input),waves[2]->getDeriv(input));
    
    return rotate;
}

void Line::setupLetters(){
    letters.clear();
    for (int i = 0; i < text.length(); i++){
        string curr(1,text.at(i));
        glm::vec3 pos(origin.x + i * format.getLetterSpace(), origin.y, 0);
        unique_ptr<Letter> letter = unique_ptr<Letter>(new Letter(curr, format.getFont(), pos));
        letters.push_back(std::move(letter));
    }
}


