#include "Entity.h"
#include <cmath>

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

float Entity::DistanceTo(Entity* other)
{
    float dx = mPos.GetPosX() - other->mPos.GetPosX();
    float dy = mPos.GetPosY() - other->mPos.GetPosY();
    return std::sqrt(dx * dx + dy * dy);
}