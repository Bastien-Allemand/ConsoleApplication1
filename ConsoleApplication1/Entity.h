#pragma once
#include "Vector2.h"
class Entity
{
protected:
	Vector2 mPosition;
public:
	Entity(Vector2 Position);
	
	virtual float getx();
	
	virtual float gety();

	virtual void setposition(float x, float y);
};

