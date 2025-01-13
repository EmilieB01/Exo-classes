#include "Vector2.h"

Vector2::Vector2(float posX, float posY)
{
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