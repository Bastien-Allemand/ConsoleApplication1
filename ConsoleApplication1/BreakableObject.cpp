#include "BreakableObject.h"
#include <iostream>
BreakableObject::BreakableObject(float x, float y, float maxhealth) : Entity(x, y), Alive(maxhealth)
{
	std::cout << "Breakable Object just created at x = " << x << "and y = " << y <<  "with" << maxhealth << std::endl;

}

void BreakableObject::takeDamage(float damage)
{	
	Alive::takeDamage(damage);
	std::cout << "Breakable Object just broke" << std::endl;
}
