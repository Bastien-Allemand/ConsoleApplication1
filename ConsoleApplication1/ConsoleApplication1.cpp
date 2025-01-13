#include "iostream"
#include "Player.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
int main()
{
	Player player(0,0,0,100);
	StaticObject tree(1, 1);
	BreakableObject pot(2, 2, 50);
	Mob mob(3,3,3, 200);
	return 0;
}
