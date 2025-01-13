#include "World.h"

void World::Init()
{
	StaticObject StaticObject1(0, 0);
	BreakableObject BreakableObject1(1, 1, 1);
	Mob Mob1(2, 2, 2, 2);
	Player Player(3, 3, 3, 3);

	entities.push_back(&StaticObject1);
	entities.push_back(&BreakableObject1);
	entities.push_back(&Mob1);
	entities.push_back(&Player);
}

void World::Step()
{
	for (Entity* entity : entities)
	{
		dynamic_cast<Mob*>(entity)->move();
	}
}
