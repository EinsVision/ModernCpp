#include "projects.h"

void Projects_6::m6_12()
{
	// 6.12 동적 할당 배열
	// Runtime에 배열의 크기를 결정한다.
	// const int length = 5;
	// int my_arr[length]; //정적 배열을 할당한다.
	int arr_size;
	cin >> arr_size;

	int* my_arr = new int[arr_size]; // 동적 배열을 할당 한다.
	// int* my_arr = new int[arr_size](); // 동적 배열을 할당 한다. 모두 0으로 초기화
	// int* my_arr = new int[arr_size] {1,2,3,4,5}; // 동적 배열을 할당 한다.
	for (int i = 0; i < arr_size; i++)
	{
		my_arr[i] = i;
	}

	for (int i = 0; i < arr_size; i++)
	{
		cout << my_arr[i] << " :: "<<&(my_arr[i])<<endl;
	}

	delete[] my_arr; // 반드시 동적 배열은 이렇게 해제한다.

	//int* your_arr = new int[]{ 1,2,3,4,5 }; // 이렇게는 안된다.
	int* your_arr = new int[5] { 1, 2, 3, 4, 5 }; // 가능하다.
	delete[] your_arr;
	
	// resizing이 되는지? 직접적으로는 안되지만 방법은 있다.
	// Vector에서 resizing도 해준다.

}
