#pragma once
#include "Vector2.h"
class AMovable
{
	Vector2 position;
	float velocity;
public:
	AMovable(float x, float y,float speed);
	virtual void setx(float x);
	virtual void sety(float y);
	virtual void setSpeed(float speed);
	virtual Vector2 move(float x, float y,float speed);
};

