#include "AMovable.h"

AMovable::AMovable(Vector2 Direction, float Speed) : mDirection(Direction), mSpeed(Speed)
{
}

void AMovable::SetDirection(Vector2 Direction)
{
	mDirection = Direction;
}

void AMovable::SetSpeed(float Speed)
{
	mSpeed = Speed;
}
