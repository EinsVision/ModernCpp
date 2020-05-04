#include "projects.h"

void constRef(const int& a)
{
	cout << a << endl;
}

void Projects_6::m6_15()
{
	// 6.15 ������ const
	int x = 5;
	const int& ref = x;
	// ref = 7; reference ������ const�� ������ ���� ������ �� ����.
	cout << "const int& ref : " << ref << endl;
	cout << endl;

	// case 1 (�̰��� ������ Ư���� ������ constRef �Լ��� ���� �� �ִ�.)
	const int& ref_1 = 3 + 4;
	cout << ref_1 << endl;
	cout << &ref_1 << endl;
	cout << endl;

	// case 2
	const int val_2 = 3 + 4; 
	cout << val_2 << endl;
	cout << &val_2 << endl;
	cout << endl;

	// const int& val_2 = 3 + 4; �� ��� �ٷ� ���ڸ� ���� �� �־ ���ϴ�.
	int a = 1;
	constRef(4); // (const int& a) �� �Է� �Ķ���Ͷ� �ٷ� 4�� ���� �� �ִ�. 
	constRef(a + 6);
}
