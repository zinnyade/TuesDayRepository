#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//定数
const int MAX_ENEMY_HP = 100; // 敵の最大HP
const int MIN_ENEMY_HP = 30; // 敵の最小HP
const int NUM_ENEMIES = 3; // 敵の数
const int MAX_DAMAGE_AMOUNT = 90; // ダメージ量の最大値
const int MIN_DAMAGE_AMOUNT = 20; // ダメージ量の最小値

int main()
{
	// 乱数の初期化
	srand((unsigned int)time(NULL));
	// 敵の生成
	vector<Enemy> enemies;

	// 敵のHPをランダムに設定して生成
	for (int i = 0; i < NUM_ENEMIES; i++)
	{
		int enemyHp = rand() % (MAX_ENEMY_HP - MIN_ENEMY_HP + 1) + MIN_ENEMY_HP;
		enemies.push_back(Enemy(enemyHp));
	}
	
	// 敵のHPを表示
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	// 攻撃する敵のインデックスを入力
	int enemyIndex;
	cout << "攻撃する敵のインデックスを入力してください (1-" << enemies.size() << "): "; 
	while (true)
	{
		cin >> enemyIndex;
		if (enemyIndex > 0 && enemyIndex <= enemies.size()) break;
		else cout << "無効なインデックスです。再度入力してください (1-" << enemies.size() << "): ";
		
	}

	// ダメージ量をランダムに決定して敵に与える
	int damage = rand() % (MAX_DAMAGE_AMOUNT - MIN_DAMAGE_AMOUNT + 1) + MIN_DAMAGE_AMOUNT;
	enemies[enemyIndex - 1].Damage(damage);
	
	cout << "敵に" << damage << "のダメージを与えました。" << endl;
	
	//敵のHPが0以下になった場合、敵を削除する
	if (enemies[enemyIndex - 1].GetHp() <= 0)
	{
		cout << "敵を倒しました。" << endl;
		enemies.erase(enemies.begin() + enemyIndex - 1);
	}

	// 残りの敵のHPを表示
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	// 残りの敵の数を表示
	cout << "残りの敵の数: " << enemies.size() << endl;

	return 0;

}
