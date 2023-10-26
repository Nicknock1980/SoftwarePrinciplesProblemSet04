#include "Player.h"

cPlayer::cPlayer()
{
	std::cout << "Player’s Function : Constructor performed" << std::endl;
}

cPlayer::~cPlayer()
{
	std::cout << "Player’s Function : Destructor performed" << std::endl;
}

void cPlayer::Move()
{
	std::cout << "Player’s Function : Move performed" << std::endl;
}

void cPlayer::DiscardItem()
{
	std::cout << "Player’s Function : DiscardItem performed" << std::endl;
}

void cPlayer::UseAbilities()
{
	std::cout << "Player’s Function : UseAbility performed" << std::endl;

	for (int i = 0; i < mItemNumber; i++)
	{
		mItems[i].UseAbility();
	}
}

void cPlayer::EquipItem(cItem item)
{
	std::cout << "Player’s Function : EquipItem performed" << std::endl;

	if (mItemNumber < 10)
	{
		
	}
	else
	{
		DiscardItem();
	}
}
