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
    // 15.2 ������-�� ���� R-value References
    int x = 5; // R-value�� �� ������ ������ �������.

    // L-value references
    int& lr = x; // modifiable l-values

    // R-value references
    int&& rr = 7;
    // int&& rr1 = x; // �� ������ �ȵȴ�. R-value�� �� ����� ���鸸
    // ������ �� �ִ�.
    rr = 8; // R-value�� ���� �ٲ� �� �ִ�.
    cout << rr << endl;

    LvalueRvalue(x);
    LvalueRvalue(5); // move semantic���� ��밡���ϴ�. ���� ���ϱ�
    LvalueRvalue(getValue());
}