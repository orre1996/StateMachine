	#include "FirstState.h"



void FirstState::enter(){
	cout << "You entered the first state" << endl;
}

int FirstState::update(){
	cout << "First state" << endl;
	counter++;
	if (counter >= 300) {
		return 4;
	}
	return 0;
}

void FirstState::exit(){
	cout << "Good bye, first state" << endl;
}

FirstState::FirstState()
{
}


FirstState::~FirstState()
{
}
