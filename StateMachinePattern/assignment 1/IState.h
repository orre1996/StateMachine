#pragma once
#include <iostream>

using namespace std;
class IState
{

public:
	virtual void enter() = 0;
	virtual int update() = 0;
	virtual void exit() = 0;
	IState();
	~IState();
protected:
	int counter;
	int choice;
};