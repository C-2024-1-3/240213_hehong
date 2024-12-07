#include<iostream>
using namespace std;

int* f()
{
	int* p = new int[4];
	for (int i = 0; i < 4; i++)
	{
		p[i] = i + 1;
	}
	return p;
}

int indexOf(const char* s1, const char* s2)
{
	int size1 = 0, size2 = 0;
	for (int i = 0; *(s1 + i) != 0; i++)
	{
		size1++;
	}

	for (int i = 0; *(s2 + i) != 0; i++)
	{
		size2++;
	}
	if (size1 <= size2)
	{
		for (int i = 0; i < size2 - size1; i++)
		{
			int counts = 0;
			for (int j = 0; j < size1; j++)
			{
				if (*(s1 + j) == *(s2 + i + j))
					counts++;
			}
			if (counts == size1)
				return i;
		}
	}
	else
	{
		for (int i = 0; i < size1 - size2; i++)
		{
			int counts = 0;
			for (int j = 0; j < size2; j++)
			{
				if (*(s2 + j) == *(s1 + i + j))
					counts++;
			}
			if (counts == size2)
				return i;
		}
	}
	return -1;
}

int parseHex(const char* const hexString)
{
	int size = strlen(hexString);
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		int m, power = 1;
		char n = hexString[i];
		if (n >= '0' && n <= '9')
		{
			m = n - '0';

			for (int j = 0; j < size - 1 - i; j++)
			{
				power *= 16;
			}
			sum += m * power;
		}
		else if (n >= 'A' && n <= 'F')
		{
			m = n - 'A' + 10;
			for (int j = 0; j < size - i - 1; j++)
			{
				power *= 16;
			}
			sum += m * power;
		}
		else if (n >= 'a' && n <= 'f')
		{
			m = n - 'a' + 10;
			for (int j = 0; j < size - i - 1; j++)
			{
				power *= 16;
			}
			sum += m * power;
		}
		else
		{
			cout << "输入有误" << endl;
			break;
		}
	}
	return sum;
}

void sort(int* p, int len)
{
	cout << "排序前：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << p[i] << " ";
	}
}

int main()
{
	/*int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5, j = 7;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
	*/
	/*int a[] = { 1,2,3 };
	int* p, i;
	p = a;
	for (i = 0; i < 3; i++)
	{
		cout << a[i] << " " << p[i] << " " << *(p + i) << " " << *(a + i) << endl;
	}*/

	/*int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;*/

	//程序设计

	/*cout << indexOf("welcome", "we welcome you!") << endl;
	cout << indexOf("we all welcome you!", "welcome") << endl;
	cout << indexOf("welcome", "we invite you!") << endl;*/

	//cout<<parseHex("Ab5") << endl;

	int len, * p;
	cout << "请输入数组长度：" << endl;
	cin >> len;
	p = new int[len];
	cout << "请给数组赋值：" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> p[i];
	}
	sort(p, len);
	delete[]p;

	system("pause");

	return 0;
}