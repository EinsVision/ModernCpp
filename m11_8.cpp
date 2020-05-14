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
	// �̷��� �����ϸ� Derive118���� m_value�� public���� �� �� �ִ�.

private:
	using Base118::print; // ()�� �Է����� �ʴ´�.
	void print() = delete; // �̰͵� �����ϴ�.
};


void Projects_11::m11_8()
{
	// 11.8 ��� ���� �Լ��� ���߱�
	// ��� ���� �Լ��� ������� ���ϵ��� ���� ����� ���� ����.
	Base118 bs(5); // private: using Base118::print; ���� �� ����
	bs.print();

	Derived118 dr(7);
	dr.m_value = 1024;
	// dr.print(); // private: using Base118::print; ������
}