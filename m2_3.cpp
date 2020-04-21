#include "projects.h"

void Projects::m2_3()
{
	// 2.3 고정너비정수
	// 멀티 플랫폼에서 사용될 수 있다. 
	// compile 마다 변수가 2 byte 혹은 4 byte 일 수 있는 불확실성이 있다.
	// 어떤 플랫폼이던지 똑같은 데이터 사이즈를 사용하는 고정너비정수를 사용

	int16_t i(5);
	int8_t myint = 65; 
	cout << myint << endl;

	int_fast8_t fi(5);
	int_least64_t fl(5);

}
