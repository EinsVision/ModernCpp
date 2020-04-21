#include "projects.h"

void Projects::m2_1()
{
    // 2.1 �⺻ �ڷ���

    // ������ ���� �� �ʱ�ȭ

    bool bValue = true;
    cout<<"3�� ������: "<< (bValue ? 1 : 0) << endl;

    char ch = 65;
    cout <<"char �� ���: " <<ch << endl;

    float fValue = 3.141592f;
    double dValue = 3.141592;

    // ���Ӱ� modern C++���� �߰��� �κ�
    auto aValue1 = 3.141592;
    auto aValue2 = 3.141592f;
    cout << aValue1 << " :: " << aValue2 << endl;
    cout <<"sizeof ����: "<<sizeof(aValue1) << " :: " << sizeof(aValue2) << endl;
    cout <<"sizeof ����: "<<sizeof(bool) << endl;

    // ���� �ʱ�ȭ ����� 3������ �ִ�.
    // copy initialization
    int ci(123);
    // direct initialization (���� ���� ���� ������ Ÿ���� �ʱ�ȭ �� �� ���� ����.)
    int di(123);
    // uniform initialization (���� ���� ���� ������ Ÿ���� �ʱ�ȭ �� �� ���� ����.)
    int ui{ 123 };

    /*int did(3.14);             // �� ��� warning �� �߻���Ų��.
    int uiu{ 3.14 };*/           // �� ��� error �� �߻��ȴ�.
}