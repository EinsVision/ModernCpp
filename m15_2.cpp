#include "projects.h"

void LvalueRvalue(int& lref)
{
    cout << "L-value reference" << endl;
}

void LvalueRvalue(int&& rref)
{
    cout << "R-value reference" << endl;
}

int getValue()
{
    return 100 * 10;
}

void Projects_15::m15_2()
{
    // 15.2 오른쪽-값 참조 R-value References
    int x = 5; // R-value는 이 문장이 끝나면 사라진다.

    // L-value references
    int& lr = x; // modifiable l-values

    // R-value references
    int&& rr = 7;
    // int&& rr1 = x; // 이 문장은 안된다. R-value는 곧 사라질 값들만
    // 저장할 수 있다.
    rr = 8; // R-value의 값도 바꿀 수 있다.
    cout << rr << endl;

    LvalueRvalue(x);
    LvalueRvalue(5); // move semantic에서 사용가능하다. 나만 쓰니까
    LvalueRvalue(getValue());
}