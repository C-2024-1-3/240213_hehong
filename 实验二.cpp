#include<iostream>;
using namespace std;

double f(double a, const double b)
{
	double Xn_1, Xn;
	if (a == 0)
	{
		Xn_1 = 0;
		return 0;
	}
	else
	{
		Xn = a;
		Xn_1 = (Xn + b / Xn) / 2;
		if (Xn - Xn_1 < 10e-5)
		{
			return Xn_1;
		}
		else
		{
			f(Xn_1, b);
		}

	}
}

int main()
{
	//Task01
/*char ch;
cout << "请输入一个字符：" << endl;
cin >> ch;
if (ch >= 'a' && ch <= 'z')
{
	ch = ch - 32;
	cout << ch << endl;

}
else
{
	cout << ch+1 << endl;
}
cout << endl;
*/

//Task02
/*double x = 0;
int time = 0;
while (time<4)
{
	cout << "输入x(0~10)的值：" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		cout << 3 - 2*x << endl;
		time++;
	}
	else if (x >= 1 && x < 5)
	{
		cout << 2 / (4 * x) + 1 << endl;
		time++;
	}
	else
	{
		cout << x * x << endl;
		time++;
	}
}
*/
//Task03
/*int a, b, c;
cout << "请输入三角形的三边长：" << endl;
cin >> a >> b >> c;
while (1)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "周长为：" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
		break;
	}
	else
	{
		cout << "不能构成三角形,请重新输入" << endl;
		cin >> a >> b >> c;
	}
}*/


//Task04
/*double a, b;
int c;
while (true)
{
	cout << "计算器可进行以下运算：" << endl;
	cout << "1·加法运算" << endl;
	cout << "2·减法运算" << endl;
	cout << "3·乘法运算" << endl;
	cout << "4·除法运算" << endl;
	cout << "5·取余运算" << endl;

	cout << endl;
	cout << "请选择：" << endl;
	cin >> c;
	switch (c)
	{
	case 1://加法运算
		cout << "请输入两个加数：" << endl;
		cin >> a >> b;
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case 2://减法
		cout << "请输入被减数：" << endl;
		cin >> a;
		cout << "请输入减数："<< endl;
		cin >> b;
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case 3://乘法
		cout << "请输入两个乘数：" << endl;
		cin >> a >> b;
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case 4://除法
		cout << "请输入被除数：" << endl;
		cin >> a;
		cout << "请输入除数：" << endl;
		cin >> b;
		while (b == 0)
		{
			cout << "除数不能为零，请重新输入" << endl;
			cin >> b;
		}
		cout << a << "/" << b << "=" << a / b << endl;
		break;
	case 5://取余
		int a, b;
		cout << "请输入被取余数(整数)：" << endl;
		cin >> a;
		cout << "请输入取余数(整数)：" << endl;
		cin >> b;
		cout << a << "%" << b << "=" << a % b << endl;
		break;
	default:
		break;
	}
	system("pause");
	system("cls");
}
*/
//Task05
/*cout << "task 5:" << endl;
int word = 0, space = 0, number = 0, other = 0;
char c;
cout << "请输入：" << endl;
c = getchar();
while (c != '\n') {
	if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z') {
		word++;
	}
	else if (c == ' ') {
		space++;
	}
	else if (c >= '0' && c <= '9') {
		number++;
	}
	else {
		other++;
	}
	c = getchar();
}
cout << "英文字母有" << word << "个" << endl;
cout << "数字有" << number << "个" << endl;
cout << "空格有" << space << "个" << endl;
cout << "其他字符有" << other << "个" << endl;*/


//Task06
/*int a, b;
cout << "请输入两个正整数：" << endl;
cin >> a >> b;
int r = a * b;
if (a < b)
{
	int temp = a;
	a = b;
	b = temp;
}
while (true)
{
	if (a % b == 0)
	{
		cout << "a和b的最大公因数是：" << b << endl;
		break;
	}
	else
	{
		int seed = a % b;
		a = b;
		b = seed;
	}
}
cout << "a和b的最小公倍数是：" << r / b << endl;
*/

//Task07
/*for (int i = 0; i < 5; i++)
{
	for (int j = 0; j < i+1; j++)
	{
		cout << "*";
	}
	cout << endl;
}
*/

//Task08
/*double a;
cout << "请输入一个非负数" << endl;
cin >> a;
while (true)
{
	if (a < 0)
	{
		cout << "只能输入非负数，请重新输入" << endl;
		cin >> a;
	}
	else break;
}
const double b = a;
cout << "这个数的平方根是："<< f(a, b) << endl;*/

//Task09
	const double p = 0.8;
	int day = 0;
	double sum = 0;
	int num = 2;
	while (num <= 100)
	{
		sum += num;
		num *= 2;
		day++;
	}
	cout << sum * p / day << endl;

	system("pause");

	return 0;
}