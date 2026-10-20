#pragma once
#include "Character.h"
class Enemy : public Character
{
public:
	void ShowStatus() override;

	void Attack() override;

};

