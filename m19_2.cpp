#include "projects.h"

int my_func()
{
    // 여기서는 return이 한 개 밖에 없어서 return을 적을 수 있는 것이
    // 하나 밖에 없다.
    return 0;
}

tuple<int, int> my_func_tuple()
{

    return tuple<int, int>(123, 456);
}

auto my_func_tuple1()
{

    //return tuple<int, int, int>(123, 456, 33);
    return tuple(123, 456, 33); // c++17에서 int 안써도 된다.
}

void Projects_19::m19_2()
{
    // 19.2 C++17 함수에서 여러 개의 리턴값 반환하기
    cout << "Hello World" << endl;
    tuple<int, int> result = my_func_tuple();
    auto result1 = my_func_tuple1();
    auto [a, b, c] = my_func_tuple1();

    cout << std::get<0>(result) << " " << get<1>(result) << endl;
    cout << std::get<0>(result1) << " " << get<1>(result1)
        << " " << std::get<2>(result1) << endl;

    cout << a << " " << b << " " << c << endl;
}