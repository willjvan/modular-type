#ifndef Letter_hpp
#define Letter_hpp

#include <stdio.h>
#include "ofMain.h"

class Letter {
    public:
        Letter();
        Letter(string l, ofTrueTypeFont& font, glm::vec3 pos);
        void setOffset(glm::vec3 offset);
        void setRotate(glm::vec3 rotate);
        ofMesh getMesh();
        void draw();
    
    private:
        string l;
        glm::vec3 pos, offset;
        glm::vec3 rotate;
        ofTrueTypeFont font;
        ofVboMesh mesh;
    
};

#endif /* Letter_hpp */
