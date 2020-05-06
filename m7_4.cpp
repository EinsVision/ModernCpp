#include "projects.h"

void printValue(int* ptr)
{
	cout << "printValue: " << *ptr << endl;
	cout << "printValue address: " << ptr << endl;
	cout << "int*ptr pointer address: " << &ptr << endl;
	*ptr = 2; // 함수밖에서 main 함수의 값을 변화시키고 있다.
	// 즉, 메모리 주소를 찾아가서 변수의 값을 변화시키기 때문이다.
	cout << endl;
}

void Projects_7::m7_4()
{
	// 7.4 주소에 의한 인수 전달 (Call by Address)
	int value = 5;
	cout << "value: " << value << "  " << "address: " << &value << endl;

	int* ptr = &value;
	cout << "ptr address in Main: " << &ptr << endl; // 여기서 ptr주소와 
	// printValue()의 ptr 주소가 다르다. 결귝 pointer도 주소값의 의한 전달이다.
	cout << endl; 
	printValue(ptr);
	printValue(&value);
}
