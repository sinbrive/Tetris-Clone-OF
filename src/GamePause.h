#pragma once

#include "State.h"
#include "ofApp.h"


// the start screen
class GamePause : public State {

public:

	void setup();

	void update();

	void draw();

	void inputKey(int key);
};