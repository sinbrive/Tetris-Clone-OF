#include "GameOver.h"

void GameOver::setup() {

}

void GameOver::update() {

}

void GameOver::draw() {
	State::getState(1)->draw();
	ofPushStyle();
	ofSetColor(0, 255, 0);
	ofDrawBitmapString("Game Over", 210, ofGetHeight() - 70);
	ofDrawBitmapString("Restart: F1", 210, ofGetHeight() - 50);
	ofPopStyle();
}

void GameOver::inputKey(int key) {
	if (key == OF_KEY_F1) {
		State::setState(1);
		State::getCurrent()->setup();
	}
};