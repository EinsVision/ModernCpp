#include "projects.h"

namespace a
{
    int my_var(10);
}

namespace b
{
    int my_var(20);
}

void Projects_4::m4_3()
{
    // 4.3 Using���� ��ȣ�� (Ambiguity)
   
    // cout << my_var << endl; // �̸��� ���� �� ������ �ȴ�.
    //cout << a::my_var << endl; // ù ����, �̷��� ������ �ذ��� �� �ִ�.
    {
        using namespace a;
        cout << my_var << endl;
    }
    // �� ��°, �̷��� ������ �ذ��� �� �ִ�.
    {
        using namespace b;
        cout << my_var << endl;
    }
    // �� ��°, header file�� using namespace�� ���� ���� ���� �ʴ�.
    // cpp ���Ͽ� using namespace�� �ִ� ���� ����.
}
