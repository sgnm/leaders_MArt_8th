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
    float time = ofGetElapsedTimef();
    cam.setPosition(1000.0 * cos(time), 0, 1000.0 * sin(time));
    
    cam.lookAt(ofVec3f(0, 0, 0));
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    
    int hue = ofGetFrameNum() % 255; //hueには0~255の値が入る
    ofSetColor(ofColor::fromHsb(hue, 255, 255));
    for(int i = 0; i < 100; i++){
        box[i].draw();
        
        if(i != 0){
            ofVec3f pos1 = box[i-1].getPosition(); //ボックス1の座標を取得
            ofVec3f pos2 = box[i].getPosition(); //ボックス2の座標を取得
            ofLine(pos1, pos2); //1と2を線でつなぐ
        }
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
