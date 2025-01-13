#pragma once
#include "Vector2.h"
class Entity
{
	Vector2 position;
public:
	Entity(float x, float y);
	
	virtual float getx();
	
	virtual float gety();
	
	virtual void setx(float x);

	virtual void sety(float y);
};

