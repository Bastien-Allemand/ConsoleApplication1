#include "iostream"
#include "Player.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Vector2.h"
#include "Mob.h"
int main()
{
	Vector2 PPosition(0, 0);
	Vector2 Direction(0, 0);
	float speed = 1;
	float maxhealth = 10;
	StaticObject StaticObject1(0, 0);
	BreakableObject BreakableObject1(1, 1, 1);
	Mob Mob(Position, Direction, speed, maxhealth);
	Player Player(PPosition, Direction, speed, maxhealth);
	return 0;
}
