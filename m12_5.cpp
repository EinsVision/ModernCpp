#include "projects.h"

int add125(int x, int y)
{
	return x + y;
}

int sub125(int x, int y)
{
	return x - y;
}

int mul125(int x, int y)
{
	return x * y;
}

void Projects_12::m12_5()
{
	// 12.5 동적 바인딩과 정적 바인딩
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0: add, 1: sub, 2: mul" << endl;
	cin >> op;

	// static binding
	// 변수명이나 함수명이 모두 build time에 결정되어 있는 것응ㄹ
	// static binding 혹은 early binding이라고 한다.
	int result = 0;
	switch (op)
	{
	case 0: 
		result = add125(x, y);
		break;
	case 1:
		result = sub125(x, y);
		break;
	case 2:
		result = mul125(x, y);
		break;
	}

	cout << "result: " << result << endl; 

	// Dynamic binding (late binding)
	// func_ptr이 가리키고 있는 주소가 Run time에 결정이 된다.
	int x1, y1;
	cin >> x1 >> y1;

	int op1;
	cout << "0: add, 1: sub, 2: mul" << endl;
	cin >> op1;


	int(*func_ptr)(int, int) = nullptr;
	switch (op1)
	{
	case 0:
		func_ptr = add125;
		break;
	case 1:
		func_ptr = sub125;
		break;
	case 2:
		func_ptr = mul125;
		break;
	}

	cout << func_ptr(x1, y1) << endl; // Run time에 결정된다.
}