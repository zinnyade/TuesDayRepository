#include "Player.h"
#include <iostream>
using namespace std;

void Player::ShowStatus()
{
	cout << "Player HP: " << hp << endl;
}

void Player::Attack()
{
	cout << "Player attacks!" << endl;
}