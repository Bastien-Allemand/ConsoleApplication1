#include "Entity.h"
#include "Vector2.h"
Entity::Entity(Vector2 Position) : position(Position)
{
}
float Entity::getx()
{
	return position.getX();
}

float Entity::gety()
{
	return position.getY();
}

void Entity::setposition(float x, float y)
{
	position.SetVector2(x, y);
}
