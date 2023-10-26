#include "Player.h"

Player::Player(std::string Name)
{
	m_Name = Name;
	m_Health = 10;
	std::cout << "Initialising Player with name '" << Name << "' and starting with 10 health\n\n";
}

void Player::Attack()
{
	std::cout << "Player Attack function called\n\n";
}

void Player::TakeDamage()
{
	std::cout << "Player TakeDamage function called (would reduce health)\n\n";
}
