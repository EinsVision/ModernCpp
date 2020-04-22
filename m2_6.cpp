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
	// 2.6 블리언 자료형과 조건문 if
	// true (1) / false (0) 초기화 할 수 있다
	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	b3 = false;
	cout << boolalpha;
	cout << "b3: " << b3 << endl;
	cout << "b1: " << b1 << endl;
	//cout << noboolalpha;

	// Not operator도 있음
	cout << "b3: " << !b3 << endl;
	cout << "b1: " << !b1 << endl;
	// cout << noboolalpha;

	// && operator도 있음
	cout << "&& operator: " << (true && true) << endl; // 이때만 true
	cout << "&& operator: " << (false && true) << endl;
	cout << "&& operator: " << (true && false) << endl;
	cout << "&& operator: " << (false && false) << endl;

	//|| operator도 있음
	cout << "|| operator: " << (true || true) << endl; 
	cout << "|| operator: " << (false || true) << endl;
	cout << "|| operator: " << (true || false) << endl;
	cout << "|| operator: " << (false || false) << endl;

	if (true)
		cout << "This is ture. " << endl;
	else
		cout << "This is false. " << endl;

	// bool 을 이용한 함수 만들기
	int num1 = 5;
	int num2 = 5;
	bool result = 0;
	result = isEqual(num1, num2);
	cout << boolalpha;
	cout << "isEqual: " << result << endl;

}
