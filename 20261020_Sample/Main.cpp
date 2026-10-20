#include "Enemy.h"
#include "Player.h"
#include <iostream>

int main(void)
{
	Enemy enemy;
	Player player;

	//enemy.ShowStatus();
	//player.ShowStatus();

	//enemy.Attack();
	//player.Attack();

	Character* characters[2] = { &enemy, &player };
	for (int i = 0; i < 2; i++)
	{
		characters[i]->ShowStatus();
		characters[i]->Attack();

	}
	return 0;
}