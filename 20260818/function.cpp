#include "header.h"
#include <iostream>

using namespace std;

//回復関数
void Heal(int *hp)
{
	*hp += HEAL_POINT;
	cout << "HPが" << HEAL_POINT << "回復しました。" << endl;
}

//ダメージ関数
void Damage(int *hp)
{
	*hp -= DAMAGE_POINT;
	cout << "HPが" << DAMAGE_POINT << "減少しました。" << endl;
}