#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float x, float y, float maxHealth) : Entity(x, y), Alive(maxHealth)
{
	std::cout << "Static Object just created at x = " << x << " and y = " << y << "with "<< maxHealth << "life" << std::endl;
}

void BreakableObject::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	std::cout << "Breakable Object jsut broke" << std::endl;
}	