#include "projects.h"

class Base126
{
public:
	virtual void fun1()
	{

	}
	virtual void fun2()
	{

	}
};

class Dervied126: public Base126
{
public:
	virtual void fun1()
	{

	}
	virtual void fun3() 
	{

	}
};

void Projects_12::m12_6()
{
	// 12.6 ���� (�Լ�) ǥ  Variable Table
	cout << sizeof(Base126) << endl;  
	// virtual�� ���� 1byte�� ������ ����
	cout << sizeof(Dervied126) << endl;
	// virtual�� ������ Virtual Table ������ size�� 8byte�� �ȴ�.
}