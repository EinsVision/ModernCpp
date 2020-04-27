#include "projects.h"

// 4.2 전역 변수, 정적 변수, 내부 연결, 외부 연결
extern int value; // 이렇게 해야 cpp 파일 어딘가에 값이 정의되어 있다는 얘기가 된다.
// extern void doSomething4_1();
// static int a = 1; // 다른 cpp파일에서 사용할 수 없도록 막아준다.
// extern 전역변수를 다른 파일에서도 사용할 수 있도록 한다. 
// int a = 1;  // doSomething4_2() 에서 사용됨.

int main()
{
    Projects_4 projec;
    projec.m4_2();

    return 0;
}