#pragma once
#include "Character.h"
#include "Item.h"

class cPlayer : public cCharacter
{
private:
	int mItemNumber = 0;
	cItem mItems[10];

public:
	cPlayer();
	~cPlayer();

	void Move();
	void DiscardItem();
	void UseAbilities();
	void EquipItem(cItem item);
};

