#include <iostream>
#include "SampleHeader.h"
#include <memory>

int main(void)
{
	//Player player;
	//Enemy enemy;

	//CharacterSample* target = &enemy;

	//target->TakeDamage(30);

	//enemy.ShowStatus();

	//Enemy* enemy = new Enemy();

	//enemy->TakeDamage(30);
	//enemy->ShowStatus();

	//delete enemy;
	//enemy = nullptr;
	
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->TakeDamage(60);

	std::cout << "Enemy HP: ";

	enemy->ShowStatus();

	return 0;


}



