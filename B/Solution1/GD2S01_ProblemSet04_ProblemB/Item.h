#pragma once
#include <iostream>
//#include "Inventory.h"
class Item
{
public:
	std::string m_Name;
	std::string m_Type;

	Item();
	virtual void ItemType();
	virtual void Effect();
};

