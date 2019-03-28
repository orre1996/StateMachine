#pragma once
#include <iostream>
#include "IState.h"
#include "StateMachine.h"
using namespace std;
class Menu
	
{
public:
	bool GameStart = true;
	void menu();
	StateMachine sm;
	Menu();
	~Menu();
private:
	int choice;
};

