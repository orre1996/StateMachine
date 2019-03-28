#include "SecondState.h"

void SecondState::enter() {
	cout << "You entered the second state" << endl;
	counter = 0;
}

int SecondState::update() {
	cout << "Second state" << endl;
	counter++;
	if (counter >= 300) {
		return 4;
	}
	return 0;
}

void SecondState::exit() {
	cout << "Good bye, second state" << endl;
}
SecondState::SecondState()
{
}


SecondState::~SecondState()
{
}
