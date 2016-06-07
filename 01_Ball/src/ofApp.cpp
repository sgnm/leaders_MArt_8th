#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    x = 100;
    y = 100;
    
    xx = 5;
    yy = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + xx;
    y = y + yy;
    
    if(x > ofGetWidth() - 50){
        xx *= -1;
    }else if(x < 50){
        xx *= -1;
    }
    
    if(y > ofGetHeight() - 50){
        yy *= -1;
    }else if(y < 50){
        yy *= -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(x, y, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'a':
            xx *= 2;
            yy *= 2;
            break;
        case 'b':
            xx *= 0.5;
            yy *= 0.5;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
