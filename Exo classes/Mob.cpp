#include "Mob.h"
#include <iostream>

Mob::Mob(float xPos, float yPos, float maxHealth, float xDir, float yDir) : Entity(xPos, yPos), Alive(maxHealth), AMovable(xDir, yDir, 10)
{
	std::cout << "Mob just created at x = " << xPos << " and y = " << yPos << " with " << maxHealth << " life" << " with direction x = " << xDir << " and y = " <<  yDir << std::endl;
}

void Mob::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (Alive::GetHealth() == 0)
		std::cout << "Mob just die" << std::endl;

}

void Mob::Move()
{
	float newX = Entity::GetPosX() + AMovable::GetDirX() * AMovable::GetSpeed();
	float newY = Entity::GetPosY() + AMovable::GetDirY() * AMovable::GetSpeed();

	Entity::SetPos(newX, newY);
	std::cout << "Mob move to x = " << newX << " and y = " << newY << std::endl;
}