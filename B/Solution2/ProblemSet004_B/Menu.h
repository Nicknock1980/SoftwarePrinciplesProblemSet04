#pragma once
#include "UI.h"

class cMenu
{
private:
	cUI mUI;
public:
	cMenu();
	~cMenu();

	void SelectWorld();
	void DisplayGameScreen();
	void PauseGame();
};

