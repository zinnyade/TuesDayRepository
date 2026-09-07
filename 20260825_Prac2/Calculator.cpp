#include "Calculator.h"
#include<iostream>
using namespace std;

//加算
double Calculator::add(double a, double b) 
{
	return a + b;
}

//減算
double Calculator::subtract(double a, double b) 
{
	return a - b;
}

//乗算
double Calculator::multiply(double a, double b) 
{
	return a * b;
}

//除算
double Calculator::divide(double a, double b) 
{
	// 0で割ることはできないので、0の場合はエラーメッセージを表示して0を返す
	if (b == 0)
	{
		cout << "0で割ることはできません。" << endl;
		return 0; 
	}
	return a / b;
}




