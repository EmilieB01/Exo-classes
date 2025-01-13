#include "Entity.h"

Entity::Entity(float x, float y) : mPos(x, y)
{
}

Vector2 Entity::GetPos()
{
	return mPos;
}

void Entity::SetPos(float x, float y)
{
	mPos.SetPosXY(x, y);
}