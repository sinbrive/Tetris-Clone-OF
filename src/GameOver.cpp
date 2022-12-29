#include "GameOver.h"

void GameOver::setup() {

}

void GameOver::update() {

}

void GameOver::draw() {
	State::statesVec[2]->draw();
	ofPushStyle();
	ofSetColor(0, 255, 0);
	ofDrawBitmapString("Game Over", 210, ofGetHeight() - 70);
	ofDrawBitmapString("Restart: F1", 210, ofGetHeight() - 50);
	ofPopStyle();
}

void GameOver::inputKey(int key) {
	if (key == OF_KEY_F1) {
		State::setState(State::statesVec[2]);
		State::getState()->setup();
	}
};