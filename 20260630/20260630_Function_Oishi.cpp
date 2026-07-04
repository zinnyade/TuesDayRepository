#include<iostream>
#include"20260630_Header_Oishi.h"
#include<cstdlib>
#include<ctime>
using namespace std;

void Game()
{
	int i;
	int playerInput;
	int cardNum = 0;
	int playerCard = 0, cpuCard = 0;
	
	srand((unsigned int)time(NULL));
	
	playerCard += CardPull();
	


}

int CardPull()
{
	int cardNum = rand() % CARD_MAX + CARD_MIN;
	return cardNum;
}

int CardDisplay(int cardNum)
{
	
}


int InputCheck()
{
	int inputNum;
	cout << "カードを引くか決めてください。Yes = 0、No = 1\n";
	while (true)
	{
		cin >> inputNum;
		if (inputNum > INPUT_MAX || inputNum < INPUT_MIN) cout << "入力範囲が違います。再度入力してください。\n";
		else break;
	}
	return inputNum;
}






