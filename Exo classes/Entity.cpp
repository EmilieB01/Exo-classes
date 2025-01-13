#include "Entity.h"

Entity::Entity(float x, float y) : mPos(x, y)
{
}

Vector2 Entity::GetPos()
{
	return mPos;
}

float Entity::GetPosX()
{
    return mPos.GetPosX();
}

float Entity::GetPosY()
{
    return mPos.GetPosY();
}

void Entity::SetPos(float x, float y)
{
	mPos.SetPosXY(x, y);
}