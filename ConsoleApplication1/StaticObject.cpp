#include "StaticObject.h"
#include <iostream>
StaticObject::StaticObject(Vector2 Position) : Entity(Position)
{

	std::cout << "Static Object just created at x = " << Position.getX() << " and y = " << Position.getY() << std::endl;
}
