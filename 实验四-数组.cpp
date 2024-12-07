#include<iostream>
using namespace std;

void merge(int list1[], int size1, const int list2[], int size2, int list3[])
{
	int j = 0, k = 0;
	for (int i = 0; i < size1 + size2; i++)
	{
		if (j == size1 || k == size2) break;
		if (list1[j] <= list2[k])
		{
			list3[i] = list1[j];
			j++;
		}
		else
		{
			list3[i] = list2[k];
			k++;
		}
	}
	if (j == size1)
	{
		for (int i = 0; i < size2 - k; i++)
		{
			list3[i + j + k] = list2[k + i];
		}
	}
	else
	{
		for (int i = 0; i < size1 - j; i++)
		{
			list3[i + j + k] = list1[j + i];
		}
	}
	cout << "The merged list is: ";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
}
//检验字串/
int indexOf(const char s1[], const char s2[])
{
	int size1 = strlen(s1), size2 = strlen(s2);
	if (size1 <= size2)
	{
		for (int i = 0; i < size2 - size1; i++)
		{
			int sum = 0;
			for (int j = 0; j < size1; j++)
			{
				if (s1[j] == s2[i + j])
					sum++;
			}
			if (sum == size1)return i;
		}
	}
	else
	{
		for (int i = 0; i < size1 - size2; i++)
		{
			int sum = 0;
			for (int j = 0; j < size2; j++)
			{
				if (s2[j] == s1[i + j])
					sum++;
			}
			if (sum == size2)return i;
		}
	}
	return -1;
}

void count(const char s[], int counts[])
{
	int size;
	for (int i = 0; ; i++)
	{
		if (s[i] == 0)
		{
			size = i;
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == (97 + j) || s[i] == 65 + j)
			{
				counts[j]++;

			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << (char)(97 + i) << ":" << counts[i] << " times" << endl;
		}
	}
}

int main()
{
	//Task01
	/*int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int Arr[] = { 0 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		for (int j = 0; j <= sum; j++)
		{
			if (Arr[j] == arr[i])
			{
				num++;
			}
		}
		if (num == 0)
		{
			Arr[sum] = arr[i];
			sum++;
		}

	}
	for (int i = 0; i < sum; i++)
	{
		cout << Arr[i] << "  ";
	}*/


	//Task02
	//double arr[10] = { 0 };
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10 - 1 - i; j++)
	//	{
	//		if (arr[j] > arr[j+1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j+1];
	//			arr[j + 1] = temp;

	//		}
	//	}
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << "  ";
	//}

	///Task03
	/*bool arr[100] = { false };
	for (int i = 0; i< 100; i++)
	{
		if (i == 0)
		{
			for (int k = 0; k < 100; k++)
			{
				arr[k] = true;
			}
		}
		else
		{
			for (int j = i; j < 100; j += i+1)
			{
				arr[j] = !arr[j];
			}
		}

	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)
		{
			cout << i + 1 << " ";
		}
	}*/
	//Task04
	/*int size1, size2;
	cout << "请输入第一个升序数组的长度：" << endl;
	cin >> size1;
	cout << "请给数组赋值：" << endl;
	int list1[] = { 0 };
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个升序数组的长度：" << endl;
	cin >> size2;
	cout << "请给数组赋值：" << endl;
	int list2[] = { 0 };
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cout << list1[i] << " ";
	}
	cout << endl;
	cout << "Enter list2: ";
	for (int i = 0; i < size2; i++)
	{
		cout << list2[i] << " ";
	}
	cout << endl;
	int list3[] = { 0 };
	merge(list1, size1, list2, size2, list3);*/

	//Task05 检验字串
   /* cout << "Enter the first string: welcome" << endl;
	cout << "Enter the second string: we welcome you!" << endl;
	cout << "indexOf('welcome','we welcome you!')is " << indexOf("welcome", "we welcome you!") << endl;
	cout << endl;
	cout << "Enter the first string: welcome" << endl;
	cout << "Enter the second string: we invite you!" << endl;
	cout << "indexOf('welcome','we invite you!')is " << indexOf("welcome", "we invite you!") << endl;*/

	//Task06 
	cout << "Enter a string:Welcome to New York!" << endl;
	int counts[26] = { 0 };
	count("Welcome to New York!", counts);




	system("pause");

	return 0;
}