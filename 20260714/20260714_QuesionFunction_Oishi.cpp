#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_name.h"
using namespace std;

//投げた球の表示
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}

//結果表示
void Result(int out)
{
    //もしアウトの回数が3回だったらプレイヤーの勝ち、そうでないならCPUの勝ち
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}

//プレイヤーの入力チェック
int InputCheck(int min, int max)
{

    int player;

    while (true)
    {   
        //プレイヤーの入力
        cin >> player;

        //入力範囲外の場合はもう一度入力
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}