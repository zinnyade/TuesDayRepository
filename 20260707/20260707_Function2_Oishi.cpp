#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_Oishi.h"
using namespace std;


void Game()
{
    //変数
    int player[MAX_NUM];
	int cpu[MAX_NUM];
    int inputNum[MAX_NUM];
	int cpuNum[MAX_NUM];
	int playerHit = 0;
	int cpuHit = 0;
    //乱数の初期化
	srand((unsigned int)time(NULL));
    //プレイヤーの答えを生成
    GenerateNum(player, MAX_NUM);
    //CPUの答えを生成
	GenerateNum(cpu, MAX_NUM);
    //プレイヤーの答えを表示
    cout << "あなたの数字は\n"
        << player[0] << " " << player[1] << " " << player[2] << "\n"
        << "です。\n";
   //プレイヤーかCPUのどちらかが3ヒットするまで続ける
    while (playerHit < HIT_MAX && cpuHit < HIT_MAX)
    {
        //ヒット数の初期化
		playerHit = 0,cpuHit = 0;
		cout << "プレイヤーターン\n";
        //入力チェック
        InputCheck(inputNum);
        //判定
        Judge(cpu, SIZE, inputNum, playerHit);
		cout << "CPUターン\n";
        //cpuの数字生成
        for (int i = 0; i < SIZE; i++)
        {
            if (cpuNum[i] != player[i]) cpuNum[i] = rand() % (MAX_NUM + 1);
        }
        //CPUが生成した数字を表示
        cout << "CPUが入力した数字は\n"
            << cpuNum[0] << " " << cpuNum[1] << " " << cpuNum[2] << endl;
        //判定
		Judge(player, SIZE, cpuNum, cpuHit);

    }
    //結果表示
	PrintResult(playerHit, cpuHit);
}

//入力チェック
void InputCheck(int num[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "数字を入力してください。\n";
        while (true)
        {
            cin >> num[i];
            if (num[i] > MAX_NUM || num[i] < MIN_NUM) cout << "入力範囲が違います。もう一度入力してください。\n";
			else break;
        }

    }
}

//数字の生成
void GenerateNum(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        while (true)
        {
            num[i] = rand() % (MAX_NUM);
            //もし重複したら再生成する
            if (num[i - 1] == num[i])continue;
            else break;
        }
	}
}

//判定
void Judge(int num[], int size, int inputNum[],int& hit)
{
	for (int i = 0; i < size; i++)
    {
        if (num[i] == inputNum[i])
        {
            cout << "Hit! ";
            hit++;
        }
        else cout << "Miss! ";
    }
	cout << endl;
}

//最終結果表示
void PrintResult(int& playerHit, int& cpuHit)
{
    if (playerHit == HIT_MAX) cout << "あなたの勝ちです！" << endl;
    else if (cpuHit == HIT_MAX) cout << "CPUの勝ちです！" << endl;
}


