#include "projects.h"

void Projects_4::m4_5()
{
    // 4.5 형변환 Type conversion
    cout << typeid(4.0).name() << endl;

    // 암시적 형변환
    float a = 1.0f;
    double d = a; // 이거는 문제될 것이 없다.

    int i = 30000;
    char c = i;   // 이거는 문제가 된다.
    cout << static_cast<int>(c) << endl;

    float f = 3.144f;
    int sd = f;
    cout << setprecision(12) << sd << endl;
    cout << endl;

    // 다음은 엄청난 주의를 해야한다. unsigned 는 다르게 동작한다.
    // unsigned와 signed 는 잘 호환이 안된다.
    cout << 5u - 10 << endl;
    cout << 5 - 10 << endl;
    cout << 5u - 10u << endl;
    cout << endl;

    // 명시적 형변환
    int dd = int(4.0);
    cout << dd << endl;

    int dss = static_cast<int>(4.0);
    cout << dss << endl;
}
