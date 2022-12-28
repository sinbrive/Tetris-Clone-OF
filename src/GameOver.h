#pragma once

#include "State.h"
#include "game.h"


class GameOver : public State {


public:
	

	GameOver() {
		
	}


	void setup() {

	}

	void update() {

	}

	void draw() {
		ofSetColor(255);
		ofDrawBitmapString("game over: ENTER to restart", 6, 12);
	}

	void inputKey(int key) {};

};