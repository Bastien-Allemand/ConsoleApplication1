#include "Entity.h"
#include "Vector2.h"
Entity::Entity(Vector2 Position) : mPosition(Position)
{
}
float Entity::getx()
{
	return mPosition.getX();
}

float Entity::gety()
{
	return mPosition.getY();
}

void Entity::setposition(float x, float y)
{
	mPosition.SetVector2(x, y);
}
