#pragma once
#include "ofMain.h"

// thanks to danomatika

class State {

public:

private:
	static State* currentState;
	static vector<State*> statesVec;

public:

	virtual ~State() {};  // important definition

	enum {START=0, GAME, PAUSE, OVER};
	
	static void State::setState(int n);
	static int addState(State*);
	static State* getCurrent();
	static State* getState(int n);

	// https://stackoverflow.com/a/3065223  (add '=0' otherwise link error)
	virtual void setup() = 0;

	virtual void update() = 0;

	virtual void draw() = 0;

	virtual void inputKey(int key) = 0;
};