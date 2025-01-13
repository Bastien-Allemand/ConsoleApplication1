#include "Player.h"
#include <iostream>
Player::Player(float x, float y, float speed, float maxhealth) :Entity(x, y), Alive(maxhealth), AMovable(x,y,speed)
{}

void Player::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	std::cout << "“Player just died”" << std::endl;
}

void Player::move(float x, float y, float speed)
{
	AMovable::move(x, y, speed);
	std::cout << "Player moved to x = ici-la-position-x and y = ici-la-position-y" << std::endl;
}

void Player::Attack(Alive* target, float damage)
{
	target->takeDamage(10);
	std::cout << "Player just attacked" << std::endl;
}

