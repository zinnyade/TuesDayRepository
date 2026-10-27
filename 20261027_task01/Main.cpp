#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//’è”
const int MAX_ENEMY_HP = 100;
const int MIN_ENEMY_HP = 30;
const int NUM_ENEMIES = 3;

int main()
{
	srand((unsigned int)time(NULL));
	vector<Enemy> enemies;

	for (int i = 0; i < NUM_ENEMIES; ++i)
	{
		int enemyHp = rand() % (MAX_ENEMY_HP - MIN_ENEMY_HP + 1) + MIN_ENEMY_HP;
		enemies.push_back(Enemy(enemyHp));
	}
	
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	return 0;

}
