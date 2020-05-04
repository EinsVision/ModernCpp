#include "projects.h"

struct h1
{
	int n1;
	float n2;
};

struct h2
{
	h1 h_1;
};

void printNvalue(int& n) // reference�� ���ԵǸ� �ƾ� ���� ��ü�� �Ѿ�� �ȴ�.
{
	cout << "address in printNvalue: " << &n << endl;
	n = 10;
	cout << "In printNValue" << n << endl;
}

void printElements(int(&arr)[5]) // element ������ �� �־���Ѵ�.
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Projects_6::m6_14()
{
	// 6.14 ���� ���� reference variable
	int value = 5;
	int* ptr = &value;

	int& ref = value; // ref�� value�� �� �ٸ� ����ó�� ����� �� �ִ�.
	//int& ref; // reference�� �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�.���ͷ��� ��� �� �� ����.
	cout << "ref: "<<ref << endl;
	ref = 10;
	cout << "value: "<<value << endl;

	cout << "value address: " << &value << endl; 
	cout << "ref address: " << &ref << endl;      // value�� �ּҸ� �����Ѵ�.
	cout << "ptr address: " << ptr << endl;
	cout << endl;
	// reference�� Reassginedment �� �� ������?
	int value1 = 7;
	int value2 = 8;
	int& ref1 = value1;
	cout << "Before Reassginedment :" << ref1 << endl;
	ref1 = value2;
	cout <<"After Reassginedment :" <<ref1 << endl;
	cout << endl;

	// �Լ��� ����� Reference�� Ȯ���� ����.

	int n = 5;
	cout << n << endl;
	cout << "address in main: " << &n << endl;
	printNvalue(n); // �����ͷ� �� �� ���ְ�, Reference�� �Ἥ �ص� �ȴ�.
	cout << n << endl;
	cout << endl;

	// void printElements(int(&arr)[5]) // element ������ �� �־���Ѵ�.
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	printElements(arr);
	cout << endl;

	// reference�� ������ ����
	h2 hirakey;

	int &n2 = hirakey.h_1.n1;
	n2 = 15;
	cout << hirakey.h_1.n1 << endl;


}
