#include "projects.h"

class B
{
private:
	int b_value;
public:
	B(const int& value)
		:b_value(value)
	{

	}
};

class MIL
{
private:
	int a;
	double b;
	char c;
	int my_arr[5];
	B bvalue;
public:
	MIL()	 // Member Initializer List
			 //: a(1), b(3.14), c('h')
		: a{ 1 }
		, b{ 3.14 }
		, c{ 'h' }
		, my_arr{ 1,2,3,4,5 }
		, bvalue{a -1}
		// uniform�� ����ȯ�� �ȵǰ� ���� �����̴�.
	{
		a *= 2;		// Member Initializer List ����ǰ� �� ������ ����
		b *= 2.0;	// Member Initializer List ����ǰ� �� ������ ����
		c = 'a';	// Member Initializer List ����ǰ� �� ������ ����
	}
	void print()
	{
		cout << "int a: " << a << endl;
		cout << "double b: " << b << endl;
		cout << "char c: " << c << endl;
		for (auto& element : my_arr)
		{
			cout << "my_arr: " << element << endl;
		}
	}
};

void Projects_8::m8_4()
{
	// 8.4 ������ ��� �ʱ�ȭ ��� (Member Initializer List)
	MIL milk;
	milk.print();
}
