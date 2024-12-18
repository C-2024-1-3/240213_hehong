#include<iostream>
using namespace std;

int main()
{
	Student stud;
	Student stud1(007, "tcg", 'm');
	stud.set_value(006, "tag", 'f');
	stud.display();
	stud1.display();

	return 0;
}