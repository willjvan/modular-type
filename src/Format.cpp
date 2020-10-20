#include "Format.hpp"

Format::Format(){
    
}

Format::Format(int col, int letterSpace, int lineSpace, ofTrueTypeFont& font){
    this->col = col;
    this->letterSpace = letterSpace;
    this->lineSpace = lineSpace;
    this->font = font;
}

int Format::getCol(){
    return this->col;
}

int Format::getLetterSpace(){
    return this->letterSpace;
}

int Format::getLineSpace(){
    return this->lineSpace;
}

ofTrueTypeFont& Format::getFont(){
    return this->font;
}

void Format::setCol(int col){
    this->col = col;
}

void Format::setLetterSpace(int space){
    this->letterSpace = space;
}

void Format::setLineSpace(int space){
    this->lineSpace = space;
}
