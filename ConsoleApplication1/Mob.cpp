#include "Mob.h"
#include <iostream>

Mob::Mob(Vector2 Position,Vector2 Direction, float speed, float maxhealth) : AMovable(Direction, speed), Alive(maxhealth), Entity(Position)
{
	std::cout << "Mob just created at x = "<<  Position.getX() << " and y = "<< Position.getY() << " with "<< maxhealth <<
		" life with direction x = " << Direction.getX() << " and y = " << Direction.getY() << std::endl;
}

void Mob::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	std::cout << "Mob just die" << std::endl;

}

void Mob::Move()
{
	AMovable::Move();
	
	std::cout << "Mob move to x = "<<  << " and y = " << y << std::endl;
}
