#include "Entity.h"
#include "Vector2.h"
Entity::Entity(float x, float y) : position(x,y){}
float Entity::getx()
{
	return position.getX();
}

float Entity::gety()
{
	return position.getY();
}

void Entity::setx(float x)
{
	position.setX(x);
}

void Entity::sety(float y)
{
	position.setY(y);
}
