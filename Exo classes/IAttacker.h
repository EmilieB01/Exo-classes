#pragma once
#include "Alive.h"
class IAttacker
{

public:
	virtual void Attack(Alive* alive) = 0;
};

