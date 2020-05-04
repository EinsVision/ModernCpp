#include "projects.h"

void Projects_6::m6_11()
{
	//  6.11 메모리 동적 할당 new와 delete (Dynamic memory allocation)
	// int my_arr[10000000]; // 정적으로 memory를 할당하는 방식이다.
	// 정적으로 할당하는 memory는 stack에 들어간다. stack은 memory가 작다.
	int var1 = 6;		 // 1. 4byte의 메모리를 할당해달라! 
	int* var2 = new int; // 2. 4byte의 메모리를 할당해달라! 
	*var2 = 7;

	int* var3 = new int(8); // 2-1. 4byte의 메모리를 할당해달라! 
	int* var4 = new int{ 9 }; // 2-2. 4byte의 메모리를 할당해달라! 

	cout << var1 << endl;
	cout << *var2 << endl;
	cout << *var3 << endl;
	cout << *var4 << endl;
	cout << "address: " << var2 << endl;
	cout << "address: " << var3 << endl;
	cout << "address: " << var4 << endl;
	cout << endl;

	// 할당받은 memory를 OS에게 돌려줘야 한다.
	delete var2;
	delete var3;
	delete var4;
	var2 = nullptr;
	var3 = nullptr;
	var4 = nullptr;

	if (var2 != nullptr) // var2 = nullptr 그리고 아래 방법을 보완했다.
	{
		cout << var2 << endl;
		cout << "De-referencing: " << *var2 << endl;
	}

	if (var3 != nullptr)
	{
		cout << var3 << endl;
		cout << "De-referencing: " << *var3 << endl;
	}

	if (var4 != nullptr)
	{
		cout << var4 << endl;
		cout << "De-referencing: " << *var4 << endl;
	}

	// cout << var2 << endl;
	// cout << var3 << endl;
	// cout << var4 << endl;

	// cout << "De-referencing: " << *var2 << endl;
	// cout << "De-referencing: " << *var3 << endl;
	// cout << "De-referencing: " << *var4 << endl;

	// 다음은 문제가 경우를 다룬다.
	int* ptr1 = new int{ 7 };
	int* ptr2 = ptr1;

	delete ptr1;
	ptr1 = nullptr;
	ptr2 = nullptr;
	// 이렇게되면 문제가 된다.
	if (ptr2 != nullptr)
	{
		cout << *ptr2 << endl;
	}
	
	// memory leak
	while (true) // 메모리를 지우는 것을 깜빡해서 memory leak이 발생한다.
	{
		int* ptr = new int{ 9 };
		cout << *ptr << endl;

		delete ptr; // 이 코드를 넣어줘야 memory leak이 발생하지 않는다.
	}
}
