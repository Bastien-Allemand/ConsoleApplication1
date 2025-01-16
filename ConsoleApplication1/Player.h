#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(Vector2 Position, Vector2 Direction, float speed, float maxhealth);
	virtual void takeDamage(float damage) override;
	virtual void Move() override;
	virtual void Attack(Alive* target) override;
};

