#include "projects.h"

void Projects_3::m3_5()
{
	// 3.5 관계연산자 relational operators ( <, >, ==, != )
	bool button = false;
	while(button)
	{ 
		int x, y;
		cin >> x >> y;
		cout << " x: " << x << " y: " << y << endl;
		if (x == y)
		{
			cout << "equal" << endl;
		}
		if (x !=y)
		{
			cout << "Not equal " << endl;
		}
		if (x > y)
		{
			cout << "x is bigger than y " << endl;
		}
		if (x < y)
		{
			cout << "y is bigger than x " << endl;
		}
		if (x >= y)
		{
			cout << "(x >= y)" << endl;
		}
		if (x <= y)
		{
			cout << "(x <= y)" << endl;
		}
	}

	// 아래 두개의 값이 다르다. 충격적인 사실!!
	double d1(100 - 99.99);
	double d2(10 - 9.99);
	
	if (d1 == d2)
	{
		cout << " equal: " << d1 << " " << d2 << endl;
	}
	else
	{
		cout << " Not equal: " << d1 << " " << d2 << endl;
	}
}
