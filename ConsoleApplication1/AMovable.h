#pragma once
#include "Vector2.h"
class AMovable
{
	Vector2 mDirection;
	float mSpeed;
public:
	AMovable(Vector2 Direction, float Speed);
	virtual void SetDirection(Vector2 Direction);
	virtual void SetSpeed(float Speed);
	virtual void Move() = 0;
};

