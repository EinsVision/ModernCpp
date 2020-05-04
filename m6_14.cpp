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

void printNvalue(int& n) // reference를 쓰게되면 아얘 변수 자체가 넘어가게 된다.
{
	cout << "address in printNvalue: " << &n << endl;
	n = 10;
	cout << "In printNValue" << n << endl;
}

void printElements(int(&arr)[5]) // element 개수가 꼭 넣어야한다.
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Projects_6::m6_14()
{
	// 6.14 참조 변수 reference variable
	int value = 5;
	int* ptr = &value;

	int& ref = value; // ref는 value의 또 다른 별명처럼 사용할 수 있다.
	//int& ref; // reference는 반드시 초기화 되어야 한다.리터럴은 들어 갈 수 없다.
	cout << "ref: "<<ref << endl;
	ref = 10;
	cout << "value: "<<value << endl;

	cout << "value address: " << &value << endl; 
	cout << "ref address: " << &ref << endl;      // value의 주소를 공유한다.
	cout << "ptr address: " << ptr << endl;
	cout << endl;
	// reference가 Reassginedment 될 수 있을까?
	int value1 = 7;
	int value2 = 8;
	int& ref1 = value1;
	cout << "Before Reassginedment :" << ref1 << endl;
	ref1 = value2;
	cout <<"After Reassginedment :" <<ref1 << endl;
	cout << endl;

	// 함수를 만들어 Reference를 확인해 보자.

	int n = 5;
	cout << n << endl;
	cout << "address in main: " << &n << endl;
	printNvalue(n); // 포인터로 할 수 도있고, Reference를 써서 해도 된다.
	cout << n << endl;
	cout << endl;

	// void printElements(int(&arr)[5]) // element 개수가 꼭 넣어야한다.
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	printElements(arr);
	cout << endl;

	// reference의 유용한 성질
	h2 hirakey;

	int &n2 = hirakey.h_1.n1;
	n2 = 15;
	cout << hirakey.h_1.n1 << endl;


}
