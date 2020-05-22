#include "projects.h"

class A145
{
private:
    int m_x;
public:
    A145(int x)
        :m_x(x)
    {
        if (x <= 0)
        {
            throw 1;
        }
    }
};

class B145 : public A145
{
public:
    /*B145(int x)
        : A145(x)
    {}*/

    // �����ڿ��� �ٷ� catch�� �� ���� �ִ�.
    B145(int x) try : A145(x)
    {
        // �̷��� ����ϸ� 2�� catch�� �Ѵ�.
    }
    catch (...)
    {
        cout << "catch in B constructor" << endl;
        //  throw;
    }
};

void trypractice()
{
    try
    {
        throw - 1;
    }
    catch (...)
    {
        cout << "Catch in trypractice()" << endl;
    }
}

void Projects_14::m14_5()
{
    // 14.5 �Լ� try
    try
    {
        // trypractice();
        B145 b(-3);
    }
    catch (...)
    {
        cout << "Catch in main()" << endl;
    }
    
}