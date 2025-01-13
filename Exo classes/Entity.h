#pragma once
#include "Vector2.h"

class Entity
{
	Vector2 mPos;

public:
	Entity(float x, float y);

	virtual Vector2 GetPos();
	virtual void SetPos(float xPos, float yPos);
};

	