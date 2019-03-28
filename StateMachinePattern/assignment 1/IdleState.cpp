#include "IdleState.h"

void IdleState::enter() {
	cout << "You entered IdleState" << endl;
	cout << "Which state would you like to go to?" << endl;
	cout << "Press 1 to enter the first state" << endl;
	cout << "Press 2 to enter the second state" << endl;
	cout << "Press 3 to enter the third state" << endl;
	cin >> choice;
}

int IdleState::update() {
	return choice;
}

void IdleState::exit() {
	cout << "Good bye, idle state" << endl;
}


IdleState::IdleState()
{
}


IdleState::~IdleState()
{
}
