#include "projects.h"

void Projects_13::m13_3()
{
    // 13.3 �ڷ����� �ƴ� ���ø� �Ű�����
    MyArray133<double, 100> my_array133;
    // ���⼭ �߿��� ���� compile time�� 100�̶�� ���ڰ� ������ �Ǿ��
    // �Ѵٴ� ���̴�. std::vector<double> my_array; �̰ſʹ� ���̰� �ִ�.

    for (int i = 0; i < my_array133.getLength(); i++)
    {
        my_array133[i] = i + 65;
    }
    my_array133.print();
}

