#pragma once
#include "Item.h"
class StatBoost : public Item
{
public:
	std::string m_Name;

	StatBoost(std::string Name);
	virtual void ItemType();
	virtual void Effect();
};

