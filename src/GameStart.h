#pragma once


#include "State.h"
#include "game.h"

// the start screen
class GameStart : public State {

private:
	

public:


	GameStart() {
		
	}

	void setup() {
		ofBackground(255);
	}

	void update() {

	}

	void draw() {
		ofSetColor(0);
		ofDrawBitmapString("start: click to begin", 6, 12);

		//game.displayGrid();
		//game.displaySideBoard();
		ofSetColor(255, 100, 100);

		ofDrawBitmapString("LEFT and RIGHT for horizontal movement.", 30, 100);
		ofDrawBitmapString("DOWN to move down quickly,", 30, 120);
		ofDrawBitmapString("UP arrow for rotations.", 30, 140);
		ofDrawBitmapString("SPACE for dropping down.", 30, 160);
		ofDrawBitmapString("Pressing 'q' quits the game.", 30, 180);
		ofDrawBitmapString("Pressing 'p' pauses the game.", 30, 200);
		ofDrawBitmapString("Enter to start the game", 30, 250);
	}

	void inputKey(int key) {};
};