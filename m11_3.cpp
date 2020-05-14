#include "projects.h"

class Mother11
{
public:
	int m_i;

public:
	Mother11(const int& i_in = 0) // 이렇게 0으로 초기화하면 
		// default constructor도 생성한 것 처럼 구현된 것이다.
		:m_i(i_in)
	{
		cout << "Mother construction" << endl;
	}
};

class Child11 : public Mother11
{
public:
	double m_d;

public:
	//Child()
	//	// 	: m_i(314) // initialiation이 안된다.
	// Mother class가 먼저 생성이 된다. 그 다음에 Child class가 생성됨
	//{
	//	this->m_i = 20;
	//	this->Mother::m_i = 1024;
	//	m_i = 2048;
	//}
	Child11()
	//	: Mother(), m_d(3.14)
		: Mother11(10), m_d(3.14)
	{
		m_i = 1024; // 이렇게 된다.
		cout << "Child construction" << endl;
	}
};

// 상속이 여러 단계를 거쳐서 내려올 수 도 있다.
class AAA
{

public:
	AAA()
	{
		cout << "A constructor" << endl;
	}
};

class BBB : public AAA
{
public:
	BBB()
	{
		cout << "B constructor" << endl;
	}
};

class CCC : public BBB
{
public:
	CCC()
	{
		cout << "C constructor" << endl;
	}
};


void Projects_11::m11_3()
{
	// 11.3 유도된 클래스들의 생성 순서
	Child11 c1;
	// Mother construction
	// Child construction 
	// 이 순서로 class가 생성이 된다.

	CCC c;
}