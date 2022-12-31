#pragma once

#include "ofApp.h"
#include "State.h"

// the game over screen
class GameOver : public State {

public:

	void setup();

	void update();

	void draw();

	void inputKey(int key);

};

