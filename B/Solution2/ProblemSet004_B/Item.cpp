#include "Item.h"

cItem::cItem()
{
	std::cout << "Item’s Function : Constructor performed" << std::endl;
}

cItem::~cItem()
{
	std::cout << "Item’s Function : Destructor performed" << std::endl;
}

void cItem::UseAbility()
{
	std::cout << "Item’s Function : UseAbility performed" << std::endl;
}
