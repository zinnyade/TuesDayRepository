#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_name.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player; //プレイヤーの値
    int cpu;    //CPUの値
    int probability;    //確率

    int strike = 0; //ストライクの回数
    int ball = 0;   //ボールの回数
    int out = 0;    //アウトの回数
    int hit = 0;    //ヒットの回数

    //乱数の初期化
    srand((unsigned int)time(nullptr));

    //説明
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲームループ
    do
    {
        //投げられる球の種類の表示
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        //プレイヤーの入力とそのチェック
        player = InputCheck(PITCHING_MIN,PITCHING_MAX);
        //球の種類の表示
        PitchingType(player);
        //cpuの生成
        cpu = rand() % PROBABILITY;
        //確率の生成
        probability = rand() % PROBABILITY;

        //プレイヤーとCPUの数が異なったときに75%でストライク、25%でボールに分岐
        if (player != cpu)
        {
            if (probability == 0)   //もし25%が当たったらボール
            {
                cout << "ボール！" << endl;
                ball++; //ボールの回数を増加
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;   //ストライクの回数を増加
            }
        }
        //プレイヤーとCPUの数が同じときに75%でヒット、25％でアウトに分岐
        else
        {
            //ストライクとボールの回数を初期化
            strike = 0;
            ball = 0;

            if (probability == 1)   //もし25％が当たったらアウト
            {
                cout << "OUT!!" << endl;
                out++;  //アウトの回数を増加
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;  //ヒットの回数を増加
            }
        }

        //ストライク回数が3回になるとアウト、またはボール回数が4回になるとヒット
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            //もしストライク回数が3回だったらアウト
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;  //アウトの回数を増加
            }
            //もしボールの回数が4回だったらヒット
            else
            {
                cout << "フォアボール！" << endl;
                hit++;  //ヒットの回数を増加
            }
            //ストライクとボールの回数を初期化
            strike = 0;
            ball = 0;
        }

        //それぞれの現在の回数を表示
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

        //アウトの回数が3回未満かつヒットの回数が4回未満の場合はループ
    } while (out < OUT_COUNT && hit < HIT_COUNT);

    //アウトの回数に基づいてプレイヤーの勝ちかCPUの勝ちかを判定
    Result(out);

    return 0;
}