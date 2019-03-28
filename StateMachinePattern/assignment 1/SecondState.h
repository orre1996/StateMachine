#pragma once
#include "IState.h"
class SecondState : public IState
{
public:
	void enter();
	int update();
	void exit();

	SecondState();
	~SecondState();
};

