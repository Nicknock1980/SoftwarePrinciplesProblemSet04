#pragma once
#include <iostream>

class cCharacter
{
protected:
	int mHealth;
	int mAttackDamage;

public:
	cCharacter();
	cCharacter(int health, int attackDamage);
	~cCharacter();

	void Attack();
	void TakeDamage(int damage);
};

