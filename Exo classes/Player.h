#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{

public:
	Player(float xPos, float yPos, float maxHealth, float xDir, float yDir);

	void TakeDamage(float damage) override;
	void Move() override;
	void Attack(Alive* alive) override;
};

