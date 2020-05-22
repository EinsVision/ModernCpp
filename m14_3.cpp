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
    
    catch (ArrayException& e) // ��ü �߸��� �߻��Ѵ�. ������ �߻�
    {
        e.report();
    }

    catch (Exception& e) // ��ü �߸��� �߻��Ѵ�.
    {                    // ��ġ�� �ٲٸ� ��ü �߸��� �߻����� �ʴ´�.
        e.report();
    }
}

void Projects_14::m14_3()
{
    // 14.3 ���� Ŭ������ ���
    // ����� ���� �ڷ����� throw�� �� �ִ�.
    dosomething();
}