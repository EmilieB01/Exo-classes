#include "Vector2.h"
#include <cmath>

void normalize(float& x, float& y)
{
	float magnitude = std::sqrt(x * x + y * y);
	if (magnitude > 0)
	{
		x /= magnitude;
		y /= magnitude;
	}
}

Vector2::Vector2(float posX, float posY)
{
	normalize(posX, posY);
	mPosX = posX;
	mPosY = posY;
}


float Vector2::GetPosX()
{
	return mPosX;
}

float Vector2::GetPosY()
{
	return mPosY;
}

void Vector2::SetPosX(float posX)
{
	mPosX = posX;
}

void Vector2::SetPosY(float posY)
{
	mPosY = posY;
}

void Vector2::SetPosXY(float posX, float posY)
{
	mPosX = posX;
	mPosY = posY;
}