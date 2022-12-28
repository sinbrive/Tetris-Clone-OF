#pragma once

#include "State.h"
#include "game.h"


class GameOver : public State {


private:
	

public:
	

	GameOver() {
		
	}


	void setup() {

	}

	void update() {

	}

	void draw() {
		//game.displayGrid();
		ofSetColor(255);
		ofDrawBitmapString("game over: ENTER to restart", 6, 12);
	}

	void inputKey(int key) {};

};