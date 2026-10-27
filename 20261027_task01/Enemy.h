#pragma once
class Enemy
{
private:
	int hp;
public:

	// コンストラクタとデストラクタ
	Enemy(int hp);
	~Enemy();

	// HPを表示するメソッド
	void ShowHp() const;

	// ダメージを与えるメソッド
	void Damage(int damage);

	// HPを取得するメソッド
	int GetHp() const;
};

