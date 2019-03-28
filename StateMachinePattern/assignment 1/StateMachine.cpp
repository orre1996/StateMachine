#include "StateMachine.h"


void StateMachine::changestate(IState& newState) {
	is->exit();
	is = &newState;
	is->enter();
}
void StateMachine::update() {
	is->update();
	if (is->update() >= 4) {
		changestate(Idle);
	}
	else if (is->update() == 1) {
		changestate(fs);
	}
	else if (is->update() == 2) {
		changestate(ss);
	}
	else if (is->update() == 3) {
		changestate(ts);
	}
}

StateMachine::StateMachine() : is{&Idle} {
	is->enter();
}


StateMachine::~StateMachine()
{
}
