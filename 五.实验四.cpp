#include<iostream>
using namespace std;
class SStudent
{
private:
	long No;
	int score;
public:
	SStudent(long N = 0, int s = 0)
	{
		No = N, score = s;
	}
	long getNo()
	{
		return No;
	}
	int getScore()
	{
		return score;
	}
};
void Max(SStudent* s)
{
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].getScore() > temp)
		{
			temp = s[i].getScore();
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (s[i].getScore() == temp)
		{
			cout << "分数最高的是：" << s[i].getScore() << "\t" << "学号为: " << s[i].getNo() << endl;
		}
	}
}
int main()
{
	SStudent students[5] = { {249901,59},{249902,85},{249903,83},{249904,95},{249905,78} };
	Max(students);

	return 0;
}