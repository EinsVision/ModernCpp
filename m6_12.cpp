#include "projects.h"

void Projects_6::m6_12()
{
	// 6.12 ���� �Ҵ� �迭
	// Runtime�� �迭�� ũ�⸦ �����Ѵ�.
	// const int length = 5;
	// int my_arr[length]; //���� �迭�� �Ҵ��Ѵ�.
	int arr_size;
	cin >> arr_size;

	int* my_arr = new int[arr_size]; // ���� �迭�� �Ҵ� �Ѵ�.
	// int* my_arr = new int[arr_size](); // ���� �迭�� �Ҵ� �Ѵ�. ��� 0���� �ʱ�ȭ
	// int* my_arr = new int[arr_size] {1,2,3,4,5}; // ���� �迭�� �Ҵ� �Ѵ�.
	for (int i = 0; i < arr_size; i++)
	{
		my_arr[i] = i;
	}

	for (int i = 0; i < arr_size; i++)
	{
		cout << my_arr[i] << " :: "<<&(my_arr[i])<<endl;
	}

	delete[] my_arr; // �ݵ�� ���� �迭�� �̷��� �����Ѵ�.

	//int* your_arr = new int[]{ 1,2,3,4,5 }; // �̷��Դ� �ȵȴ�.
	int* your_arr = new int[5] { 1, 2, 3, 4, 5 }; // �����ϴ�.
	delete[] your_arr;
	
	// resizing�� �Ǵ���? ���������δ� �ȵ����� ����� �ִ�.
	// Vector���� resizing�� ���ش�.

}
