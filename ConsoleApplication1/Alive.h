#pragma once
class Alive
{
	float mMaxhealth;
	float mHealth;
public:
	Alive(float Maxhealth);
	virtual float getMaxHealth();
	virtual float getHealth();
	virtual void takeDamage(float damage);
};
//Elle doit stocker dans un float le maximum de vie.
//Elle doit stocker dans un float la vie actuel.
//Elle doit avoir un constructeur pour set la vie.
//Elle doit avoir des fonctions membres public virtuel pour :
//Récupérer le maximum de vie.
//Récupérer la vie actuel.
//Recevoir des dégâts / perdre de la vie.


