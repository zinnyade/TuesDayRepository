#pragma once
class Sorcerer
{
public:

	//ステータスの表示
	virtual void ShowStatus();
	//攻撃処理
	virtual void UseTechnique() = 0;

};

