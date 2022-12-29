#include "GamePause.h"

GamePause::GamePause() {
}

void GamePause::setup() {

}

void GamePause::update() {

}

void GamePause::draw() {
	ofApp::game.draw();
	ofPushStyle();
	ofSetColor(255, 0, 0);
	ofDrawBitmapString("Pause", 210, ofGetHeight() - 70);
	ofDrawBitmapString("Resume: 'p'", 210, ofGetHeight() - 50);
	ofPopStyle();
}

void GamePause::inputKey(int key) {
	if (key == 'p') {
		State::setState(&ofApp::game);
	}
};