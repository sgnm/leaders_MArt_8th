//
//  CustomBox.h
//  05_Class
//
//  Created by Shin on 6/7/16.
//
//

#ifndef ___5_Class__CustomBox__
#define ___5_Class__CustomBox__

#include "ofMain.h"

class CustomBox{
public:
    void addBox();
    void draw();
private:
    vector<ofBoxPrimitive> boxes; //ボックス型が入るvectorを用意
};

#endif /* defined(___5_Class__CustomBox__) */
