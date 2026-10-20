#include "Gojo.h"
#include "Inumaki.h"
#include "Megumi.h"
#include <iostream>
using namespace std;

int main(void)
{
	//各キャラクターのインスタンスを作成
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumi;
	
	// Sorcererクラスのポインタ配列を作成し、各キャラクターのアドレスを格納
	Sorcerer* sorcerers[3] = { &gojo, &inumaki, &megumi };

	// 各キャラクターのステータスを表示し、技を使用
	for (int i = 0; i < 3; i++)
	{
		sorcerers[i]->ShowStatus();
		sorcerers[i]->UseTechnique();
		cout << endl;
	}

	return 0;
}


