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
	// 12.6 가상 (함수) 표  Variable Table
	cout << sizeof(Base126) << endl;  
	// virtual을 빼면 1byte를 가지고 있음
	cout << sizeof(Dervied126) << endl;
	// virtual이 붙으면 Virtual Table 떄문에 size가 8byte가 된다.
}