#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup() {

	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetWindowTitle("Tetris game");

	ofSetRectMode(OF_RECTMODE_CENTER);

	ofSetFrameRate(60);

	state = &start;

	state->setup(); 
}

//----------------------------------
void ofApp::draw() {
	state->draw();
}

//----------------------------------
void ofApp::update() {		
	if (state != &over)
		if (Game::game_over) {
		state = &over;
		state->setup();
		return;
	}
	state->update();
	
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	if (state == &game) {
		game.inputKey(key);
		return;
	}

	if (key == OF_KEY_RETURN) {
		state = &game; // go to start screen
		state->setup();
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
