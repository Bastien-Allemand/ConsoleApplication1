#pragma once
#include "Alive.h"
class IAttacker : public Alive
{
public:
	virtual void Attack(Alive* target, float damage) = 0;
};

