#include "projects.h"

int funcPointer() //�Լ��� �������̴�. �Լ��� �޸𸮿� ����.
{
	return 5;
}

int otherfuncPointer() //�Լ��� �������̴�. �Լ��� �޸𸮿� ����.
{
	return 10;
}

int funcPointer1(int x)
{
	return 15;
}

bool isEven(const int& number) // ¦���� true�� return �Ѵ�.
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	cout << "isEven: " << number << endl;
}

bool isOdd(const int& number) // Ȧ���� true�� return �Ѵ�.
{
	if (number % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
												  // ���⿡ ����� �־��ش�.
void printArrayFuncPointer(array<int, 10>& my_arr, bool (*check_fun)(const int&))
{
	for (auto element : my_arr)
	{
		if (check_fun(element)==true) // �̰��� �߿��ϴ�.
		{
			cout << element << " ";
		}
	}
	cout << endl;
}

void Projects_7::m7_9()
{
	// 7.9 �Լ� ������ (function pointer)
	cout << "funcPointer address : "<<funcPointer << endl;
	cout << "funcPointer() : " << funcPointer() << endl;

	// �Լ� ������ �����ϴ� ���
	int(*funcptr)();
	funcptr = funcPointer;
	cout << "funcPointer funcptr(): "<<funcptr() << endl;
	cout << endl;

	funcptr = otherfuncPointer;
	cout << "otherfuncPointer funcptr(): " << funcptr() << endl;
	cout << endl;

	int(*funcptr1)(int);
	funcptr1 = funcPointer1;
	cout << "funcPointer1 funcptr1(): " << funcptr1(1) << endl;
	cout << endl;

	// �Լ������͸� �Ķ��Ÿ�� �����ϴ� ��찡 �ִ�.
	array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };
	printArrayFuncPointer(my_array, isEven);
	printArrayFuncPointer(my_array, isOdd);
}
