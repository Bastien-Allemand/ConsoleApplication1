#pragma once
#include "Entity.h"
#include "Alive.h"
class BreakableObject : public Entity, public Alive
{
public:
	BreakableObject(Vector2 Position,float maxhealth);
	virtual void takeDamage(float damage) override;
};

