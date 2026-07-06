#pragma once
//定数
const int CARD_SUM_MAX = 21;
const int INPUT_MAX = 1;
const int INPUT_MIN = 0;
const int CARD_MAX = 11;
const int CARD_MIN = 1;
const int START_CARD_MAX = 2;

//カード生成
void CardPull(int& card);
//入力チェック
int InputCheck();
//判定
void Judgement(int playerCard, int cpuCard);
//ゲーム
void Game();