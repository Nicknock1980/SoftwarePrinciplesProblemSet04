#include "Ability.h"

Ability::Ability(std::string Name, std::string Type)
{
	m_Name = Name;
	m_Type = Type;
	std::cout << "Ability with name '" << Name << "' created\n\n";
}

void Ability::ItemType()
{
	std::cout << "Ability ItemType function altered item type\n\n";
}

void Ability::Effect()
{
	std::cout << "Ability Effect function altered item type\n\n";
}
