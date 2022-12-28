#include "ofApp.h"


/*State* ofApp::gameStart= new GameStart();
State* ofApp::gameOver= new GameOver();
State* ofApp::game = new Game();
*/

State* ofApp::gameOver = new GameOver();

//--------------------------------------------------------------
void ofApp::setup() {

	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetWindowTitle("Tetris game");

	ofSetRectMode(OF_RECTMODE_CENTER);

	ofSetFrameRate(60);

	State::setState(gameStart);

	State::getState()->setup(); 
}

//----------------------------------
void ofApp::draw() {
	State::getState()->draw();
}

//----------------------------------
void ofApp::update() {		
	State::getState()->update();
	
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	if (State::getState() == game) {
		State::getState()->inputKey(key);
		return;
	}

	if (key == OF_KEY_RETURN) {
		State::setState(game); 
		State::getState()->setup();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
