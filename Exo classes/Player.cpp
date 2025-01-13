#include "Player.h"
#include <iostream>

Player::Player(float xPos, float yPos, float maxHealth, float xDir, float yDir) : Entity(xPos, yPos), Alive(maxHealth), AMovable(xDir, yDir, 10)
{
	std::cout << "Static Object just created at x = " << xPos << " and y = " << yPos << "with " << maxHealth << "life" << "with direction x = " << xDir << "and y = " << yDir << std::endl;
}

void Player::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	std::cout << "Mob just die" << std::endl;

}

void Player ::Move()
{
	std::cout << "Mob move to x = " << AMovable::GetDirX() << "and y =" << AMovable::GetDirY() << std::endl;
}

void Player::Attack(Alive* alive)
{
	alive->TakeDamage(10);
	std::cout << "Player just attacked" << std::endl;
}