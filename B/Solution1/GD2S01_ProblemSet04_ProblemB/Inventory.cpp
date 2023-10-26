#include "Inventory.h"

Inventory::Inventory()
{
	m_Slot = 0;
	m_EmptySlots = 10;
	m_FilledSlots = 0;
	std::cout << "Initiating Inventory with 10 empty slots and 0 filled slots\n\n";
}

void Inventory::DeleteItem(int Slot)
{
	std::cout << "Inventory DeleteItem called to delete item in slot '" << Slot << "'\n\n";
	Display();
}

void Inventory::AddItem(Item Item)
{
	std::cout << "Inventory AddItem called to add the given item. Checks inventory not full. Calls DeleteItem if full\n\n";
	Display();
}

void Inventory::UseItem(int Slot)
{
	std::cout << "Inventory UseItem called to use item in slot '" << Slot << "'. Reduces the filled slots and increases empty slots. Calls Effect\n\n";
	Display();
}

void Inventory::Display()
{
	std::cout << "Inventory Display called. Shows all updated items in inventory\n\n";
}
