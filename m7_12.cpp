#include "projects.h"

void CountDown(int x)
{
	cout << "CountDown() : " << x << endl;

	if (x <= 0) // recursion function을 빠져나가는 조건이다. (종료조건 필요)
	{
		return;
	}

	CountDown(x - 1); // recursive function call !!
	// code는 메모리에 저장이 되있고, 함수를 호출할 때는 주소를 보고 호출하는
	// 것이라서 이러한 recursion function call이 가능한 것이다.
}

int sumTo(int x)
{
	static int sum = 0;
	sum += x;
	cout << "sum: " << sum << endl;
	if (x <= 0) // recursion function을 빠져나가는 조건이다. (종료조건 필요)
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
	// 7.12 재귀적 함수 호출 (recursive function call)
	CountDown(10);
	cout << endl;

	cout << sumTo(3) << endl;
	cout << endl;

	cout << multfunc(5) << endl;
	cout << endl;
}
