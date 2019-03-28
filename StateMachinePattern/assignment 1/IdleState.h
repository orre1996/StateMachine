#pragma once
#include "IState.h"
class IdleState : public IState
{
public:
	void enter();
	int update();
	void exit();
	IdleState();
	~IdleState();
};

