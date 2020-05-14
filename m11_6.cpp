#include "projects.h"

class Base116
{
private: // protected �� ���� changeBase116 �Լ��� ����ؼ� �ᵵ �ȴ�.
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
	// Base116�� �ִ� ������� int m_value; �� ���� �ٲٴ� �Լ��� ������.
	Base116& changeBase116(Base116& base)
	{
		// base.getValue() = 5;
		return base;
	}

};

void Projects_11::m11_6()
{
	// 11.6 ������ Ŭ������ ���ο� ��� �߰��ϱ�
	Derived116 dr(1);
	dr.changeBase116(dr) = 23;
	cout << dr.getValue() << endl;
}