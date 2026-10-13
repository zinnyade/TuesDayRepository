#include "Enemy.h"
#include <iostream>
using namespace std;

Enemy::Enemy(std::string name) : Character(name)
{}

void Enemy::Attack()
{
	cout << "‚©‚Ý‚Â‚«UŒ‚‚ð‚·‚éI" << endl;
}