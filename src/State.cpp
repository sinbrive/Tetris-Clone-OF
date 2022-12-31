#include "State.h"

State* State::currentState;

vector<State*> State::statesVec;

int State::addState(State* state) {
	statesVec.push_back(state);
	return statesVec.size() - 1;
}



void State::setState(int n) { 
	currentState = statesVec[n];
}

State* State::getState(int n) {
	return statesVec[n];
}

State* State::getCurrent() { 
	return currentState; 
}
