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
    // 4.3 Using문과 모호성 (Ambiguity)
   
    // cout << my_var << endl; // 이름이 같을 때 문제가 된다.
    //cout << a::my_var << endl; // 첫 번쨰, 이렇게 문제를 해결할 수 있다.
    {
        using namespace a;
        cout << my_var << endl;
    }
    // 두 번째, 이렇게 문제를 해결할 수 있다.
    {
        using namespace b;
        cout << my_var << endl;
    }
    // 세 번째, header file에 using namespace를 쓰는 것은 좋지 않다.
    // cpp 파일에 using namespace를 넣는 것이 좋다.
}
