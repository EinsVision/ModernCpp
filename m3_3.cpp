#include "projects.h"

int add(int a, int b)
{
	return a + b;
}

void Projects_3::m3_3()
{
	// 3.3 ���������� increment decrement operators
	int x = 5;
	int y = ++x;
	int z = --x;

	cout << "increment operator: " << y << endl;
	cout << "decrement operator: " << z << endl;
	cout << endl;

	int a = 5;
	int b = a++; // �� ������ �߸��ƴ�. (�̷��� �Ǽ����� ����.)
	int c = a--; // �� ������ �߸��ƴ�. (�̷��� �Ǽ����� ����.)

	cout << "increment operator: " << b << endl;
	cout << "increment operator: " << b << endl;
	cout << "decrement operator: " << c << endl;
	cout << "decrement operator: " << c << endl;
	cout << endl;

	int d = 6;
	int e = 6;
	cout << "increment operator: " << d++ << endl;
	cout << "increment operator: " << d++ << endl;
	cout << "increment operator: " << d << endl;
	cout << "decrement operator: " << e-- << endl;
	cout << "decrement operator: " << e-- << endl;
	cout << "decrement operator: " << e << endl;
	cout << endl;

	int f = 1;
	cout << "function: " << add(f, ++f) << endl;
	// ���� �̷��� ���α׷��� ��������. 

	f = 1;
	f = f++;
	cout << f << endl;
	// ���� �̷��� ���α׷��� ��������.
}
