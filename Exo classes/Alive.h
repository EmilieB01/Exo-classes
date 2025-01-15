#pragma once
class Alive
{
	float mMaxHealth;
	float mHealth;

public :
	Alive(float maxHealth);

	virtual float GetMaxHealth();
	virtual float GetHealth();
	virtual void TakeDamage(float damage);
	virtual bool IsAlive();
};

