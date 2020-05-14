#include "projects.h"

class Base118
{
protected:
	int m_value;

public:
	Base118(int value_in)
		:m_value(value_in)
	{

	}
	void print()
	{
		cout << "I am Base" << endl;
	}
};

class Derived118 : public Base118
{
private:
	double m_d;
public:
	Derived118(int value_in)
		: Base118(value_in)
	{

	}
	using Base118::m_value; 
	// 이렇게 선언하면 Derive118에서 m_value는 public으로 쓸 수 있다.

private:
	using Base118::print; // ()를 입력하지 않는다.
	void print() = delete; // 이것도 가능하다.
};


void Projects_11::m11_8()
{
	// 11.8 상속 받은 함수를 감추기
	// 상속 받은 함수를 사용하지 못하도록 막는 방법에 대해 배운다.
	Base118 bs(5); // private: using Base118::print; 영향 안 받음
	bs.print();

	Derived118 dr(7);
	dr.m_value = 1024;
	// dr.print(); // private: using Base118::print; 사용못함
}