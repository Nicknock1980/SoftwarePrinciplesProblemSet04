#pragma once
#include "Player.h"
#include "Item.h"
class Inventory
{
public:
	int m_Slot;
	int m_EmptySlots;
	int m_FilledSlots;

	Inventory();
	void DeleteItem(int Slot);
	void AddItem(Item Item);
	void UseItem(int Slot);
	void Display();
};
