#pragma once
#include "vector"
#include "Entity.h"
#include "StaticObject.h"
#include "Mob.h"
#include "Player.h"
#include "BreakableObject.h"
class World : public Entity
{
	std::vector<Entity*> entities;
public:
	void Init();
	void Step();

};

