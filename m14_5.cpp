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

    // 생성자에서 바로 catch를 할 수도 있다.
    B145(int x) try : A145(x)
    {
        // 이렇게 사용하면 2번 catch를 한다.
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
    // 14.5 함수 try
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