#pragma once
#include "Item.h"
class Ability : public Item
{
public:
	std::string m_Name;
	std::string m_Type;

	Ability(std::string Name, std::string Type);
	virtual void ItemType();
	virtual void Effect();
};

