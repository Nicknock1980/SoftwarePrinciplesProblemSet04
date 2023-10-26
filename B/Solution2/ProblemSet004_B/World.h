#pragma once
#include "Menu.h"
#include "Player.h"
#include "Enemy.h"

class cWorld
{
private:
	cMenu* mMenu = nullptr;
	std::string mLevelLocation;

	cPlayer player;
	cEnemy enemys[];


public:
	cWorld(cMenu* menu);
	~cWorld();

	void CompleteLevel();
	void ImportLevel();
};

