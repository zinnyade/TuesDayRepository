#include "SampleHeader.h"
#include <iostream>

CharacterSample::CharacterSample() : hp(100) {}
void CharacterSample::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

void CharacterSample::ShowStatus() const
{
	std::cout << "Character HP: " << hp << std::endl;
}