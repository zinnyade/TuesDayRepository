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