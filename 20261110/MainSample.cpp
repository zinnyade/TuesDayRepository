#include <iostream>
#include "EnemySample.h"

int main(void)
{
	EnemySample enemy1;
	EnemySample enemy2;
	EnemySample enemy3;
	
	EnemySample* target = &enemy1;

	target->TakeDamage(30);

	target = &enemy2;
	target->TakeDamage(50);

	enemy1.ShowStatus();
	enemy2.ShowStatus();
	enemy3.ShowStatus();

	return 0;

}