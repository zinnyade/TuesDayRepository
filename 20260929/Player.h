#pragma once
#include "Hand.h"
class Player : public Hand
{
public:
	//コンストラクタ
	Player();

	//手の入力
	int InputPlayerHand();

};

