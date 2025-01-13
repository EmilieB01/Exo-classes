#include "AMovable.h"

AMovable::AMovable(float x, float y, float speed) : vect(x, y)
{
	mSpeed = speed;
}

void AMovable::SetDirection(float x, float y)
{
	vect.SetPosXY(x, y);
}

void AMovable::SetSpeed(float speed)
{
	mSpeed = speed;
}

float AMovable::GetDirX()
{
	return vect.GetPosX();
}

float AMovable::GetDirY()
{
	return vect.GetPosY();
}