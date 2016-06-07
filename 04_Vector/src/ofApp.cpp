#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    // ライト周りの設定
    ofEnableDepthTest(); //深度テストを有効に
    light.enable(); //ライティングを有効に
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    
    for(int i = 0; i < boxes.size(); i++){
        boxes[i].draw();
    }
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a'){
        ofBoxPrimitive box; //一時的にボックスを用意
        
        int x = ofRandom(-1000, 1000);
        int y = ofRandom(-1000, 1000);
        int z = ofRandom(-1000, 1000);
        ofPoint pos = ofPoint(x, y, z); //一旦、posに格納しておく
        box.setPosition(pos);
        
        box.set(50);
        
        boxes.push_back(box); //一時的に用意したボックスを、別の領域「box」に追加
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
