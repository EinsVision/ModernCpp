#include "projects.h"

struct my_struct
{
	int your_arr[5] = { 1,2,3,4,5 };
};

void print_struct(my_struct ms)
{
	cout << "my_struct number: "<<sizeof(ms.your_arr) << endl;
}

void print_struct_ptr(my_struct* ms)
{
	cout << "print_struct_ptr number: " << sizeof((*ms).your_arr) << endl;
}

void printmy_Array(int arr[]) // 배열이 pointer로 강제 변환된다.
{
	cout <<"sizeof(arr): "<< sizeof(arr) << endl;
	int* ptr_arr = arr;

	cout << "*arr: " << ptr_arr[0] << endl;
	cout << "*arr: " << ptr_arr[1] << endl;
	cout << "*arr: " << ptr_arr[2] << endl;
	cout << "*arr: " << ptr_arr[3] << endl;
	cout << "*arr: " << ptr_arr[4] << endl;

	ptr_arr[0] = 100; // 함수밖에서도 값을 변화시킬 수 있다.
}

void Projects_6::m6_8()
{
	// 6.8 포인터와 정적 배열
	// 포인터와 배열의 관계는 둘이 같다.
	int my_arr[5] = { 9,7,5,3,1 };
	cout << "my_arr : " << my_arr << endl;
	cout << "my_arr[0]: " << my_arr[0] << endl;
	cout << "&(my_arr[0]) : " << &(my_arr[0]) << endl;
	cout << "*(my_arr): " << *(my_arr) << endl;
	cout << endl; 
	// 정적 배열도 결국에는 포인터이다. 
	char name[] = "jackjack";
	cout << "*(name): " << *(name) << endl;
	cout << endl;

	int* ptr = my_arr;
	cout << "ptr : " << ptr << endl;
	cout << "*(ptr): " << *(ptr) << endl;
	cout << "ptr address : " << &(ptr) << endl;
	cout << endl;

	// 함수 파라메터로 넘길 경우 문제가 생길 수 있다.
	printmy_Array(my_arr); // pointer size인 8이 나온다.
	cout << endl;
	printmy_Array(my_arr); // 함수 밖에서 값을 변화시키면 함수 안에서도 값이 변화된다.
	cout << endl;

	// 함수 파라메터로 구조체를 넘길 수 도 있다.
	my_struct ms;
	cout << "Element Number: "<<ms.your_arr[0] << endl;

	// 배열이 struct나 class에 들어있는 경우는 pointer로 강제 변환이 되지 않고, 배열 자체가 파라메타로 전달된다.
	print_struct(ms);
	print_struct_ptr(&ms);
}
