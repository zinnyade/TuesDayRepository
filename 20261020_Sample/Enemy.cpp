#include "Enemy.h"
#include <iostream>
using namespace std;

void Enemy::ShowStatus()
{
	cout << "Enemy HP: " << hp << endl;
}

void Enemy::Attack()
{
	cout << "Enemy attacks!" << endl;
}


