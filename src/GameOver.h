#pragma once


//#include "game.h"
#include "ofApp.h"
#include "State.h"

class GameOver : public State {

public:

	GameOver();

	void setup();

	void update();

	void draw();

	void inputKey(int key);

};

