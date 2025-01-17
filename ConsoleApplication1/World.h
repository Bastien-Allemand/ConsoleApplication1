#pragma once
#include "vector"
#include "Entity.h"
#include "StaticObject.h"
#include "Mob.h"
#include "Player.h"
#include "BreakableObject.h"
#include "Vector2.h"
#include "Alive.h"
#include "AMovable.h"
class World : public Entity
{
	std::vector<Entity*> entities;
public:
	void Init();
	bool Step();

};

