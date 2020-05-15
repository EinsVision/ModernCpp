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
	// 12.5 ���� ���ε��� ���� ���ε�
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0: add, 1: sub, 2: mul" << endl;
	cin >> op;

	// static binding
	// �������̳� �Լ����� ��� build time�� �����Ǿ� �ִ� ������
	// static binding Ȥ�� early binding�̶�� �Ѵ�.
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
	// func_ptr�� ����Ű�� �ִ� �ּҰ� Run time�� ������ �ȴ�.
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

	cout << func_ptr(x1, y1) << endl; // Run time�� �����ȴ�.
}