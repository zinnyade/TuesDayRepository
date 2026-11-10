#include <iostream>
#include "SampleHeader.h"

int main(void)
{
	//Player player;
	//Enemy enemy;

	//CharacterSample* target = &enemy;

	//target->TakeDamage(30);

	//enemy.ShowStatus();

	Enemy* enemy = new Enemy();

	enemy->TakeDamage(30);
	enemy->ShowStatus();

	return 0;


}



