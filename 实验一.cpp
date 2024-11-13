#include<iostream>;
#include<iomanip>;
using namespace std;

int main()
{
	//实验一，实验环境于简单程序设计
	//Task01
	/*int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	*/

	//Task02 求圆锥的体积
	/*const float pi = 3.14;
	int rad, height;
	cout << "请输入圆锥半径：" << endl;
	cin >> rad;
	cout << "请输入圆锥的高：" << endl;
	cin >> height;
	cout << "圆锥的体积是：" << (pi * rad * rad * height) / 3 << endl;
	cout << endl;
	*/

	//Task03
	/*cout << "char length: " <<'\t'<<sizeof(char) << endl;
	cout << "int length: " << '\t' << sizeof(int) << endl;
	cout << "float length: " << '\t' << sizeof(float) << endl;
	cout << "double length: " << '\t' << sizeof(double) << endl;
	cout << "bool length: " << '\t' << sizeof(bool) << endl;
	cout << "short length: " << '\t' << sizeof(short) << endl;
	cout << "long length: " << '\t' << sizeof(long) << endl;
	cout << "long long length: " << '\t' << sizeof(long long) << endl;
	cout << "long double length: " << '\t'<<sizeof(char) << endl;
	cout << endl;*/


	//Task04
	/*unsigned int testUnint = 65534;
	cout << "output in unsigned int 1 type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4)<< static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	//八进制输出testUnint
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << endl;
	*/
	//Task05
	/*double hua;
	cout << "请输入一个华氏温度：" << endl;
	cin >> hua;
	double she = (hua - 32) / 1.8;
	cout << "摄氏温度：" << she << endl;*/




	system("pause");
	return 0;
}