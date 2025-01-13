#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable	
{
public:
	Mob(float xPos, float yPos, float maxHealth, float xDir, float yDir);

	void TakeDamage(float damage) override;
	void Move()override;
};

