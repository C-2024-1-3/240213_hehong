#include<iostream>
using namespace std;

class Ti
{
private:
	int l, w, h;
public:
	void set(int L = 0, int W = 0, int H = 0)
	{
		l = L, w = W, h = H;
	}
	int volume()
	{
		return l * w * h;
	}
};
int main()
{
	int a, b, c;
	Ti t[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "��Ϊ��" << i + 1 << "���������ĳ���߷ֱ�ֵ" << endl;
		cin >> a, cin >> b, cin >> c;
		t[i].set(a, b, c);
		cout << "��" << i + 1 << "�������������ǣ�" << t[i].volume() << endl;
	}

	return 0;
}