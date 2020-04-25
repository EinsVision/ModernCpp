#include "projects.h"

void Projects_3::m3_6()
{
	// 3.6 �� ������ logical operators

	// logical NOT (!)
	bool x = true;
	cout << boolalpha;
	cout << "logical NOT: " << !x << endl;
	cout << endl;

	// logical AND (&&) 
	bool a = true;
	bool b = false;
	cout <<"logical AND: "<< (a && b) << endl;
	cout << endl;

	// logical OR (||)
	int v = 1;
	if (v == 0 || v == 1)
	{
		cout << "v is 0 or 1" << endl;
	}
	cout << endl;

	// short circuit evaluation
	// �� ���꿡�� ���� �ϳ��� ���� ����� Ȯ���� �� �� ���� ��, �ڿ� ������ ���ڸ� Ȯ������ �ʰ� �ٷ� ���� ���� ����̴�.
	int c = 2;
	int d = 2;

	if (c == 1 && d++ == 2) // ������ ���� ����ϰ� false�� ������ ����� ���� �ʴ´�.
	{
		
	}
	cout << d << endl;
	cout << endl;

	// De Morgan's Law ( �й��Ģ�� ������� �ʴ´�.)
	cout << "De Morgan's Law: " << !(c && d) << endl;
	cout << "De Morgan's Law: " << (!c && !d) << endl;
	cout << endl;
	// XOR 
	// case 1: false false false
	// case 2: false true true
	// case 3: true false true
	// case 4: true true false
	
	// case 1: false false false
	a = false;
	b = false;
	bool y = false;

	y = a ^ b;
	cout << "XOR: " << y << endl;

	// case 2: false true true
	a = false;
	b = true;
	y = false;
	y = a ^ b;
	cout << "XOR: " << y << endl;

	// case 3: true false true
	a = true;
	b = false;
	y = false;
	y = a ^ b;
	cout << "XOR: " << y << endl;

	// case 4: true true false
	a = true;
	b = true;
	y = false;
	y = a ^ b;
	cout << "XOR: " << y << endl;
	cout << endl; 

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	// && ������ �켱������ || ���� ����. 
	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	cout << r1 << endl;
	cout << r2 << endl;
}
