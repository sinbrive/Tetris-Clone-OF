#pragma once

#include "State.h"
#include "game.h"

// game over screen
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


};