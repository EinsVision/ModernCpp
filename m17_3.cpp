#include "projects.h"

void Projects_17::m17_3()
{
    // 17.3 std::string�� ���̿� �뷮
    // string�� ���̿� �뷮�� ���� ����� �ȴ�.
    string my_string("0123456789"); // '\0' �� ����
    cout << my_string.size() << endl;

    cout << std::boolalpha;
    cout << my_string.empty() << endl;
    // ������� ������ �ǹ��ϴ� false�� return �ȴ�.

    cout << "my_string.length(): " << my_string.length() << endl;
    cout << "my_string.capacity(): " << my_string.capacity() << endl;
    // string�� new / delete�� �ݺ��ϰ� �;����� �ʴ´�. �ֳ��ϸ�
    // ������ �� �ֱ� �����̴�.

    cout << my_string.max_size() << endl;
    my_string.reserve(1000);
    cout << "my_string.capacity(): " << my_string.capacity() << endl;
}