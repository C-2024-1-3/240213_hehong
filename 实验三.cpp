#include<iostream>
#include"mytemperature.h"
using namespace std;

int func1(int& a, int& b)
{
	int seed = a * b;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while (true)
	{
		int ret = a % b;
		if (ret == 0)
		{
			return b;
		}
		else
		{
			a = b;
			b = ret;
		}
	}

}
int func2(int& ab, int& Yue)
{
	return ab / Yue;
}

bool isprime(int num)
{

	int sum = 0;
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			sum++;
		}
	}
	if (sum == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int peach(int endNum)
{
	static int sum = 0;
	static int day = 1;
	if (day == 10)
	{
		return sum;
	}
	else
	{
		sum = (endNum + 1) * 2;
		day++;
		return peach(sum);
	}
}

int main()
{
	//Task01 求最大公约数，最小公倍数	
	/*int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	int ab = a * b;
	int Yue = func1(a, b);
	cout << "这两个数的最大公因数是：" << Yue<< endl;
	cout << "这两个数的最小公倍数是：" << func2(ab, Yue) << endl;*/

	//Task02
	/*int a = 0;
	for (int i = 2; i <= 200; i++)
	{

		if (a != 0 && a % 10 == 0)
		{
			cout << endl;
			a = 0;
		}
		if (isprime(i))
		{
			cout << i << "  ";
			a++;
		}
	}*/

	//Task03

	/*cout << "Celsius" << '\t' << "Fahrenheit" << endl;
	for (double cel = 40.0; cel >= 31.0; cel -= 1.0)
	{
		cout << cel << '\t' << celsius_to_fah(cel) << endl;
	}
	cout << endl;
	cout << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (double fah = 120.0; fah >= 30.0; fah -= 10.0)
	{
		cout << fah << '\t'<<'\t' << fah_to_celsius(fah) << endl;
	}*/

	//Task05
	int endNum = 1;
	cout << "猴子第一天摘的桃子的个数：" << peach(endNum) << endl;
	system("pause");

	return 0;
}
double celsius_to_fah(double cel)
{
	double fah = 32 + cel * 1.8;
	return fah;
}
double fah_to_celsius(double fah)
{
	double cel = (fah - 32) / 1.8;
	return cel;
}