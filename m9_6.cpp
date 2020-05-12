#include "projects.h"

class IntList
{
private:
    int list[10]{1,2,3,4,5,6,7,8,9,10};
public:
    void setItem(int index, int value)
    {
        list[index] = value;
    }
    int getItem(int index)
    {
        return list[index];
    }
    int* getList()
    {
        return list;
    }

    int& operator [](const int index)
    { // ���� �а� �ٲ� �� �ֵ��� return ���� int& reference�� �����
        assert(index >= 0);
        assert(index < 10);
        return list[index];
    }

    const int& operator [](const int index) const
    { // ���� �а� �ٲ� �� �ֵ��� return ���� int& reference�� �����
        assert(index >= 0);
        assert(index < 10);
        return list[index];
    }
};

void Projects_9::m9_6()
{
    //  9.6 ÷�� ������ �����ε� �ϱ� [] subscript operator
    IntList my_list;
    my_list.setItem(3, 1);
    cout << "my_list.getItem(3) : " << my_list.getItem(3) << endl;
    my_list.getList()[3] = 10;
    cout << "my_list.getItem(3) : " << my_list.getItem(3) << endl;

    IntList my_list1;
    my_list1[3] = 10;
    cout << "my_list[3]: "<<my_list[3] << endl;

}