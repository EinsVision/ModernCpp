#include "projects.h"

void printArray_assert(const array<int, 5>& arr, const int& idx)
{
	assert(idx >= 0);
	assert(idx <= arr.size() - 1); // �ΰ��� ��ĥ �� ������ �ɰ��°� ����.

	cout << arr[idx] << endl;
}

void Projects_7::m7_14()
{
	// 7.14 �ܾ��ϱ� assert

	int num = 5;

	assert(num == 5); // ��� ������ ������ �˷��ش�. 
	// ������ release mode������ �������� �ʴ´�.
	// ���⼭ num==5 �϶�, �� ���α׷��� ���������� ������ ���̶�� �˷��ֱ� 
	// ���� assert(num == 5) ��� �� ���̴�.
	
	array<int, 5> my_arr{ 1,2,3,4,5 };
	printArray_assert(my_arr, 1);

	// compile time�� error�� �˷��ִ� static_assert�� �ִ�.
	const int num2 = 3; 

	static_assert(num2 == 3, "num2 should be 3. ");
}
