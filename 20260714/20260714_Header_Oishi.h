#pragma once
//定数
const int NUMBER_MAX = 50;
const int NUMBER_MIN = 0;
const int INPUT_MAX = 10;
const int INPUT_MIN = 1;
const int ROUND_MAX = 7;
const int POINT_MAX = 3;
const int POINT_MIN = 1;


//関数
void Game();
//入力チェック
void InputCheck(int& inputNum,int player[],int playerUsed[]);
//数字生成
void CreateNumber(int num[]);
//CPUの数字生成
void CreateCpuNumber(int cpu[], int cpuUsed[],int& cpuInput);

