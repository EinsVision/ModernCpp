#include "projects.h"

int my_func()
{
    // ���⼭�� return�� �� �� �ۿ� ��� return�� ���� �� �ִ� ����
    // �ϳ� �ۿ� ����.
    return 0;
}

tuple<int, int> my_func_tuple()
{

    return tuple<int, int>(123, 456);
}

auto my_func_tuple1()
{

    //return tuple<int, int, int>(123, 456, 33);
    return tuple(123, 456, 33); // c++17���� int �Ƚᵵ �ȴ�.
}

void Projects_19::m19_2()
{
    // 19.2 C++17 �Լ����� ���� ���� ���ϰ� ��ȯ�ϱ�
    cout << "Hello World" << endl;
    tuple<int, int> result = my_func_tuple();
    auto result1 = my_func_tuple1();
    auto [a, b, c] = my_func_tuple1();

    cout << std::get<0>(result) << " " << get<1>(result) << endl;
    cout << std::get<0>(result1) << " " << get<1>(result1)
        << " " << std::get<2>(result1) << endl;

    cout << a << " " << b << " " << c << endl;
}