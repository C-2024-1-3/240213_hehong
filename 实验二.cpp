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
cout << "������һ���ַ���" << endl;
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
	cout << "����x(0~10)��ֵ��" << endl;
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
cout << "�����������ε����߳���" << endl;
cin >> a >> b >> c;
while (1)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�ܳ�Ϊ��" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
		break;
	}
	else
	{
		cout << "���ܹ���������,����������" << endl;
		cin >> a >> b >> c;
	}
}*/


//Task04
/*double a, b;
int c;
while (true)
{
	cout << "�������ɽ����������㣺" << endl;
	cout << "1���ӷ�����" << endl;
	cout << "2����������" << endl;
	cout << "3���˷�����" << endl;
	cout << "4����������" << endl;
	cout << "5��ȡ������" << endl;

	cout << endl;
	cout << "��ѡ��" << endl;
	cin >> c;
	switch (c)
	{
	case 1://�ӷ�����
		cout << "����������������" << endl;
		cin >> a >> b;
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case 2://����
		cout << "�����뱻������" << endl;
		cin >> a;
		cout << "�����������"<< endl;
		cin >> b;
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case 3://�˷�
		cout << "����������������" << endl;
		cin >> a >> b;
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case 4://����
		cout << "�����뱻������" << endl;
		cin >> a;
		cout << "�����������" << endl;
		cin >> b;
		while (b == 0)
		{
			cout << "��������Ϊ�㣬����������" << endl;
			cin >> b;
		}
		cout << a << "/" << b << "=" << a / b << endl;
		break;
	case 5://ȡ��
		int a, b;
		cout << "�����뱻ȡ����(����)��" << endl;
		cin >> a;
		cout << "������ȡ����(����)��" << endl;
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
cout << "�����룺" << endl;
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
cout << "Ӣ����ĸ��" << word << "��" << endl;
cout << "������" << number << "��" << endl;
cout << "�ո���" << space << "��" << endl;
cout << "�����ַ���" << other << "��" << endl;*/


//Task06
/*int a, b;
cout << "������������������" << endl;
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
		cout << "a��b����������ǣ�" << b << endl;
		break;
	}
	else
	{
		int seed = a % b;
		a = b;
		b = seed;
	}
}
cout << "a��b����С�������ǣ�" << r / b << endl;
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
cout << "������һ���Ǹ���" << endl;
cin >> a;
while (true)
{
	if (a < 0)
	{
		cout << "ֻ������Ǹ���������������" << endl;
		cin >> a;
	}
	else break;
}
const double b = a;
cout << "�������ƽ�����ǣ�"<< f(a, b) << endl;*/

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