#include "AMovable.h"

AMovable::AMovable(float x, float y, float speed) : position(x, y)
{
	velocity = speed;
}

void AMovable::setx(float x)
{
	position.setX(x);
}

void AMovable::sety(float y)
{
	position.setY(y);

}

void AMovable::setSpeed(float speed)
{
	velocity = speed;
}

Vector2 AMovable::move(float x, float y, float speed)
{
	if (position.getX() < x)
	{
		position.setX(x);
	}

}
