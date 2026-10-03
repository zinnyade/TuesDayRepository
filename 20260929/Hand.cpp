#include "Hand.h"
#include <iostream>

using namespace std;

Hand::Hand()
{
	hand = 0;
}

void Hand::ShowHand()
{
	switch (hand)
	{
	case ROCK:
		cout << "の手はグーです。\n";
	case SCISSORS:
		cout << "の手はチョキです。\n";
	case PAPER:
		cout << "の手はパーです。\n";
	default:
		break;
	}
}