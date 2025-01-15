#include "Alive.h"

Alive::Alive(float maxhealth)
{
	mMaxhealth = maxhealth;
	mHealth = maxhealth;
}

float Alive::getMaxHealth()
{
	return mMaxhealth;
}

float Alive::getHealth()
{
	return mHealth;
}

void Alive::takeDamage(float damage)
{
	mHealth -= damage;
	if (mHealth <= 0)
	{
		mHealth = 0;
	}
}
