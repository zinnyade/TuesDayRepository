#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"Wizard.h"
#include"BattleManager.h"

int main(void)
{
	//コンストラクタ
	Player player("勇者");
	Enemy enemy("スライム");
	Boss boss("魔王");
	Wizard wizard("魔法使い");

	BattleManager manager;

	/*Character* character;
	character = &player;
	character->Attack();
	character = &enemy;
	character->Attack();
	character = &boss;
	character->Attack();*/

	manager.StartBattle(&player);
	manager.StartBattle(&wizard);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);

	return 0;
}