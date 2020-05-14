#include "projects.h"

class Mother11
{
public:
	int m_i;

public:
	Mother11(const int& i_in = 0) // �̷��� 0���� �ʱ�ȭ�ϸ� 
		// default constructor�� ������ �� ó�� ������ ���̴�.
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
	//	// 	: m_i(314) // initialiation�� �ȵȴ�.
	// Mother class�� ���� ������ �ȴ�. �� ������ Child class�� ������
	//{
	//	this->m_i = 20;
	//	this->Mother::m_i = 1024;
	//	m_i = 2048;
	//}
	Child11()
	//	: Mother(), m_d(3.14)
		: Mother11(10), m_d(3.14)
	{
		m_i = 1024; // �̷��� �ȴ�.
		cout << "Child construction" << endl;
	}
};

// ����� ���� �ܰ踦 ���ļ� ������ �� �� �ִ�.
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
	// 11.3 ������ Ŭ�������� ���� ����
	Child11 c1;
	// Mother construction
	// Child construction 
	// �� ������ class�� ������ �ȴ�.

	CCC c;
}