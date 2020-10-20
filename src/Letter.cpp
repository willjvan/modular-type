#include "Letter.hpp"

Letter::Letter(){
    
}

Letter::Letter(string l, ofTrueTypeFont& font, glm::vec3 pos){
    this->l = l;
    this->font = font;
    this->pos = pos;
    this->offset = glm::vec3(0, 0, 0);
    mesh = font.getStringMesh(l, 0, 0);
}

void Letter::setOffset(glm::vec3 offset) {
    this->offset = offset;
}

void Letter::setRotate(glm::vec3 rotate) {
    this->rotate = rotate;
}

ofMesh Letter::getMesh() {
//    ofMesh ret = mesh;
//    for (int i = 0; i < ret.getNumVertices(); i++) {
//        ret.setVertex(i, ret.getVertex(i) + offset + pos);
//    }
//    return ret;
}


void Letter::draw() {
    ofPushMatrix();
    ofTranslate(pos.x + offset.x, pos.y + offset.y);
    ofRotate(rotate.y);
    font.getFontTexture().bind();
    mesh.draw();
    font.getFontTexture().unbind();
    ofPopMatrix();
}
