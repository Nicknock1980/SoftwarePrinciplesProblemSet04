#include "StatBoost.h"

StatBoost::StatBoost(std::string Name)
{
	m_Name = Name;
	std::cout << "StatBoost with name '" << Name << "' created\n\n";
}

void StatBoost::ItemType()
{
	std::cout << "StatBoost ItemType function altered item type\n\n";
}

void StatBoost::Effect()
{
	std::cout << "StatBoost Effect function altered item type\n\n";
}
