#include "projects.h"

int add(int a, int b)
{
	return a + b;
}

void Projects_3::m3_3()
{
	// 3.3 증감연산자 increment decrement operators
	int x = 5;
	int y = ++x;
	int z = --x;

	cout << "increment operator: " << y << endl;
	cout << "decrement operator: " << z << endl;
	cout << endl;

	int a = 5;
	int b = a++; // 이 대입은 잘못됐다. (이러한 실수하지 말자.)
	int c = a--; // 이 대입은 잘못됐다. (이러한 실수하지 말자.)

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
	// 절대 이렇게 프로그램을 하지말자. 

	f = 1;
	f = f++;
	cout << f << endl;
	// 절대 이렇게 프로그램을 하지말자.
}
