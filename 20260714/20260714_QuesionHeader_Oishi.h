#pragma once

//定数
const int PITCHING_MIN = 0;	//入力の最小値
const int PITCHING_MAX = 3;	//入力の最大値
const int PROBABILITY = 4;	//確率

const int STRIKE_COUNT = 3;	//ストライクの最大値
const int BALL_COUNT = 4;	//ボールの最大値
const int OUT_COUNT = 3;	//アウトの最大値
const int HIT_COUNT = 4;	//ヒットの最大値

//列挙体
enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};
//投げた球の種類の表示
void PitchingType(int pitching);
//結果表示
void Result(int out);
//プレイヤーの入力チェック
int InputCheck(int min, int max);

