#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(float x, float y, float speed, float maxhealth);
	virtual void takeDamage(float damage) override;
	virtual void move(float x, float y, float speed) override;
	virtual void Attack(Alive* target, float damage) override;
};

