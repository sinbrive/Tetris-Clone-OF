#include "State.h"

State* State::currentState = nullptr;

vector<State*> State::statesVec = { nullptr };

void State::setState(State* state) { currentState = state; }

State* State::getState() { return currentState; }
