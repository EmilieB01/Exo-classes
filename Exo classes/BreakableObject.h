#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
public:
	BreakableObject(float x, float y, float maxHealth);

	void TakeDamage(float damage) override;
};

