#include "Player.h"
#include <iostream>
Player::Player(Vector2 Position,Vector2 Direction, float speed, float maxhealth) : 
	Entity(Position), Alive(maxhealth), AMovable(Direction, speed)
{
	std::cout << "Player just created at x = " << Position.getX() << " and y = " << Position.getY() << " with " << maxhealth <<
		" life with direction x = " << Direction.getX() << " and y = " << Direction.getY() << std::endl;
}

void Player::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	std::cout << "“Player just died”" << std::endl;
}

void Player::Move()
{
	AMovable::Move();
	mPosition.SetVector2(mPosition.getX() + mDirection.getX() * mSpeed, mPosition.getY() + mDirection.getY() * mSpeed);
	std::cout << "Player moved to x = "<< mPosition.getX() << " and y = " << mPosition.getY() << std::endl;
}

void Player::Attack(Alive* target)
{
	target->takeDamage(10);
	std::cout << "Player just attacked" << std::endl;
}

