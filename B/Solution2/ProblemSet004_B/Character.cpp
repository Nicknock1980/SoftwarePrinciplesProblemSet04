#include "Character.h"

cCharacter::cCharacter()
{
	std::cout << "Character’s Function : Constructor performed" << std::endl;
}

cCharacter::cCharacter(int health, int attackDamage)
{
	mHealth = health;
	mAttackDamage = attackDamage;

	std::cout << "Character’s Function : Constructor With Parameters performed" << std::endl;
}

cCharacter::~cCharacter()
{
	std::cout << "Character’s Function : Destructor performed" << std::endl;
}

void cCharacter::Attack()
{
	std::cout << "Character’s Function : Attack performed" << std::endl;
}

void cCharacter::TakeDamage(int damage)
{
	std::cout << "Character’s Function : TakeDamage performed" << std::endl;

	std::cout << "Health = Health - Damage" << std::endl;
}
