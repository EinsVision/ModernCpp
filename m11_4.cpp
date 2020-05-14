#include "projects.h"

class Mother114
{
public:
	int m_i;

public:
	Mother114(const int& i_in = 0) // 이렇게 0으로 초기화하면 
		// default constructor도 생성한 것 처럼 구현된 것이다.
		:m_i(i_in)
	{
		cout << "Mother construction" << endl;
	}
};

class Child114 : public Mother114
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
	Child114()
		//	: Mother(), m_d(3.14)
		: Mother114(10), m_d(3.14)
	{
		m_i = 1024; // 이렇게 된다.
		cout << "Child construction" << endl;
	}
};

class A114
{
public:
	A114(const int& a)
	{
		cout << "A : " << a << endl;
	}
	~A114()
	{
		cout << "A destructor" << endl;
	}
};

class B114 : public A114
{
public:
	B114(const int& a, const double& b)
		: A114(a)
	{
		cout << "B : " << b << endl;
	}
	~B114()
	{
		cout << "B destructor" << endl;
	}
};

class C114 : public B114
{
public:
	C114(const int& a, const double& b, const char& c)
		: B114(a, b)
	{
		cout << "C : " << c << endl;
	}
	~C114()
	{
		cout << "C destructor" << endl;
	}
};


void Projects_11::m11_4()
{
	// 11.4 유도된 클래스들의 생성과 초기화
	Child114 child1;
	cout << sizeof(Mother114) << endl;
	cout << sizeof(Child114) << endl; // Mother114로 부터 받은 int까지 
	// float과 합쳐서 8 Byte가 된다.
	// double로 바꾸면 padding 때문에 16byte가 된다.
	// 즉, Child114 class의 size는 유도된 Mother114의 size를 포함할 
	// 정도로 크게 메모리 할당이 된다.
	C114 c(1024, 3.14, 'a');
	// Constructor 순서는 A -> B -> C 이다.
	// Destructor  순서는 C -> B -> A 이다.
}