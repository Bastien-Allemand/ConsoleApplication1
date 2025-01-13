#include "Mob.h"
#include <iostream>

Mob::Mob(float x, float y, float speed, float maxhealth) : AMovable(x, y, speed), Alive(maxhealth), Entity(x, y)
{
	std::cout << "Mob just created at x = "<<  x << " and y = "<< y << " with "<< maxhealth << " life with direction x = ici-la-direction-x and y = ici-la-direction-y" << std::endl;
}

void Mob::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	std::cout << "Mob just die" << std::endl;

}

void Mob::move(float x, float y, float speed)
{
	AMovable::move(x, y, speed);
	std::cout << "Mob move to x = ici-la-position-x and y = ici-la-position-y" << std::endl;
}
