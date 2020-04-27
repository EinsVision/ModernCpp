#include "projects.h"

extern int value = 123; // Global Variable 선언    


// 이렇게 값을 할당해야 메모리가 할당이 된다.
void Projects_4::m4_2()
{
	// 4.2 전역 변수, 정적 변수, 내부 연결, 외부 연결
	// Global Variable, Static Variable, Internal Linkage, External Linkage
	int value = 456;

}
// static int a = 1; // 다른 cpp파일에서 사용할 수 없도록 막아준다.
// extern 전역변수를 다른 파일에서도 사용할 수 있도록 한다. 
// int a = 1;  // doSomething4_2() 에서 사용됨.

void doSomething4_2()
{
    // int a = 1; // 할당이 되고 다시 할당이 된다. 
    static int a = 1; // memory a가 static이라는 뜻이다. 
    // static은 초기화가 한번 밖에 되지 않는다.
    cout << cnst_m2_9::pi << " " << &(cnst_m2_9::pi) << endl;
    ++a;
    // cout << a << endl;
}