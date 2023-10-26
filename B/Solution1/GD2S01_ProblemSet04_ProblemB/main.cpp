#include "Inventory.h"
#include "Ability.h"
#include "StatBoost.h"

int main()
{
	Player Player("Player 1");
	Inventory Inventory;
	
	StatBoost Item1("StatBoost Item 1");
	Inventory.AddItem(Item1);

	Ability Item2("Ability Item 2", "Ability");
	Inventory.AddItem(Item2);
	
	Inventory.DeleteItem(1);
	
	Inventory.UseItem(1);

	Player.TakeDamage();
	
	Player.Attack();

	return 0;
}