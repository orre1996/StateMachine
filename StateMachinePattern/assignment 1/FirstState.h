#pragma once
#include "IState.h"
class FirstState : public IState
{
public:
	void enter();
	int update();
	void exit();
	

	FirstState();
	~FirstState();
};

