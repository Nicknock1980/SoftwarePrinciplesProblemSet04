#include "Enemy.h"

cEnemy::cEnemy()
{
	std::cout << "Enemy’s Function : Constructor performed" << std::endl;
}

cEnemy::~cEnemy()
{
	std::cout << "Enemy’s Function : Destructor performed" << std::endl;
}

void cEnemy::Move()
{
	std::cout << "Enemy’s Function : Move performed" << std::endl;
}
