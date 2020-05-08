#include "projects.h"

class Fraction
{
private: // 캡슐화를 꼭 해주어야 한다.
	// private member variable에 직접 값을 넣을 수 있다.
	int numerator/* = 3*/;
	int denominator /*= 5*/;

public:
	// Fraction() {} // default construction !!
	// 생성자가 없을 경우 default 생성자가 호출된다.
	// 생성자가 반드시 호출되어야 한다.
	// 생성자 하나라도 선언하면 default 생성자를 호출하지 않는다.

	Fraction() // 생성자 Constructors
		// 이 생성자는 외부에서 호출할려고 쓰는게 아니다. 
		// Fraction 객체가 생성되면서 동시에 실행되는 것이다.
	{
		numerator = 3;
		denominator = 5;
		cout << "Fraction() called // 생성자 Constructors" << endl;
	}
	Fraction(const int& num_in, const int& deno_in = 1) // 생성자 Constructors
		// 이 생성자는 외부에서 호출할려고 쓰는게 아니다. 
		// Fraction 객체가 생성되면서 동시에 실행되는 것이다.
	{
		numerator = num_in;
		denominator = deno_in;
		cout << "Fraction() called // 생성자 Constructors" << endl;
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
	// 8.3 생성자 Constructors
	Fraction frac; // 객체가 생성되면 메모리를 할당 받고 바로 생성자가
	// 호출된다. parameter가 하나도 없는 객체를 생성할 때는 () 를 빼야함
	frac.print();

	Fraction one_thrid(1);
	one_thrid.print();

	First first;
	// 아래와 같이 Second 클래스의 객체가 먼저 생성된다.
	// Second class consturctor() :
	// First class consturctor() :
}
