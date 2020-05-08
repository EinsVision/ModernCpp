#include "projects.h"

class Fraction
{
private: // ĸ��ȭ�� �� ���־�� �Ѵ�.
	// private member variable�� ���� ���� ���� �� �ִ�.
	int numerator/* = 3*/;
	int denominator /*= 5*/;

public:
	// Fraction() {} // default construction !!
	// �����ڰ� ���� ��� default �����ڰ� ȣ��ȴ�.
	// �����ڰ� �ݵ�� ȣ��Ǿ�� �Ѵ�.
	// ������ �ϳ��� �����ϸ� default �����ڸ� ȣ������ �ʴ´�.

	Fraction() // ������ Constructors
		// �� �����ڴ� �ܺο��� ȣ���ҷ��� ���°� �ƴϴ�. 
		// Fraction ��ü�� �����Ǹ鼭 ���ÿ� ����Ǵ� ���̴�.
	{
		numerator = 3;
		denominator = 5;
		cout << "Fraction() called // ������ Constructors" << endl;
	}
	Fraction(const int& num_in, const int& deno_in = 1) // ������ Constructors
		// �� �����ڴ� �ܺο��� ȣ���ҷ��� ���°� �ƴϴ�. 
		// Fraction ��ü�� �����Ǹ鼭 ���ÿ� ����Ǵ� ���̴�.
	{
		numerator = num_in;
		denominator = deno_in;
		cout << "Fraction() called // ������ Constructors" << endl;
	}
	void print()
	{
		cout << numerator << " / " << denominator;
		cout << endl;
	}
};

class Second
{

public:
	Second()
	{
		cout << "Second class consturctor(): " << endl;
	}
};

class First
{
	Second sec;
public:
	First()
	{
		cout << "First class consturctor(): " << endl;
	}
};

void Projects_8::m8_3()
{
	// 8.3 ������ Constructors
	Fraction frac; // ��ü�� �����Ǹ� �޸𸮸� �Ҵ� �ް� �ٷ� �����ڰ�
	// ȣ��ȴ�. parameter�� �ϳ��� ���� ��ü�� ������ ���� () �� ������
	frac.print();

	Fraction one_thrid(1);
	one_thrid.print();

	First first;
	// �Ʒ��� ���� Second Ŭ������ ��ü�� ���� �����ȴ�.
	// Second class consturctor() :
	// First class consturctor() :
}
