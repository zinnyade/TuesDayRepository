#pragma once
class Enemy
{
private:
	int hp;
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="hp">HP</param>
	Enemy(int hp);

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();

	/// <summary>
	/// HPを表示するメソッド
	/// </summary>
	void ShowHp() const;

	/// <summary>
	/// ダメージを与えるメソッド
	/// </summary>
	/// <param name="damage">与えるダメージ量</param>
	void Damage(int damage);

	/// <summary>
	/// HPを取得するメソッド
	/// </summary>
	/// <returns>HP</returns>
	int GetHp() const;
};

