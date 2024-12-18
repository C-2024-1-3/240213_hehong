#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sec: " << sex << endl;
}
Student::Student(int n, const char N[20], char s)
{
	num = n;
	for (int i = 0; i < sizeof(N); i++)
	{

		name[i] = N[i];
	}
	sex = s;
}
Student::Student() {}
void Student::set_value(int n, const char N[20], char s)
{
	num = n;
	for (int i = 0; i < sizeof(N); i++)
	{
		name[i] = N[i];
	}
	sex = s;
}