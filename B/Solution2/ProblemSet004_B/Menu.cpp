#include "Menu.h"

cMenu::cMenu()
{
	std::cout << "Menu’s Function : Constructor performed" << std::endl;
}

cMenu::~cMenu()
{
	std::cout << "Menu’s Function : Destructor performed" << std::endl;
}

void cMenu::SelectWorld()
{
	std::cout << "Menu’s Function : SelectWorld performed" << std::endl;
}

void cMenu::DisplayGameScreen()
{
	std::cout << "Menu’s Function : DisplayGameScreen performed" << std::endl;

	mUI.ShowUI();
}

void cMenu::PauseGame()
{
	std::cout << "Menu’s Function : PauseGame performed" << std::endl;
}
