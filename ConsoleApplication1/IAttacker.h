#pragma once
#include "Alive.h"
class IAttacker
{
public:
	virtual void Attack(Alive* target, float damage) = 0;
};

