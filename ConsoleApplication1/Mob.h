#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float x, float y,float speed, float maxhealth);
	virtual void takeDamage(float damage) override;
	virtual void move(float x, float y,float speed) override;
};

