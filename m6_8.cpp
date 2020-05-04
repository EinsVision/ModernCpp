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

void printmy_Array(int arr[]) // �迭�� pointer�� ���� ��ȯ�ȴ�.
{
	cout <<"sizeof(arr): "<< sizeof(arr) << endl;
	int* ptr_arr = arr;

	cout << "*arr: " << ptr_arr[0] << endl;
	cout << "*arr: " << ptr_arr[1] << endl;
	cout << "*arr: " << ptr_arr[2] << endl;
	cout << "*arr: " << ptr_arr[3] << endl;
	cout << "*arr: " << ptr_arr[4] << endl;

	ptr_arr[0] = 100; // �Լ��ۿ����� ���� ��ȭ��ų �� �ִ�.
}

void Projects_6::m6_8()
{
	// 6.8 �����Ϳ� ���� �迭
	// �����Ϳ� �迭�� ����� ���� ����.
	int my_arr[5] = { 9,7,5,3,1 };
	cout << "my_arr : " << my_arr << endl;
	cout << "my_arr[0]: " << my_arr[0] << endl;
	cout << "&(my_arr[0]) : " << &(my_arr[0]) << endl;
	cout << "*(my_arr): " << *(my_arr) << endl;
	cout << endl; 
	// ���� �迭�� �ᱹ���� �������̴�. 
	char name[] = "jackjack";
	cout << "*(name): " << *(name) << endl;
	cout << endl;

	int* ptr = my_arr;
	cout << "ptr : " << ptr << endl;
	cout << "*(ptr): " << *(ptr) << endl;
	cout << "ptr address : " << &(ptr) << endl;
	cout << endl;

	// �Լ� �Ķ���ͷ� �ѱ� ��� ������ ���� �� �ִ�.
	printmy_Array(my_arr); // pointer size�� 8�� ���´�.
	cout << endl;
	printmy_Array(my_arr); // �Լ� �ۿ��� ���� ��ȭ��Ű�� �Լ� �ȿ����� ���� ��ȭ�ȴ�.
	cout << endl;

	// �Լ� �Ķ���ͷ� ����ü�� �ѱ� �� �� �ִ�.
	my_struct ms;
	cout << "Element Number: "<<ms.your_arr[0] << endl;

	// �迭�� struct�� class�� ����ִ� ���� pointer�� ���� ��ȯ�� ���� �ʰ�, �迭 ��ü�� �Ķ��Ÿ�� ���޵ȴ�.
	print_struct(ms);
	print_struct_ptr(&ms);
}
