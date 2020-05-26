#include "projects.h"

void Projects_17::m17_3()
{
    // 17.3 std::string의 길이와 용량
    // string도 길이와 용량이 별로 운용이 된다.
    string my_string("0123456789"); // '\0' 가 없음
    cout << my_string.size() << endl;

    cout << std::boolalpha;
    cout << my_string.empty() << endl;
    // 비어있지 않음을 의미하는 false가 return 된다.

    cout << "my_string.length(): " << my_string.length() << endl;
    cout << "my_string.capacity(): " << my_string.capacity() << endl;
    // string도 new / delete을 반복하고 싶어하지 않는다. 왜냐하면
    // 느려질 수 있기 때문이다.

    cout << my_string.max_size() << endl;
    my_string.reserve(1000);
    cout << "my_string.capacity(): " << my_string.capacity() << endl;
}