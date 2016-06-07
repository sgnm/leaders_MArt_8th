//
//  CustomBox.cpp
//  05_Class
//
//  Created by Shin on 6/7/16.
//
//

#include "CustomBox.h"

void CustomBox::addBox(){
    ofBoxPrimitive box; //一時的にボックスを用意
    
    int x = ofRandom(-1000, 1000);
    int y = ofRandom(-1000, 1000);
    int z = ofRandom(-1000, 1000);
    ofPoint pos = ofPoint(x, y, z); //一旦、posに格納しておく
    box.setPosition(pos);
    
    box.set(50);
    
    boxes.push_back(box); //一時的に用意したボックスを、別の領域「box」に追加
}

void CustomBox::draw(){
    for(int i = 0; i < boxes.size(); i++){
        boxes[i].draw();
    }
}