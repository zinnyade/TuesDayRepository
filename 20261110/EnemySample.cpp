#include "EnemySample.h"
#include <iostream>

EnemySample::EnemySample() : hp(100) {}

void EnemySample::TakeDamage(int damage) 
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

void EnemySample::ShowStatus() const
{
	std::cout << "Enemy HP: " << hp << std::endl;
}