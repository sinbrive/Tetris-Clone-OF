#pragma once
#include "ofMain.h"

// credit  : https://github.com/danomatika/CreativeCodingExamples/blob/master/GameState/src/State.h
// a base game state class,
// kind of like a mini Sketch
//
// function which can/should be overridden in a subclass
// *must* have the "virtual" keyword before their declaration
class State {

public:

private:
	static State* currentState;

public:

	virtual ~State() {};  // important definition

	static vector<State*> statesVec;

	static void setState(State*);
	static State* getState();

	// https://stackoverflow.com/a/3065223  (add =0 otherwise link error)
	virtual void setup() = 0;

	virtual void update() = 0;

	virtual void draw() = 0;

	virtual void inputKey(int key) = 0;
};