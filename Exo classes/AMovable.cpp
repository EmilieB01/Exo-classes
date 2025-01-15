#include "AMovable.h"
#include <cmath>


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

float AMovable::GetSpeed()
{
	return mSpeed;
}

void AMovable::MoveTowards(Entity* target)
{
	// Calcul de la direction
	float dx = target->GetPosX() - vect.GetPosX();
	float dy = target->GetPosY() - vect.GetPosY();

	// Normalisation pour obtenir un vecteur unitaire
	float magnitude = std::sqrt(dx * dx + dy * dy);
	if (magnitude > 0.0f) 
	{
		dx /= magnitude;
		dy /= magnitude;
	}

	// Mise à jour de la direction
	SetDirection(dx, dy);

	// Déplacement selon la vitesse
	float newX = vect.GetPosX() + GetDirX() * mSpeed;
	float newY = vect.GetPosY() + GetDirY() * mSpeed;

	vect.SetPosXY(newX, newY);
}