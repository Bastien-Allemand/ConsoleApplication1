#include "iostream"
#include "Player.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Vector2.h"
#include "Mob.h"
int main()
{
	Vector2 PPosition(0, 0);
	Vector2 SPosition(1, 1);
	Vector2 Position(5, 5);
	Vector2 Bposition(-5,-5);
	Vector2 Direction(1,1);
	float speed = 1;
	float maxhealth = 10;
	StaticObject StaticObject1(SPosition);
	BreakableObject BreakableObject1(Bposition, 1);
	Mob Mob(Position, Direction, speed, maxhealth);
	Player Player(PPosition, Direction, speed, maxhealth);
	return 0;
}
