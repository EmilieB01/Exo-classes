#pragma once
class Vector2
{
	float mPosX;
	float mPosY;

public:
	Vector2(float posX, float posY);

	float GetPosX();
	float GetPosY();

	void SetPosX(float posX);
	void SetPosY(float posY);
	void SetPosXY(float posX, float posY);
};

