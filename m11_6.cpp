#include "projects.h"

class Base116
{
private: // protected 로 놓고 changeBase116 함수를 대신해서 써도 된다.
	int m_value;

public:
	Base116(int value_in)
		:m_value(value_in)
	{
		
	}

	int& getValue()
	{
		return m_value;
	}
};

class Derived116 : public Base116
{

public:
	Derived116(int value_in)
		: Base116(value_in)
	{

	}
	// Base116에 있는 멤버변수 int m_value; 의 값을 바꾸는 함수를 만들자.
	Base116& changeBase116(Base116& base)
	{
		// base.getValue() = 5;
		return base;
	}

};

void Projects_11::m11_6()
{
	// 11.6 유도된 클래스에 새로운 기능 추가하기
	Derived116 dr(1);
	dr.changeBase116(dr) = 23;
	cout << dr.getValue() << endl;
}