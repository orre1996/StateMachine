#pragma once
#include "IState.h"
class ThirdState : public IState

{
public:
	void enter();
	int update();
	void exit();
	
	ThirdState();
	~ThirdState();
};

