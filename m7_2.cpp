#include "projects.h"

void callbyValue(int y) // 메모리에 y라는 변수가 선언이되고 7로 복사가 된다.
{
	cout << "callbyValue: " << &y << endl;
	cout << "이 경우 외부 함수에 영향을 주지 않는다." << endl;
	cout << endl;
}

void Projects_7::m7_2()
{
	// 7.2 값에 의한 전달 passing arguments by Value (call by value)
	callbyValue(7); // 값이 전달된다.

	int value = 5;
	callbyValue(value); // 값이 전달된다. value라는 변수가 들어가는 것이 아니다.
	cout << "value address: " << &value << endl;
		// callbyValue():	000000040B15F4E0
		// value address :  000000040B15F504

}
