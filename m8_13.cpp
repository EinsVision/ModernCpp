#include "projects.h"

class Ad
{
public:
    Ad()
    {
        cout << "Constructor" << endl;
    }

    ~Ad()
    {
        cout << "Destructor" << endl;
    }
    void print()
    {
        cout << "Hello world" << endl;
    }
};

void Projects_8::m8_13()
{
    // 8.13 �͸� ��ü anonymous object
    // ��ü�� ����� �� �̸��� ���� ������ �������� �ʰ� �ٷ� ����ϴ� ��
    /* Ad a;
    a.print();*/ // �Ϲ����� ��ü ����

    Ad().print(); // �̷��� �͸� ��ü�� ����� ����� �� �ִ�.
    // �͸� ��ü�� ���� ����ǰ� ����������� ������ ������ �� ����.
    Ad().print(); 

    cout << int(6) + int(8) << endl;
}