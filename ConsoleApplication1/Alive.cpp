#include "Alive.h"

Alive::Alive(float maxhealth)
{
	mmaxhealth = maxhealth;
	mhealth = maxhealth;
}

float Alive::getMaxHealth()
{
	return mmaxhealth;
}

float Alive::getHealth()
{
	return mhealth;
}

void Alive::takeDamage(float damage)
{
	mhealth -= damage;
	if (mhealth < 0)
	{
		mhealth = 0;
	}
}
