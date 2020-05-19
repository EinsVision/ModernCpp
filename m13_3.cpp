#include "projects.h"

void Projects_13::m13_3()
{
    // 13.3 자료형이 아닌 템플릿 매개변수
    MyArray133<double, 100> my_array133;
    // 여기서 중요한 것은 compile time에 100이라는 숫자가 결정이 되어야
    // 한다는 것이다. std::vector<double> my_array; 이거와는 차이가 있다.

    for (int i = 0; i < my_array133.getLength(); i++)
    {
        my_array133[i] = i + 65;
    }
    my_array133.print();
}

