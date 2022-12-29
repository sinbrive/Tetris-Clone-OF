#pragma once

#include "ofApp.h"
#include "State.h"

class GameOver : public State {

public:

	void setup();

	void update();

	void draw();

	void inputKey(int key);

};

