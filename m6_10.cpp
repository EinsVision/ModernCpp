#include "projects.h"

const char* getName() // ��ȯ���� const char* �� �� �� �ִ�.
{
	return "Jack Jack";
}

void Projects_6::m6_10()
{
	// 6.10 C��� ��Ÿ���� ���ڿ� �ɺ��� ���
	// char* name = "Jack Jack"; // Jack Jack�� ��� ���ڿ��� �޸� ������ ����.
	const char* name1 = "Jack Jack "; // ��ȣ���� ���ó�� ����� �� �ִ�.
	const char* name2 = "Jack Jack ";
	cout << name1 << endl;
	cout << &name1 << endl;
	cout << endl; 

	cout << name2 << endl;
	cout << &name2 << endl;
	cout << endl;

	cout << "getName(): "<<getName() << endl;
}
