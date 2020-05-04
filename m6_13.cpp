#include "projects.h"

void Projects_6::m6_13()
{
	// 6.13 �����Ϳ� const

	int value1 = 5; // value�� ���� ��ȭ ��ų �� ����.
	int* ptr1 = &value1;   // ������ value�� �޸� �ּҴ� ������ �� �� �ִ�.
	*ptr1 = 7;  // de-referencing�� ���� �ʴ´�. �ֳ��ϸ� value�� ���� �ٲ� �� ���� �����̴�.
	
	// case 1 
	const int value2 = 5; // value�� ���� ��ȭ ��ų �� ����.
	const int* ptr2 = &value2;   // ������ value�� �޸� �ּҴ� ������ �� �� �ִ�.
	// *ptr2 = 7;  // de-referencing�� ���� �ʴ´�. �ֳ��ϸ� value�� ���� �ٲ� �� ���� �����̴�.
	cout << *ptr2 << endl; // value2�� �ּҸ� �˱� ������ ���� ����� �� �ִ�.

	// case 2 
	int value3 = 5;
	const int* ptr3 = &value3; // �����Ͱ� ����Ű�� �ִ� �ּҿ� �ִ� ���� �ȹٲٰڴٴ� �ǹ�
	// ptr3�� ����Ǵ� �ּ��� ���� ����� �� �ִ�.
	// *ptr3 = 7; // �̷��Դ� ���� �ʴ´�.
	value3 = 7;
	cout << value3 << endl;

	int value4 = 7;
	ptr3 = &value4; // ptr3�� ����Ǵ� �ּ��� ���� ����� �� �ִ�.

	// case 3
	int value5 = 5;
	int* const ptr5 = &value5; // pointer�� �ִ� �ּҰ��� �� �ٲٵ��� �ϰڴ�.
	// pointer ������ ����� ������ִ� ����̴�.
	*ptr5 = 7;
	cout << *ptr5 << endl;

	int value6 = 8;
	// ptr5 = &value6;		// pointer�� �ִ� �ּҰ��� �� �ٲٵ��� �ϰڴ�.

	// case 4
	int value7 = 5;
	const int* const ptr7 = &value7; // �ƹ��͵� �ȵǴ� �����̴�.
	// *ptr7 = 10; // ���� ������ �� ����.

}
