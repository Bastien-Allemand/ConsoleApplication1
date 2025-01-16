#include "BreakableObject.h"
#include <iostream>
BreakableObject::BreakableObject(Vector2 Position, float maxhealth) : Entity(Position), Alive(maxhealth)
{
	std::cout << "Breakable Object just created at x = " << Position.getX() << "and y = " << Position.getY() <<  "with" << maxhealth << std::endl;

}

void BreakableObject::takeDamage(float damage)
{	
	Alive::takeDamage(damage);
	std::cout << "Breakable Object just broke" << std::endl;
}
