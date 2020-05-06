#include "projects.h"

inline int min(int x, int y) // inline으로 선언하게되면 함수가 아닌것처럼 동작한다.
{
	return x > y ? y : x;
}

// 모든 함수를 inline으로 처라한다고 해도 프로그램이 빨라진 것이 아니다.
void Projects_7::m7_6()
{
	// 7.6 인라인 함수 inline function
	// 인라인 함수를 이용해서 프로그램 최적화를 시도하기도 한다.
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;
	
	// inline으로 선언했을 때 다음과 같이 코드가 작성된 것이다. 
	cout << (5 > 6 ? 6 : 5) << endl; // 이 행동은 컴파일러가 한다.
	cout << (3 > 2 ? 2 : 3) << endl; // inline 함수가 더 빠르다.
}
