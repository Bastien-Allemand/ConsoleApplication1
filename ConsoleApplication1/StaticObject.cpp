#include "StaticObject.h"
#include <iostream>
StaticObject::StaticObject(float x, float y) : Entity(x, y)
{
	std::cout << "Static Object just created at x = ici - la - position - x and y = ici - la - position - y" << std::endl;
	setx(x);
	sety(y);
}
