#include "projects.h"


void Projects_13::m13_2()
{
    // 13.2 Ŭ���� ���ø� class templates
    MyArray<char> my_array(10);
    for (int i = 0; i < my_array.getLength(); i++)
    {
        my_array[i] = i +65;
    }
    my_array.print();
}

