#include "World.h"

World::~World()
{
    for (Entity* entity : entities) 
    {
        delete entity;
    }
    entities.clear();
}

void World::Init() 
{
    entities.push_back(new StaticObject(5.0f, 5.0f));
    entities.push_back(new BreakableObject(10.0f, 10.0f, 1.0f));
    entities.push_back(new Mob(15.0f, 15.0f, 20.0f, -1.0f, 0.0f));
    entities.push_back(new Player(0.0f, 0.0f, 10.0f, 1.0f, 1.0f));

    std::cout << "World initialized with 1 StaticObject, 1 BreakableObject, 1 Mob, and 1 Player.\n";
}

void World::Step() 
{
    BreakableObject* breakable = dynamic_cast<BreakableObject*>(entities[1]);
    Mob* mob = dynamic_cast<Mob*>(entities[2]);
    Player* player = dynamic_cast<Player*>(entities[3]);

    bool allMobsDead = !mob->IsAlive();
    bool allBreakablesDestroyed = !breakable->IsAlive();


    if (mob->IsAlive())
    {
        std::cout << "Mob moved towards BreakableObject.\n";
        mob->MoveTowards(breakable);
    }

    if (allMobsDead)
    {
        if (breakable->IsAlive())
        {
            if (player->DistanceTo(breakable) <= 1.0f)
            {                
                std::cout << "Player attacked BreakableObject.\n";
                player->Attack(breakable);
            }
            else
            {                
                std::cout << "Player moved towards BreakableObject.\n";
                player->MoveTowards(breakable);

            }
        }
    }
    else
    {
        if (player->DistanceTo(mob) <= 1.0f)
        {            
            std::cout << "Player attacked Mob.\n";
            player->Attack(mob);

        }
        else
        {
            std::cout << "Player moved towards Mob.\n";
            player->MoveTowards(mob);
        }
    }

    if (allMobsDead && allBreakablesDestroyed)
    {
        std::cout << "Simulation Finished.\n";
    }
}