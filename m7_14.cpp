#include "projects.h"

void printArray_assert(const array<int, 5>& arr, const int& idx)
{
	assert(idx >= 0);
	assert(idx <= arr.size() - 1); // 두개로 합칠 수 있지만 쪼개는게 낫다.

	cout << arr[idx] << endl;
}

void Projects_7::m7_14()
{
	// 7.14 단언하기 assert

	int num = 5;

	assert(num == 5); // 어디서 오류가 났는지 알려준다. 
	// 하지만 release mode에서는 동작하지 않는다.
	// 여기서 num==5 일때, 내 프로그램이 정상적으로 동작한 것이라고 알려주기 
	// 위해 assert(num == 5) 라고 쓴 것이다.
	
	array<int, 5> my_arr{ 1,2,3,4,5 };
	printArray_assert(my_arr, 1);

	// compile time에 error를 알려주는 static_assert가 있다.
	const int num2 = 3; 

	static_assert(num2 == 3, "num2 should be 3. ");
}
