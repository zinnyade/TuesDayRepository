#include "header.h"
#include <iostream>

using namespace std;

int main(void)
{
	int hp = 100;	// プレイヤーのHP
	int* php = &hp;	// HPのポインタ

	cout << "現在のHPは" << *php << "です。" << endl;

	Heal(php);	// HPを回復する

	cout << "現在のHPは" << *php << "です。" << endl;
	
	Damage(php);	// HPにダメージを与える
	
	// 現在のHPを表示する
	cout << "現在のHPは" << *php << "です。" << endl;
	
	return 0;
}