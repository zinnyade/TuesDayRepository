#include "Enemy.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*Enemy enemy1(100);
	Enemy enemy2(200);
	enemy1.ShowStatus();
	enemy2.ShowStatus();*/
	vector<Enemy> enemies;
	enemies.push_back(Enemy(100));
	enemies.push_back(Enemy(200));
	enemies.push_back(Enemy(300));
	enemies.push_back(Enemy(400));

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Ì”‚Í " << enemies.size() << " ‘Ì‚Å‚·B" << endl; 

	return 0;
}