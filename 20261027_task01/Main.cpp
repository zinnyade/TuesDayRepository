#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	vector<Enemy> enemies;

	int enemy1Hp = rand() % 71 + 30;
	int enemy2Hp = rand() % 71 + 30;
	int enemy3Hp = rand() % 71 + 30;

	enemies.push_back (Enemy(enemy1Hp));
	enemies.push_back(Enemy(enemy2Hp));
	enemies.push_back(Enemy(enemy3Hp));

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	return 0;

}
