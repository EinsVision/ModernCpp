#include "projects.h"

class Base1211
{
public:
	Base1211()
	{

	}

	// friend �Լ��� member function�� �ƴϱ� ������, overriding �� ��
	// ����.
	friend ostream& operator << (ostream& out, const Base1211& b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived1211 : public Base1211
{
public:
	Derived1211()
	{

	}

	/*friend ostream& operator << (ostream& out, const Base1211& b)
	{ // �� �Լ��� �ڽ� class�� ������ ���� �ʿ䰡 ����.
		return b.print(out);
	}*/

	virtual ostream& print(ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

void Projects_12::m12_11()
{
	// 12.11 ���� Ŭ�������� ��� ������ ����ϱ�
	// ��� �����ڴ� ���������� ���� ����� �� ����. ������ ����� 
	// �˾ƺ���.
	Base1211 b;
	cout << b << endl;

	Derived1211 d;
	cout << d << endl;

	Base1211& ref = d;
	cout << ref << endl;
}