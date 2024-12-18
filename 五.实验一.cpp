#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void setTime()
	{
		cin >> hour, cin >> minute, cin >> sec;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};

int main()
{
	//Task 01
	Time t1;
	t1.setTime();
	t1.showTime();

	


	system("pause");
	return 0;
}