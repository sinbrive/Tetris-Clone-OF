#include "GameStart.h"


void GameStart::setup() {
	ofBackground(255);
}

void GameStart::update() {

}

void GameStart::draw() {

	ofBackground(100,100,200);

	ofSetColor(200, 200, 0);

	ofDrawBitmapString("C++ Tetris Game", 40, 50);
	ofSetColor(255, 255, 0);
	ofDrawBitmapString("LEFT and RIGHT for horizontal movement.", 30, 100);
	ofDrawBitmapString("DOWN to move down quickly,", 30, 120);
	ofDrawBitmapString("UP arrow for rotations.", 30, 140);
	ofDrawBitmapString("SPACE for dropping down.", 30, 160);
	ofDrawBitmapString("Pressing 'q' quits the game.", 30, 180);
	ofDrawBitmapString("Pressing 'p' pauses the game.", 30, 200);
	ofDrawBitmapString("Enter to start the game", 30, 250);
}

void GameStart::inputKey(int key) {

	if (key == OF_KEY_RETURN) {
		State::setState(State::statesVec[2]);
		State::getState()->setup();
		return;
	}
}