#include "header.h"
#include <iostream>

using namespace std;

int main(void)
{
	int hp = 100;	// プレイヤーのHP
	Heal(&hp);	// HPを回復する
	Damage(&hp);	// HPにダメージを与える
	// 現在のHPを表示する
	cout << "現在のHPは" << hp << "です。" << endl;
	return 0;
}