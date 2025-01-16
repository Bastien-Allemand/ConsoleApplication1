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
	mPosition.SetVector2(mPosition.getX() + mDirection.getX() * mSpeed, mPosition.getY() + mDirection.getY() * mSpeed);


	std::cout << "Mob move to x = "<< mDirection.getX() << " and y = " << mDirection.getY() << std::endl;
}
