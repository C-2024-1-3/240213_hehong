class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void display();
	Student(int, const char[20], char);
	Student();
	void set_value(int n, const char N[20], char s);
};