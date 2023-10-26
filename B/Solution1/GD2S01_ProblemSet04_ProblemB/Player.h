#pragma once
#include <iostream>
class Player
{
public:
	std::string m_Name;
	int m_Health;

	Player(std::string Name);
	void Attack();
	void TakeDamage();
};

