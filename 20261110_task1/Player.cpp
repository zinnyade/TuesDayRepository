#include "Player.h"
#include <iostream>

Player::Player(){}

int Player::GetInput()
{
	while (true)
	{
		std::cin >> Input;
		if (Input < 1 || Input > 3)
		{
			std::cout << "“ü—Í”ÍˆÍ‚ªˆá‚¢‚Ü‚·B‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;

		}
		else break;
	}
	return Input;
}

