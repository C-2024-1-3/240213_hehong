#include<iostream>;
#include<iomanip>;
using namespace std;

int main()
{
	//ʵ��һ��ʵ�黷���ڼ򵥳������
	//Task01
	/*int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	*/

	//Task02 ��Բ׶�����
	/*const float pi = 3.14;
	int rad, height;
	cout << "������Բ׶�뾶��" << endl;
	cin >> rad;
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> height;
	cout << "Բ׶������ǣ�" << (pi * rad * rad * height) / 3 << endl;
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
	//�˽������testUnint
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << endl;
	*/
	//Task05
	/*double hua;
	cout << "������һ�������¶ȣ�" << endl;
	cin >> hua;
	double she = (hua - 32) / 1.8;
	cout << "�����¶ȣ�" << she << endl;*/




	system("pause");
	return 0;
}