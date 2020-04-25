#include "projects.h"

void Projects_3::m3_4()
{
	// 3.4 sizeof, 쉼표연산자 commma operator, 조건부연산자 conditional operator
	float s;
	// sizeof는 연산자이다. 
	cout << sizeof(float) << endl;
	cout << sizeof s << endl;
	cout << endl;

	// comma operator
	int x = 3;
	int y = 4;
	
	/*++x;
	++y;
	int z = y;*/

	int z = (++x, ++y);
	cout << x << " " << y << " " << z << endl;
	cout << endl;

	// comma operator가 아닌 경우
	int a, b;	// comma는 그냥 구분하는 용도로 사용되었다.
				// sum(1, 2);
	a = 1;
	b = 10;

	int c;
	//c = a, b; // 대입 연산자 우선순위에 의해서 c = a 가 되었다. 
	c = (++a, a + b); // comma operator의 현실적인 예제.
	cout << "c: " << c << endl;
	cout << endl;
	
	// conditional operator
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;
	cout << "Price : " << price << endl;
	// 위 conditional operator는 간단한 경우에만 사용한다.

	int num1 = 5;
	cout << ((5 % 2 == 0) ? "even" : "odd") << endl;

}
