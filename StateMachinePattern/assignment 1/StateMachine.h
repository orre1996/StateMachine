#pragma once
#include <iostream>
#include "FirstState.h"
#include "SecondState.h"
#include "ThirdState.h"
#include "IState.h"
#include "IdleState.h"
using namespace std;
class StateMachine
{
public:
	bool StartTest = true;
	IState* is;
	FirstState fs;
	SecondState ss;
	ThirdState ts;
	IdleState Idle;
	void changestate(IState& newState);
	void update();
	StateMachine();
	~StateMachine();
protected:
	int choice;
};

