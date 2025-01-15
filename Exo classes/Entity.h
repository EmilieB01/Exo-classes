#pragma once
#include "Vector2.h"

class Entity
{
	Vector2 mPos;

public:
	Entity(float x, float y);

	virtual Vector2 GetPos();
	virtual float GetPosX();
	virtual float GetPosY();
	virtual void SetPos(float xPos, float yPos);
	virtual float DistanceTo(Entity* other);
};

	