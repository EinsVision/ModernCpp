#include "projects.h"

void Projects_6::m6_9()
{
	// 6.9 ������ ����� �迭 �ε���
	int value = 7;
	int* ptr = &value;
	
	cout << ptr - 1 << endl; // pointer�� data type�� �ʿ��� ������ ���⿡ �ִ�.
	cout << ptr << endl;	 // +- 1 �� �ϰԵǸ� 4byte ������� �����͸� ����Ų��.
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << endl; 

	int my_arr[] = { 9,7,5,3,1 }; // �޸� �ּҰ� �̿��� �ִ�.
	cout << my_arr[0] << " " << &my_arr[0] << endl;
	cout << my_arr[1] << " " << &my_arr[1] << endl;
	cout << my_arr[2] << " " << &my_arr[2] << endl;
	cout << my_arr[3] << " " << &my_arr[3] << endl;
	cout << my_arr[4] << " " << &my_arr[4] << endl;
	cout << endl;

	int* ptr_arr = my_arr;
	for (int i = 0; i < 5; i++)
	{
		cout << (ptr_arr + i) << endl;	// �ּҸ� ���
		cout << *(ptr_arr + i) << endl; // ���� ���
	}
	cout << endl;

	// ���ڿ��� ���
	char name[] = "Jack Jack";
	const int n_name = sizeof(name) / sizeof(char);
	for (int i = 0; i < n_name; i++)
	{
		//cout << name + i << endl;		
		cout << *(name + i) << endl;	// ���ڸ� ���
	}

}
