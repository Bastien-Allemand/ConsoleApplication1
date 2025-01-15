#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	mx = x;
	my = y;
}

float Vector2::getX()
{
	return mx;
}

float Vector2::getY()
{
	return my;
}

void Vector2::SetVector2(float x, float y)
{
	mx = x;
	my = y;
}
