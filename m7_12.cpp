#include "projects.h"

void CountDown(int x)
{
	cout << "CountDown() : " << x << endl;

	if (x <= 0) // recursion function�� ���������� �����̴�. (�������� �ʿ�)
	{
		return;
	}

	CountDown(x - 1); // recursive function call !!
	// code�� �޸𸮿� ������ ���ְ�, �Լ��� ȣ���� ���� �ּҸ� ���� ȣ���ϴ�
	// ���̶� �̷��� recursion function call�� ������ ���̴�.
}

int sumTo(int x)
{
	static int sum = 0;
	sum += x;
	cout << "sum: " << sum << endl;
	if (x <= 0) // recursion function�� ���������� �����̴�. (�������� �ʿ�)
	{
		return 0;
	}
	else if (x <= 1)
	{
		return 1;
	}
	else
	{
		return sumTo(x - 1) + x;
	}
}

int multfunc(int x) 
{
	if (x <= 0)
		return 0;
	else if (x <= 1)
		return 1;
	else
		return multfunc(x - 1) * x;
}

void Projects_7::m7_12() 
{
	// 7.12 ����� �Լ� ȣ�� (recursive function call)
	CountDown(10);
	cout << endl;

	cout << sumTo(3) << endl;
	cout << endl;

	cout << multfunc(5) << endl;
	cout << endl;
}
