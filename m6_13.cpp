#include "projects.h"

void Projects_6::m6_13()
{
	// 6.13 포인터와 const

	int value1 = 5; // value의 값은 변화 시킬 수 없다.
	int* ptr1 = &value1;   // 하지만 value의 메모리 주소는 가지고 올 수 있다.
	*ptr1 = 7;  // de-referencing은 되지 않는다. 왜냐하면 value의 값을 바꿀 수 없기 때문이다.
	
	// case 1 
	const int value2 = 5; // value의 값은 변화 시킬 수 없다.
	const int* ptr2 = &value2;   // 하지만 value의 메모리 주소는 가지고 올 수 있다.
	// *ptr2 = 7;  // de-referencing은 되지 않는다. 왜냐하면 value의 값을 바꿀 수 없기 때문이다.
	cout << *ptr2 << endl; // value2의 주소를 알기 때문에 값을 출력할 수 있다.

	// case 2 
	int value3 = 5;
	const int* ptr3 = &value3; // 포인터가 가리키고 있는 주소에 있는 값을 안바꾸겠다는 의미
	// ptr3에 저장되는 주소의 값은 변경될 수 있다.
	// *ptr3 = 7; // 이렇게는 되지 않는다.
	value3 = 7;
	cout << value3 << endl;

	int value4 = 7;
	ptr3 = &value4; // ptr3에 저장되는 주소의 값은 변경될 수 있다.

	// case 3
	int value5 = 5;
	int* const ptr5 = &value5; // pointer에 있는 주소값을 못 바꾸도록 하겠다.
	// pointer 변수를 상수로 만들어주는 방법이다.
	*ptr5 = 7;
	cout << *ptr5 << endl;

	int value6 = 8;
	// ptr5 = &value6;		// pointer에 있는 주소값을 못 바꾸도록 하겠다.

	// case 4
	int value7 = 5;
	const int* const ptr7 = &value7; // 아무것도 안되는 구조이다.
	// *ptr7 = 10; // 값을 변경할 수 없다.

}
