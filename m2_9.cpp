#include "projects.h"

void printNumber(const int num)
{
	// num = 10; // 이렇게 잘 사용하지 않는다. 이유는 입 출력을 명확히 보여 줄 수 없기 때문이다.
	// 그래서 printNumber 함수에 int num 을 const 로 막는다.
	int number = num;
	cout << number + 1 << endl;
}

void Projects::m2_9()
{
	printNumber(9);
	// 2.9 심볼릭 함수 constexpr
	const double gravity{ 9.8 }; // 다른 사람이 바꿀 수 없도록 const 설정
	// gravity = 1.2; // 값을 변경 할 수 없다.

	// compile time에 runtime 에 대한 const를 구분해보자. 
	const int compile_time_const(123);

	int num;
	cin >> num;
	const int run_time_const(num); 
	
	cout << "compile_time_const: " << compile_time_const << endl;
	cout << "run_time_const: " << run_time_const << endl;

	// constexpr 은 compile time 에 상수가 결정되어야 함을 명시적으로 나타낸다.
	constexpr int constexpr_compile_time_const(23);
	cout << "constexpr_compile_time_const: " << constexpr_compile_time_const << endl;
	cout << cnst_m2_9::pi << endl;

}
