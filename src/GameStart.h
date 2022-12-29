#pragma once


#include "State.h"
#include "ofApp.h"


// the start screen
class GameStart : public State {

public:

	GameStart();

	void setup();

	void update();

	void draw();

	void inputKey(int key);
};