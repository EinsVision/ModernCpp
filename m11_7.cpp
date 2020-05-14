#include "projects.h"

class Base117
{
protected:
	int m_value;

public:
	Base117(int value_in)
		:m_value(value_in)
	{

	}

	void print()
	{
		cout << "I am Base " << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base117& b)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived117 : public Base117
{

public:
	Derived117(int value_in)
		: Base117(value_in)
	{

	}
	void print() // 다형성을 위해서 이름을 똑같이 사용한다.
	{
		Base117::print();
		cout << "I am Derived " << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived117& d)
	{
		cout << static_cast<Base117>(d) << endl;
		out << "This is derviced output" << endl;
		return out;
	}
};

void Projects_11::m11_7()
{ 
	// 11.7 상속받은 함수를 오버라이딩 하기 overriding
	// 함수 overriding : 
	// 함수 오버라이딩(overriding)이란 이미 정의된 함수를 무시하고, 
	// 같은 이름의 함수를 새롭게 정의하는 것이라고 할 수 있습니다.
	// 이렇게 하는 이유는 다형성 때문이다.

	Base117 bs(1);
	bs.print(); // 함수 이름이 같을 경우 어떻게 호출할 것인가를 고민한다.

	Derived117 dr(2);
	dr.print(); // 함수 이름이 같을 경우 어떻게 호출할 것인가를 고민한다.	  
	dr.Base117::print();  

	cout << bs << endl;
	cout << dr << endl;
}