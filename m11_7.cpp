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
	void print() // �������� ���ؼ� �̸��� �Ȱ��� ����Ѵ�.
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
	// 11.7 ��ӹ��� �Լ��� �������̵� �ϱ� overriding
	// �Լ� overriding : 
	// �Լ� �������̵�(overriding)�̶� �̹� ���ǵ� �Լ��� �����ϰ�, 
	// ���� �̸��� �Լ��� ���Ӱ� �����ϴ� ���̶�� �� �� �ֽ��ϴ�.
	// �̷��� �ϴ� ������ ������ �����̴�.

	Base117 bs(1);
	bs.print(); // �Լ� �̸��� ���� ��� ��� ȣ���� ���ΰ��� ����Ѵ�.

	Derived117 dr(2);
	dr.print(); // �Լ� �̸��� ���� ��� ��� ȣ���� ���ΰ��� ����Ѵ�.	  
	dr.Base117::print();  

	cout << bs << endl;
	cout << dr << endl;
}