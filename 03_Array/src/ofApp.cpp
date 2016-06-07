#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    // ボックスの設定
    for(int i = 0; i < 100; i++){
        int x = ofRandom(-1000, 1000);
        int y = ofRandom(-1000, 1000);
        int z = ofRandom(-1000, 1000);
        ofPoint pos = ofPoint(x, y, z); //一旦、変数posに格納しておく
        box[i].setPosition(pos); //ランダムな値が入った座標をセット
        
        box[i].set(50);
    }
    
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
    
    for(int i = 0; i < 100; i++){
        box[i].draw();
    }
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
