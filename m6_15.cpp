#include "projects.h"

void constRef(const int& a)
{
	cout << a << endl;
}

void Projects_6::m6_15()
{
	// 6.15 참조와 const
	int x = 5;
	const int& ref = x;
	// ref = 7; reference 변수에 const가 붙으면 값을 수정할 수 없다.
	cout << "const int& ref : " << ref << endl;
	cout << endl;

	// case 1 (이것이 가능한 특성을 가지고 constRef 함수를 만들 수 있다.)
	const int& ref_1 = 3 + 4;
	cout << ref_1 << endl;
	cout << &ref_1 << endl;
	cout << endl;

	// case 2
	const int val_2 = 3 + 4; 
	cout << val_2 << endl;
	cout << &val_2 << endl;
	cout << endl;

	// const int& val_2 = 3 + 4; 의 경우 바로 숫자를 넣을 수 있어서 편하다.
	int a = 1;
	constRef(4); // (const int& a) 가 입력 파라메터라서 바로 4를 넣을 수 있다. 
	constRef(a + 6);
}
