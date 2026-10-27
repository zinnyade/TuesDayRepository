#include "Enemy.h"
#include <iostream>

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy()
{
}

void Enemy::ShowHp() const
{
	std::cout << "Enemy HP: " << hp << std::endl;
}

void Enemy::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

int Enemy::GetHp() const
{
	return hp;
}