#include "projects.h"

class Base1211
{
public:
	Base1211()
	{

	}

	// friend 함수는 member function이 아니기 때문에, overriding 할 수
	// 없다.
	friend ostream& operator << (ostream& out, const Base1211& b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived1211 : public Base1211
{
public:
	Derived1211()
	{

	}

	/*friend ostream& operator << (ostream& out, const Base1211& b)
	{ // 이 함수는 자식 class가 가지고 있을 필요가 없다.
		return b.print(out);
	}*/

	virtual ostream& print(ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

void Projects_12::m12_11()
{
	// 12.11 유도 클래스에서 출력 연산자 사용하기
	// 출력 연산자는 다형성에서 보통 사용할 수 없다. 가능한 방법을 
	// 알아보자.
	Base1211 b;
	cout << b << endl;

	Derived1211 d;
	cout << d << endl;

	Base1211& ref = d;
	cout << ref << endl;
}