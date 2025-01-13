#include "Mob.h"
#include <iostream>

Mob::Mob(float xPos, float yPos, float maxHealth, float xDir, float yDir) : Entity(xPos, yPos), Alive(maxHealth), AMovable(xDir, yDir, 10)
{
	std::cout << "Static Object just created at x = " << xPos << " and y = " << yPos << "with " << maxHealth << "life" << "with direction x = " << xDir << "and y = " <<  yDir << std::endl;
}

void Mob::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	std::cout << "Mob just die" << std::endl;

}

void Mob::Move()
{
	std::cout << "Mob move to x = " << AMovable::GetDirX() << "and y =" << AMovable::GetDirY() << std::endl;
}