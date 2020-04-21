#include "projects.h"

void Projects::m2_1()
{
    // 2.1 기본 자료형

    // 변수의 선언 및 초기화

    bool bValue = true;
    cout<<"3항 연산자: "<< (bValue ? 1 : 0) << endl;

    char ch = 65;
    cout <<"char 형 출력: " <<ch << endl;

    float fValue = 3.141592f;
    double dValue = 3.141592;

    // 새롭게 modern C++에서 추가된 부분
    auto aValue1 = 3.141592;
    auto aValue2 = 3.141592f;
    cout << aValue1 << " :: " << aValue2 << endl;
    cout <<"sizeof 연산: "<<sizeof(aValue1) << " :: " << sizeof(aValue2) << endl;
    cout <<"sizeof 연산: "<<sizeof(bool) << endl;

    // 변수 초기화 방식은 3가지가 있다.
    // copy initialization
    int ci(123);
    // direct initialization (내가 직접 만든 데이터 타입을 초기화 할 때 많이 쓴다.)
    int di(123);
    // uniform initialization (내가 직접 만든 데이터 타입을 초기화 할 때 많이 쓴다.)
    int ui{ 123 };

    /*int did(3.14);             // 이 경우 warning 만 발생시킨다.
    int uiu{ 3.14 };*/           // 이 경우 error 가 발생된다.
}