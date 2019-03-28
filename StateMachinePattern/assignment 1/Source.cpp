#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Menu.h"
#include "IdleState.h"
#include "StateMachine.h"
#include "IState.h"

using namespace std;
int main(int argc, char* argv[]) {
	try {
	    Menu game;
		game.menu();
	}
	catch (const runtime_error& e) {
		cout << e.what() << endl;
	}
	catch (...) {
	}
	return 0;
}