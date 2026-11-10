#include <iostream>
#include "EnemySample.h"

int main(void)
{
	//EnemySample enemy1;
	//EnemySample enemy2;
	//EnemySample enemy3;
	//
	//EnemySample* target = &enemy1;

	//target->TakeDamage(30);

	//target = &enemy2;
	//target->TakeDamage(50);

	//enemy1.ShowStatus();
	//enemy2.ShowStatus();
	//enemy3.ShowStatus();

	std::unique_ptr<EnemySample> enemy1 = std::make_unique<EnemySample>();

	enemy1->ShowStatus();
	std::unique_ptr<EnemySample> enemy2;
	enemy2 = std::move(enemy1);
	// enemy2 = enemy1;
	enemy2->TakeDamage(20);
	enemy2->ShowStatus();

	return 0;

}