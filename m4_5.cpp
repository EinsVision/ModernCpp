#include "projects.h"

void Projects_4::m4_5()
{
    // 4.5 ����ȯ Type conversion
    cout << typeid(4.0).name() << endl;

    // �Ͻ��� ����ȯ
    float a = 1.0f;
    double d = a; // �̰Ŵ� ������ ���� ����.

    int i = 30000;
    char c = i;   // �̰Ŵ� ������ �ȴ�.
    cout << static_cast<int>(c) << endl;

    float f = 3.144f;
    int sd = f;
    cout << setprecision(12) << sd << endl;
    cout << endl;

    // ������ ��û�� ���Ǹ� �ؾ��Ѵ�. unsigned �� �ٸ��� �����Ѵ�.
    // unsigned�� signed �� �� ȣȯ�� �ȵȴ�.
    cout << 5u - 10 << endl;
    cout << 5 - 10 << endl;
    cout << 5u - 10u << endl;
    cout << endl;

    // ����� ����ȯ
    int dd = int(4.0);
    cout << dd << endl;

    int dss = static_cast<int>(4.0);
    cout << dss << endl;
}
