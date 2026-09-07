#include"Calculator.h"
#include<iostream>
using namespace std;

int main()
{
	//インスタンス
	Calculator calc;

	//変数
	double a, b;
	char op;

	//計算の実行
	cout << "計算を行います。" << endl;
	//数値1の入力
	cout << "数値1を入力してください: ";
	cin >> a;
	//演算子の入力
	cout << "演算子を入力してください (+, -, *, /): ";
	cin >> op;
	//数値2の入力
	cout << "数値2を入力してください: ";
	cin >> b;
	
	//演算子に応じて計算を実行
	switch (op)
	{
	case '+':
		cout << "結果: " << calc.add(a, b) << endl;	//加算
		break;
	case '-':
		cout << "結果: " << calc.subtract(a, b) << endl; //減算
		break;
	case '*':
		cout << "結果: " << calc.multiply(a, b) << endl; //乗算
		break;
	case '/':
		cout << "結果: " << calc.divide(a, b) << endl; //除算
		break;
	default:
		cout << "無効な演算子です。" << endl;
		break;
	}
	return 0;
}