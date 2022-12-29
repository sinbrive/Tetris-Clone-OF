#include "ofApp.h"

//State& ofApp::gameStart=GameStart();
//
//State& ofApp::game=Game();
//
//State& ofApp::gameOver = GameOver();
//
//State& ofApp::gamePause = GamePause();


//--------------------------------------------------------------
void ofApp::setup() {

	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetWindowTitle("Tetris game");

	ofSetRectMode(OF_RECTMODE_CENTER);

	ofSetFrameRate(60);

	gameStart = new GameStart();
	game = new Game();
	gamePause = new GamePause();
	gameOver = new GameOver();



	int n0 = State::addState(gameStart);  // return 0
	State::addState(game);		 // return  1
	State::addState(gamePause);
	State::addState(gameOver);
	
	State::setState(0);

	State::getCurrent()->setup(); 
}

//----------------------------------
void ofApp::draw() {
	State::getCurrent()->draw();
}

//----------------------------------
void ofApp::update() {		
	State::getCurrent()->update();
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {  

	if (key == 'q') ofExit();

	State::getCurrent()->inputKey(key);
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
