#include "projects.h"

void callbyValue(int y) // �޸𸮿� y��� ������ �����̵ǰ� 7�� ���簡 �ȴ�.
{
	cout << "callbyValue: " << &y << endl;
	cout << "�� ��� �ܺ� �Լ��� ������ ���� �ʴ´�." << endl;
	cout << endl;
}

void Projects_7::m7_2()
{
	// 7.2 ���� ���� ���� passing arguments by Value (call by value)
	callbyValue(7); // ���� ���޵ȴ�.

	int value = 5;
	callbyValue(value); // ���� ���޵ȴ�. value��� ������ ���� ���� �ƴϴ�.
	cout << "value address: " << &value << endl;
		// callbyValue():	000000040B15F4E0
		// value address :  000000040B15F504

}
