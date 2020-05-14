#include "projects.h"

class Mother114
{
public:
	int m_i;

public:
	Mother114(const int& i_in = 0) // �̷��� 0���� �ʱ�ȭ�ϸ� 
		// default constructor�� ������ �� ó�� ������ ���̴�.
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
	//	// 	: m_i(314) // initialiation�� �ȵȴ�.
	// Mother class�� ���� ������ �ȴ�. �� ������ Child class�� ������
	//{
	//	this->m_i = 20;
	//	this->Mother::m_i = 1024;
	//	m_i = 2048;
	//}
	Child114()
		//	: Mother(), m_d(3.14)
		: Mother114(10), m_d(3.14)
	{
		m_i = 1024; // �̷��� �ȴ�.
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
	// 11.4 ������ Ŭ�������� ������ �ʱ�ȭ
	Child114 child1;
	cout << sizeof(Mother114) << endl;
	cout << sizeof(Child114) << endl; // Mother114�� ���� ���� int���� 
	// float�� ���ļ� 8 Byte�� �ȴ�.
	// double�� �ٲٸ� padding ������ 16byte�� �ȴ�.
	// ��, Child114 class�� size�� ������ Mother114�� size�� ������ 
	// ������ ũ�� �޸� �Ҵ��� �ȴ�.
	C114 c(1024, 3.14, 'a');
	// Constructor ������ A -> B -> C �̴�.
	// Destructor  ������ C -> B -> A �̴�.
}