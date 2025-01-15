#include "Player.h"
#include <iostream>

Player::Player(float xPos, float yPos, float maxHealth, float xDir, float yDir) : Entity(xPos, yPos), Alive(maxHealth), AMovable(xDir, yDir, 10)
{
	std::cout << "Player just created at x = " << xPos << " and y = " << yPos << " with " << maxHealth << " life" << " with direction x = " << xDir << " and y = " << yDir << std::endl;
}

void Player::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (Alive::GetHealth() == 0)
		std::cout << "Player just die" << std::endl;
}

void Player ::Move()
{
	float newX = Entity::GetPosX() + AMovable::GetDirX() * AMovable::GetSpeed();
	float newY = Entity::GetPosY() + AMovable::GetDirY() * AMovable::GetSpeed();

	Entity::SetPos(newX, newY);
	std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

void Player::Attack(Alive* alive)
{
	alive->TakeDamage(10);
}