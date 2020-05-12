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
    { // 값을 읽고 바꿀 수 있도록 return 형을 int& reference를 사용함
        assert(index >= 0);
        assert(index < 10);
        return list[index];
    }

    const int& operator [](const int index) const
    { // 값을 읽고 바꿀 수 있도록 return 형을 int& reference를 사용함
        assert(index >= 0);
        assert(index < 10);
        return list[index];
    }
};

void Projects_9::m9_6()
{
    //  9.6 첨자 연산자 오버로딩 하기 [] subscript operator
    IntList my_list;
    my_list.setItem(3, 1);
    cout << "my_list.getItem(3) : " << my_list.getItem(3) << endl;
    my_list.getList()[3] = 10;
    cout << "my_list.getItem(3) : " << my_list.getItem(3) << endl;

    IntList my_list1;
    my_list1[3] = 10;
    cout << "my_list[3]: "<<my_list[3] << endl;

}