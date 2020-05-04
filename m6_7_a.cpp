#include "projects.h"

void check_nullptr(double* ptr)
{
	cout << " address of ptr in check_nullptr() : " << &ptr << endl;
	if (ptr != nullptr)
	{
		cout << "ptr_c isn't nullptr." << endl;
	}
	else
	{
		cout << "ptr_c is nullptr." << endl;
	}
}

void Projects_6::m6_7_a()
{
	// 6.7a 널 포인터 Null Pointer
	// 이렇게 초기화 해야하는 이유: 
	double* ptr_a = 0;		 // c- style
	double* ptr_b = NULL;	 // c- style
	double* ptr_c = nullptr; // mordern C++
	double x = 5.0;
	if (ptr_c != nullptr)
	{
		cout << "ptr_c isn't nullptr." << endl;
	}
	else
	{
		cout << "ptr_c is nullptr." << endl;
	}
	cout << endl;

	check_nullptr(ptr_c);
	//check_nullptr(&x);
	cout << " address of ptr_c in main(): " << &ptr_c << endl;
	// memory의 주소가 다르다. 다른 메모리를 사용하고 있다.
}
