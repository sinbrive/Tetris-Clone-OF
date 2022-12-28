#include "State.h"

State* State::currentState = nullptr;

void State::setState(State* state) { currentState = state; }

State* State::getState() { return currentState; }
