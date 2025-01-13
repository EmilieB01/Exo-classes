#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float x, float y, float maxHealth) : Entity(x, y), Alive(maxHealth)
{
	std::cout << "Breakable Object just created at x = " << x << " and y = " << y << " with "<< maxHealth << " life" << std::endl;
}

void BreakableObject::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (Alive::GetHealth() == 0)
		std::cout << "Breakable Object just broke" << std::endl;
}	