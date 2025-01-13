#pragma once
#include "Vector2.h"

class AMovable
{
	Vector2 vect;
	float mSpeed;

public:
	AMovable(float x, float y, float speed);

	virtual void SetDirection(float x, float y);
	virtual float GetDirX();
	virtual float GetDirY();
	virtual float GetSpeed();
	virtual void SetSpeed(float speed);
	virtual void Move() = 0;


};

