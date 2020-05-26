#include "projects.h"

void Projects_17::m17_4()
{
    // 17.4 ���� �����ϱ�� �迭���� ��ȯ
    string my_string("abcdefg");
    cout << my_string[0] << endl;
    cout << my_string[1] << endl;
    cout << my_string[2] << endl;

    my_string[2] = 'z';
    cout << my_string << endl;

    // runtime error�� �߻��Ѵ�.
    // my_string[100] = 'ds'; // [ ] �� ����ó���� �����ش�.
    // my_string.at(100);

    cout << my_string.c_str() << endl;
    cout << my_string.c_str()[0] << endl;

    const char* ptr_arr = my_string.c_str();
    cout << "(int)ptr_arr[6]: " << (int)ptr_arr[6] << " " << ptr_arr[6] << endl;
    cout << "(int)ptr_arr[7]: " << (int)ptr_arr[7] << " " << ptr_arr[7] << endl;
    // null ���ڸ� �ٿ��� return ���ش�.

    // copy �Լ��� �Ἥ char�� ������ �� �ִ�.
    char buf[20];
    my_string.copy(buf, 5, 0);
    buf[5] = '\0'; // �̷��� �־�� ������ �Ȼ����.
    cout << buf << endl;
    // �̻��ϰ� ������ ���� null char�� �ȵ� �ֱ� ������ �׷���.

}