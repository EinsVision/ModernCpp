#include "projects.h"

int funcPointer() //함수도 포인터이다. 함수도 메모리에 들어간다.
{
	return 5;
}

int otherfuncPointer() //함수도 포인터이다. 함수도 메모리에 들어간다.
{
	return 10;
}

int funcPointer1(int x)
{
	return 15;
}

bool isEven(const int& number) // 짝수면 true를 return 한다.
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

bool isOdd(const int& number) // 홀수면 true를 return 한다.
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
												  // 여기에 기능을 넣어준다.
void printArrayFuncPointer(array<int, 10>& my_arr, bool (*check_fun)(const int&))
{
	for (auto element : my_arr)
	{
		if (check_fun(element)==true) // 이곳이 중요하다.
		{
			cout << element << " ";
		}
	}
	cout << endl;
}

void Projects_7::m7_9()
{
	// 7.9 함수 포인터 (function pointer)
	cout << "funcPointer address : "<<funcPointer << endl;
	cout << "funcPointer() : " << funcPointer() << endl;

	// 함수 포인터 선언하는 방법
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

	// 함수포인터를 파라메타로 전달하는 경우가 있다.
	array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };
	printArrayFuncPointer(my_array, isEven);
	printArrayFuncPointer(my_array, isOdd);
}
