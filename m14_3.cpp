#include "projects.h"

class Exception
{
public:
    void report()
    {
        cerr << "Exception report" << endl;
    }
};

class ArrayException : public Exception
{
public:
    void report()
    {
        cerr << "Array exception" << endl;
    }
};

class MyArray143
{
private:
    int m_data[5];

public:
    int& operator[](const int& index)
    {
        if (index < 0 || index >= 5)
        {
            //throw - 1;
            throw ArrayException();
        }
        return m_data[index];
    }
};

void dosomething()
{
    MyArray143 my_arr;

    try
    {
        my_arr[100];
    }
    catch (const int& x)
    {
        cerr << "exception " << x << endl;
    }
    
    catch (ArrayException& e) // 객체 잘림이 발생한다. 여전히 발생
    {
        e.report();
    }

    catch (Exception& e) // 객체 잘림이 발생한다.
    {                    // 위치를 바꾸면 객체 잘림이 발생하지 않는다.
        e.report();
    }
}

void Projects_14::m14_3()
{
    // 14.3 예외 클래스와 상속
    // 사용자 정의 자료형을 throw할 수 있다.
    dosomething();
}