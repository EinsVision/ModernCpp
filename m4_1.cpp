#include "projects.h"

namespace work1
{
	void doSomething()
	{
		cout << "Work 1" << endl;
	}
}

namespace work2
{
	void doSomething()
	{
		cout << "Work 2" << endl;
	}
}

void Projects_4::m4_1()
{
	// 4.1 지역 변수, 범위, 지속기간 (Scope // Duration : 메모리가 지속되는 개념) 
	// case 1 :: apple = 1; (Scope : apple 선언이 먼저 되어야 한다.)
	int apple = 0;
	apple = 1;

	cout << "apple 1: " << apple << endl;

	{
		//apple = 3;
		int apple = 3;// (int apple 이 살아 남을 수 있는 범위는 블록안에서만 가능하다.)
		cout << "apple 2: " << apple << endl; // name hiding 이 발생한다.
	}

	cout << "apple 3: " << apple << endl;
	cout << endl;

	work1::doSomething(); // namespace로 나누어 똑같은 이름의 함수를 사용할 수 있다.
	work2::doSomething();
	
}

// case 2 :: apple = 1; (Scope : apple 선언된 위치를 벗어남)