#include "World.h"

cWorld::cWorld(cMenu* menu)
{
	std::cout << "World’s Function : Constructor performed" << std::endl;

	mMenu = menu;
}

cWorld::~cWorld()
{
	std::cout << "World’s Function : Destructor performed" << std::endl;
}

void cWorld::CompleteLevel()
{
	std::cout << "World’s Function : CompleteLevel performed" << std::endl;
}

void cWorld::ImportLevel()
{
	std::cout << "World’s Function : ImportLevel performed" << std::endl;

	//populate the enemies (random amount)
	for (int i = 0; i < 10; i++)
	{
		cEnemy enemy;
		enemys[i] = enemy;
	}
}
