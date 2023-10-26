#include "World.h"

int main()
{
	cMenu mainMenu;

	cWorld world1(&mainMenu);
	cWorld world2(&mainMenu);
	cWorld world3(&mainMenu);

	mainMenu.SelectWorld();

	world1.ImportLevel();

	world1.CompleteLevel();

	int endWork;
	std::cin >> endWork;

	return 0;
}