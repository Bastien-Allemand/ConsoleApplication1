#pragma once
class Alive
{
	float mmaxhealth;
	float mhealth;
public:
	Alive(float maxhealth);
	virtual float getMaxHealth();
	virtual float getHealth();
	virtual void takeDamage(float damage);
};

