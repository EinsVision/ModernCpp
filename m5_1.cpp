#include "projects.h"

void Projects_5::m5_1()
{
	// 5.1 제어 흐름 개요 Control flow (중단 Halt)

	// 1. 중단 Halt
	// 2. 점프 Jump (goto, break, continue)
	// 3. 조건분기 Conditional branches (if, switch)
	// 4. 반복 Loops (while, do while, for)
	// 5. 예외처리 Exceptions (try, catch, throw)

	cout << "I love you" << endl;

	return;		// 1. 중단 Halt return type에 맞춰줘야 한다.
	exit(0);    // 1. 중단 Halt 급하게 빠져나가는 상황이다. (무조건 종료되어야 하는 상황에서 쓰인다.)
	// 사랑고백 안 받아 주고 중간에 도망가는 상황
	cout << "I love you too" << endl;
}
