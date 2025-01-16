#include "World.h"

void World::Init()
{
	Vector2 PPosition(0, 0);
	Vector2 SPosition(1, 1);
	Vector2 Position(5, 5);
	Vector2 Bposition(-5, -5);
	Vector2 Direction(1, 1);
	float speed = 1;
	float maxhealth = 10;
	StaticObject StaticObject1(SPosition);
	BreakableObject BreakableObject1(Bposition, 1);
	Mob Mob(Position, Direction, speed, maxhealth);
	Player Player(PPosition, Direction, speed, maxhealth);

	entities.push_back(&StaticObject1);
	entities.push_back(&BreakableObject1);
	entities.push_back(&Mob);
	entities.push_back(&Player);
}

void World::Step()
{

	for (Entity* entity : entities)
	{
		float x = 0;
		float y = 0;
		float xp = 0;
		float yp = 0;
		bool directionset = false;
		bool mobcoordset = false;
		if (dynamic_cast<BreakableObject*>(entity))
		{
			x = dynamic_cast<BreakableObject*>(entity)->getx();
			y = dynamic_cast<BreakableObject*>(entity)->gety();
			directionset = true;
		}
		if (directionset == true)
		{
			dynamic_cast<Mob*>(entity)->SetDirection(Vector2(x,y));
			dynamic_cast<Mob*>(entity)->Move();
			dynamic_cast
			xp = dynamic_cast<Mob*>(entity)->getx();
			yp = dynamic_cast<Mob*>(entity)->gety();
			mobcoordset = true;
		}
		if (mobcoordset)
		{
			dynamic_cast<Player*>(entity)->SetDirection(Vector2(xp, yp));
			dynamic_cast<Player*>(entity)->Move();
			dynamic_cast<Player*>(entity)->Attack(dynamic_cast<Mob*>(entity));
			mobcoordset = false;
		}
	}
}
