#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(Vector2 position,Vector2 Direction,float speed, float maxhealth);

	virtual void takeDamage(float damage) override;
	virtual void Move() override;
};

