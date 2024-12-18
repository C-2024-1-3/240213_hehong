#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int X = 0, int Y = 0)
	{
		this->x = X, this->y = Y;
	}
	void setPoint(int i, int j)
	{
		this->x = x + i, this->y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.display();
	p.setPoint(15, 25);
	p.display();

	return 0;
}