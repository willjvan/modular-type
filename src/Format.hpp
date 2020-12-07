#ifndef Format_hpp
#define Format_hpp

#include <stdio.h>
#include "ofMain.h"

class Format {
    public:
        Format();
        Format(int col, int letterSpace, int lineSpace, ofTrueTypeFont& font);
        int getCol();
        int getLetterSpace();
        int getLineSpace();
        ofTrueTypeFont& getFont();
        void setCol(int col);
        void setLetterSpace(int space);
        void setLineSpace(int space);
    
    private:
        int col, letterSpace, lineSpace;
        ofTrueTypeFont font;
};

#endif 
