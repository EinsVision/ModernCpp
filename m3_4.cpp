#include "projects.h"

void Projects_3::m3_4()
{
	// 3.4 sizeof, ��ǥ������ commma operator, ���Ǻο����� conditional operator
	float s;
	// sizeof�� �������̴�. 
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

	// comma operator�� �ƴ� ���
	int a, b;	// comma�� �׳� �����ϴ� �뵵�� ���Ǿ���.
				// sum(1, 2);
	a = 1;
	b = 10;

	int c;
	//c = a, b; // ���� ������ �켱������ ���ؼ� c = a �� �Ǿ���. 
	c = (++a, a + b); // comma operator�� �������� ����.
	cout << "c: " << c << endl;
	cout << endl;
	
	// conditional operator
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;
	cout << "Price : " << price << endl;
	// �� conditional operator�� ������ ��쿡�� ����Ѵ�.

	int num1 = 5;
	cout << ((5 % 2 == 0) ? "even" : "odd") << endl;

}
