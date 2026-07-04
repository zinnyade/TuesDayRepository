#pragma once
//定数
const int CARD_SUM_MAX = 21;
const int INPUT_MAX = 1;
const int INPUT_MIN = 0;
const int CARD_MAX = 11;
const int CARD_MIN = 1;
const int START_CARD_MAX = 2;
const int 

//カード生成
int CardPull();
//入力チェック
int InputCheck();
//判定
int Judgement();
//ゲーム
void Game();
//カード表示
int CardDisplay(int cardNum);