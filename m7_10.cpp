#include "projects.h"
int g_i = 0; // ���������� ���� ���� memory�� �ڸ��� ��´�. 
			 // ������� ���ܼ� ���� �������� ������� �����̴�.

int second(int x)
{
	return 2 * x;
}

int first(int x)
{
	int y = 3;
	return second(x + y);
}

void initArray()
{
	int* ptr2 = new int[1000];
	// delete[] ptr2; �ּҸ� ������� ������ �Ҿ������ ��찡 �ȴ�.
	// �ֳ��ϸ� initArray()�� ����Ǹ� stack�� �׿��ִ� initArray()�� 
	// int* ptr2�� ������ ������ �����̴�. �� ���, delete[] ptr2; �� ���� ������
	// �޸� ������ �߻��Ѵ�.
}
void Projects_7::m7_10() // main �Լ��� stack ������ ���δ�.
{
	// 7.10 ���ð� �� the stack and the heap
	using namespace std;
	int a = 1, b;		 // int a, int b ������ stack ������ ���δ�.
	b = first(a);		 // �� ������ fisrt() �� int x, int y ������ stack�� ���δ�.
	cout << b << endl;	 // �� ������ second() �� int x ������ stack�� ���δ�.



	// stack�� ������ ������. ������ ������ size�� �۴�.
	// int array[10000000]; �̷��� ũ�� ���� array�� �����ϸ� stack overflow�� �߻��Ѵ�.
	// ���ȣ���ؼ� stack overflow�� �߻��� ���� �ִ�.

	int* ptr = nullptr;		// main �Լ��� int* ptr�� stack ������ ���δ�.
	ptr = new int[100000];  // heap ������ data�� �����. 
	// ū data�� �ٷ� �� �ִ� �����̴�. �޸𸮰� ��� ������ �𸣴� ������ �ִ�.
	delete[] ptr;			// heap�� �ִ� �޸𸮸� OS�� ��ȯ�Ѵ�.
	ptr = nullptr;			// �׷��� ������ ������ �ʵ��� nullptr�� assignment�Ѵ�.

	// �޸� ������ �߻��ϴ� ���!!
	initArray();
}
