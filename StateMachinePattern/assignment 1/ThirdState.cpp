#include "ThirdState.h"

void ThirdState::enter() {
	cout << "You entered the third state" << endl;
	counter = 0;
}

int ThirdState::update() {
	cout << "Third state" << endl;
	counter++;
	if (counter >= 300) {
		return 4;
	}
	return 0;
}

void ThirdState::exit() {
	cout << "Good bye, third state" << endl;
}

ThirdState::ThirdState()
{
}


ThirdState::~ThirdState()
{
}
