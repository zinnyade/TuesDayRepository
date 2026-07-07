#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//配列追加
void AddArray(int ary[], int index);
//配列表示
void ShowArray(int ary[], int index);

int main(void)
{
	//配列
	int ary[10] = {};
	//配列追加
	AddArray(ary, 10);
	//配列表示
	ShowArray(ary, 10);

	return 0;
}

//配列追加
void AddArray(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		//入力
		cin >> ary[i];
	}
}


//配列表示
void ShowArray(int ary[], int index)
{
	cout << "偶数：\n";
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 == 0) cout << ary[i] << endl;
	}
	cout << "奇数：\n";
	for (int i = 0; i < index; i++)
	{
		if (ary[i] % 2 != 0) cout << ary[i] << endl;
	}
}

