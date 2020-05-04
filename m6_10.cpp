#include "projects.h"

const char* getName() // 반환형을 const char* 로 쓸 수 있다.
{
	return "Jack Jack";
}

void Projects_6::m6_10()
{
	// 6.10 C언어 스타일의 문자열 심볼릭 상수
	// char* name = "Jack Jack"; // Jack Jack이 담길 문자열의 메모리 정보는 없다.
	const char* name1 = "Jack Jack "; // 기호적인 상수처럼 사용할 수 있다.
	const char* name2 = "Jack Jack ";
	cout << name1 << endl;
	cout << &name1 << endl;
	cout << endl; 

	cout << name2 << endl;
	cout << &name2 << endl;
	cout << endl;

	cout << "getName(): "<<getName() << endl;
}
