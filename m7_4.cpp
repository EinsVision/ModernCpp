#include "projects.h"

void printValue(int* ptr)
{
	cout << "printValue: " << *ptr << endl;
	cout << "printValue address: " << ptr << endl;
	cout << "int*ptr pointer address: " << &ptr << endl;
	*ptr = 2; // �Լ��ۿ��� main �Լ��� ���� ��ȭ��Ű�� �ִ�.
	// ��, �޸� �ּҸ� ã�ư��� ������ ���� ��ȭ��Ű�� �����̴�.
	cout << endl;
}

void Projects_7::m7_4()
{
	// 7.4 �ּҿ� ���� �μ� ���� (Call by Address)
	int value = 5;
	cout << "value: " << value << "  " << "address: " << &value << endl;

	int* ptr = &value;
	cout << "ptr address in Main: " << &ptr << endl; // ���⼭ ptr�ּҿ� 
	// printValue()�� ptr �ּҰ� �ٸ���. ��� pointer�� �ּҰ��� ���� �����̴�.
	cout << endl; 
	printValue(ptr);
	printValue(&value);
}
