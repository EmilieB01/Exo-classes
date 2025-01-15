#include "Alive.h"

Alive::Alive(float maxHealth)
{
	mHealth = maxHealth;
	mMaxHealth = maxHealth;
}

float Alive::GetMaxHealth()
{
	return mMaxHealth;
}

float Alive::GetHealth()
{
	return mHealth;
}

void Alive::TakeDamage(float damage)
{
	mHealth -= damage;

	if (mHealth < 0)
		mHealth = 0;
}

bool Alive::IsAlive()
{
	if (mHealth == 0)
		return false;
	else
		return true;
}