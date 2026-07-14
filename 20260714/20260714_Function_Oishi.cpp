#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_Oishi.h"
using namespace std;

//入力チェック
void InputCheck(int& inputNum, int player[], int playerUsed[])
{
	cout << "使う数字を入力してください。\n";
	while (true)
	{
		cin >> inputNum;
		if (inputNum > INPUT_MAX || inputNum < INPUT_MIN) cout << "入力範囲が違います。もう一度入力してください。\n";
		else if (player[inputNum - INPUT_MIN] == playerUsed[inputNum - INPUT_MIN])cout << "この数字は使用できません。もう一度入力してください。\n";
		else break;

	}
	playerUsed[inputNum - INPUT_MIN] = player[inputNum - INPUT_MIN];
}

//使える数字の生成
void CreateNumber(int num[])
{
	int i;
	for (i = 0; i < INPUT_MAX; i++)
	{
		num[i] = rand()% (NUMBER_MAX + 1);
	}
}

//CPUの出す数字の生成
void CreateCpuNumber(int cpu[], int cpuUsed[],int& cpuInput)
{
	while (true)
	{
		cpuInput = rand() % INPUT_MAX;
		if (cpu[cpuInput] != cpuUsed[cpuInput])break;
	}
	cpuUsed[cpuInput] = cpu[cpuInput];
}


void Game()
{
	//変数宣言
	int i;
	int player[INPUT_MAX];
	int playerUsed[INPUT_MAX];
	int cpu[INPUT_MAX];
	int cpuUsed[INPUT_MAX];
	int round = 0;
	int playerInput, cpuInput;
	int playerPoint = 0, cpuPoint = 0;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	//プレイヤーとCPUの数字の生成
	CreateNumber(player);
	CreateNumber(cpu);

	//ゲームループ
	while (round < ROUND_MAX)
	{
		//ラウンド増加
		round++;
		cout << round << "ラウンド目\n";
		cout << "あなたの使える数字は\n";
		//使える数字の表示
		for (i = 0; i < INPUT_MAX; i++)
		{
			if (player[i] != playerUsed[i]) cout << i + 1 << " : " << player[i] << "  ";
		}
		cout << endl;
		//入力チェック
		InputCheck(playerInput,player,playerUsed);
		//CPUの入力
		CreateCpuNumber(cpu, cpuUsed,cpuInput);
		cout << "プレイヤーの数 : " << player[playerInput] << endl;
		cout << "CPUの数 : " << cpu[cpuInput] << endl;
		//数字の判定
		if (player[playerInput] > cpu[cpuInput])
		{
			cout << "プレイヤーの数の方が大きい！\n";
			playerPoint += POINT_MAX;
		}
		else
		{
			cout << "CPUの数の方が大きい！\n";
			cpuPoint += POINT_MAX;
		}
		if (player == cpu)
		{
			cout << "同じ数だ！\n";
			playerPoint++;
			cpuPoint++;
		}
		//得点の表示
		cout << "現在のスコア\n"
			<< "プレイヤーの得点：" << playerPoint << endl
			<< "CPUの得点：" << cpuPoint << endl;

	}
	
	//最終結果表示
	cout << "最終結果！\n"
		<< "プレイヤーの得点：" << playerPoint << endl
		<< "CPUの得点：" << cpuPoint << endl;
	if (playerPoint > cpuPoint)cout << "プレイヤーの勝ち！\n";
	else cout << "CPUの勝ち！\n";
	if (playerPoint == cpuPoint) cout << "引き分け\n";

}