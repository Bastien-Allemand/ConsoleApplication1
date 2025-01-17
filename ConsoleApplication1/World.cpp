#include "World.h"
#include "iostream"
void World::Init()
{
	Vector2 PPosition(0, 0);
	Vector2 SPosition(1, 1);
	Vector2 Position(5, 5);
	Vector2 Bposition(-5, -5);
	Vector2 Direction(1, 1);
	float speed = 1;
	float maxhealth = 10;
	StaticObject StaticObject1(SPosition);
	BreakableObject BreakableObject1(Bposition, 1);
	Mob Mob(Position, Direction, speed, maxhealth);
	Player Player(PPosition, Direction, speed, maxhealth);

	entities.push_back(&StaticObject1);
	entities.push_back(&BreakableObject1);
	entities.push_back(&Mob);
	entities.push_back(&Player);
}

bool World::Step()
{
    std::vector<Mob*> mobs;
    std::vector<Player*> players;
    std::vector<BreakableObject*> bos;


    for (Entity* entity : entities) {
        if (Mob* m = dynamic_cast<Mob*>(entity)) {
            mobs.push_back(m);
        }
        if (Player* p = dynamic_cast<Player*>(entity)) {
            players.push_back(p);
        }
        if (BreakableObject* b = dynamic_cast<BreakableObject*>(entity)) {
            bos.push_back(b);
        }

    }

    bool finish = true;

    for (Mob* m : mobs) {
        if (m->getHealth() > 0) {
            finish = false;
            for (BreakableObject* b : bos) {
                if (b->getHealth() > 0) {
                    m->SetDirection(Vector2(b->getx() - m->getx(),b->gety() - m->gety()));
                    m->Move();
                    break;
                }
            }
        }
    }
    for (Player* p : players)
    {
        if (finish == false) 
        {
            for (Mob* m : mobs)
            {
                if (m->getHealth() > 0) 
                {
                    p->SetDirection(Vector2(m->getx() - p->getx(),m->gety()- p->gety()));
                    p->Move();
                    float d = (m->getx() - p->getx());
                    if (d <= 1.f) {
                        p->Attack(m);
                    }
                    break;
                }
            }
        }
        else {
            for (BreakableObject* b : bos) {
                if (b->getHealth() > 0) {
                    p->SetDirection(Vector2(b->getx() - p->getx(),b->gety() - p->gety()));
                    p->Move();
                    float d = (b->getx() - p->getx());
                    if (d <= 1.f) {
                        p->Attack(b);
                    }
                    break;
                }
            }
        }
    }
    for (BreakableObject* b : bos) {
        if (b->getHealth() > 0) {
            finish = false;
        }
    }

    if (finish) {
        std::cout << "Simulation Finished" << std::endl;
    }

    return finish;
}