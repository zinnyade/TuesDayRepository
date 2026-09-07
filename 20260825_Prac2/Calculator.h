#pragma once
class Calculator
{
	public:
		Calculator() = default;	// デフォルトコンストラクタ
		~Calculator() = default;	// デストラクタ

		double add(double a, double b);	// 加算
		double subtract(double a, double b);	// 減算
		double multiply(double a, double b);	// 乗算
		double divide(double a, double b);	// 除算




};

