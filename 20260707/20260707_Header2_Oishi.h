#pragma once
//定数
const int MAX_NUM = 9;
const int MIN_NUM = 0;
const int SIZE = 3;
const int HIT_MAX = 3;


//入力チェック
void InputCheck(int num[]);
//ゲーム
void Game();
//答えとなる数字の生成
void GenerateNum(int num[], int size);
//判定
void Judge(int num[], int size, int inputNum[],int& hit);
//結果表示
void PrintResult(int& playerHit, int& cpuHit);


