#include<iostream>
#include"20260630_Header_Oishi.h"
#include<cstdlib>
#include<ctime>
using namespace std;

//ゲーム本体
void Game()
{
	//変数
	int i;
	int playerInput;
	int cardNum = 0;
	int playerCard = 0, cpuCard = 0;
	
	//乱数の初期化
	srand((unsigned int)time(NULL));
	
	//プレイヤーの初期カードの生成
	CardPull(playerCard);
	CardPull(playerCard);

	//CPUの初期カードの生成
	CardPull(cpuCard);
	CardPull(cpuCard);
	
	//ゲームの説明
	cout << "CPUとブラックジャックみたいなものをします。\n"
		<< "カードの合計が　" << CARD_SUM_MAX << "　を超えると負けです。\n"
		<< "カードの合計が　" << CARD_SUM_MAX << "　に近い方が勝ちです。\n"
		<< "CPUはあなたよりカードの合計が少ない場合、カードを引きます。\n"
		<< "あなたはカードを引くかどうか選択できます。\n";

	//ゲームループ
	while (playerCard < CARD_SUM_MAX && cpuCard < CARD_SUM_MAX)
	{
		//プレイヤーのカードの合計を表示
		cout << "現在あなたのカードの合計は　" << playerCard << "　です。\n";
		//プレイヤーのカードを引くかどうかの入力
		playerInput = InputCheck();
		//プレイヤーがカードを引く場合、カードを引く
		if (playerInput == 0) CardPull(playerCard);
		//CPUがプレイヤーよりカードの合計が小さい場合、カードを引く
		if (cpuCard < playerCard) CardPull(cpuCard);
		//判定
		Judgement(playerCard, cpuCard);
	}
	//ゲーム終了時のカードの合計を表示
	cout << "あなたのカードの合計は　" << playerCard << "　でした。\n"
		<< "CPUのカードの合計は　" << cpuCard << "　でした。\n";
}

//カードを引く関数
void CardPull(int& card)
{
	card += rand() % CARD_MAX + CARD_MIN;
}

//入力チェック関数
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

//判定関数
void Judgement(int playerCard, int cpuCard)
{

	if (playerCard == CARD_SUM_MAX && cpuCard == CARD_SUM_MAX || playerCard > CARD_SUM_MAX && cpuCard > CARD_SUM_MAX) cout << "引き分けです。\n";
	else if (playerCard > CARD_SUM_MAX) cout << "あなたの負けです。\n";
	else if (cpuCard > CARD_SUM_MAX) cout << "あなたの勝ちです。\n";
	else if (playerCard == CARD_SUM_MAX) cout << "あなたの勝ちです。\n";
	else if (cpuCard == CARD_SUM_MAX) cout << "あなたの負けです。\n";
}




