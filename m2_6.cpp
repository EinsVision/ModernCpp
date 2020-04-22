#include "projects.h"

bool isEqual(int a, int b)
{
	bool result = false;

	if (a == b)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	return result;
}

void Projects::m2_6()
{
	// 2.6 ���� �ڷ����� ���ǹ� if
	// true (1) / false (0) �ʱ�ȭ �� �� �ִ�
	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	b3 = false;
	cout << boolalpha;
	cout << "b3: " << b3 << endl;
	cout << "b1: " << b1 << endl;
	//cout << noboolalpha;

	// Not operator�� ����
	cout << "b3: " << !b3 << endl;
	cout << "b1: " << !b1 << endl;
	// cout << noboolalpha;

	// && operator�� ����
	cout << "&& operator: " << (true && true) << endl; // �̶��� true
	cout << "&& operator: " << (false && true) << endl;
	cout << "&& operator: " << (true && false) << endl;
	cout << "&& operator: " << (false && false) << endl;

	//|| operator�� ����
	cout << "|| operator: " << (true || true) << endl; 
	cout << "|| operator: " << (false || true) << endl;
	cout << "|| operator: " << (true || false) << endl;
	cout << "|| operator: " << (false || false) << endl;

	if (true)
		cout << "This is ture. " << endl;
	else
		cout << "This is false. " << endl;

	// bool �� �̿��� �Լ� �����
	int num1 = 5;
	int num2 = 5;
	bool result = 0;
	result = isEqual(num1, num2);
	cout << boolalpha;
	cout << "isEqual: " << result << endl;

}
