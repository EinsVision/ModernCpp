#include "projects.h"

void Projects_6::m6_11()
{
	//  6.11 �޸� ���� �Ҵ� new�� delete (Dynamic memory allocation)
	// int my_arr[10000000]; // �������� memory�� �Ҵ��ϴ� ����̴�.
	// �������� �Ҵ��ϴ� memory�� stack�� ����. stack�� memory�� �۴�.
	int var1 = 6;		 // 1. 4byte�� �޸𸮸� �Ҵ��ش޶�! 
	int* var2 = new int; // 2. 4byte�� �޸𸮸� �Ҵ��ش޶�! 
	*var2 = 7;

	int* var3 = new int(8); // 2-1. 4byte�� �޸𸮸� �Ҵ��ش޶�! 
	int* var4 = new int{ 9 }; // 2-2. 4byte�� �޸𸮸� �Ҵ��ش޶�! 

	cout << var1 << endl;
	cout << *var2 << endl;
	cout << *var3 << endl;
	cout << *var4 << endl;
	cout << "address: " << var2 << endl;
	cout << "address: " << var3 << endl;
	cout << "address: " << var4 << endl;
	cout << endl;

	// �Ҵ���� memory�� OS���� ������� �Ѵ�.
	delete var2;
	delete var3;
	delete var4;
	var2 = nullptr;
	var3 = nullptr;
	var4 = nullptr;

	if (var2 != nullptr) // var2 = nullptr �׸��� �Ʒ� ����� �����ߴ�.
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

	// ������ ������ ��츦 �ٷ��.
	int* ptr1 = new int{ 7 };
	int* ptr2 = ptr1;

	delete ptr1;
	ptr1 = nullptr;
	ptr2 = nullptr;
	// �̷��ԵǸ� ������ �ȴ�.
	if (ptr2 != nullptr)
	{
		cout << *ptr2 << endl;
	}
	
	// memory leak
	while (true) // �޸𸮸� ����� ���� �����ؼ� memory leak�� �߻��Ѵ�.
	{
		int* ptr = new int{ 9 };
		cout << *ptr << endl;

		delete ptr; // �� �ڵ带 �־���� memory leak�� �߻����� �ʴ´�.
	}
}
