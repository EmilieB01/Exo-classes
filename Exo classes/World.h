#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
#include "Mob.h"
#include "BreakableObject.h"
#include "Player.h"
#include "StaticObject.h"
#include "Alive.h"

class World
{
	std::vector<Entity*> entities;

public :
    ~World(); 
    
    void Init();
    void Step();
};

