#include "projects.h"

template<typename T>
class A
{
public:
    A(const T& temp)
    {}

    void printName()
    {
        cout << typeid(T).name() << endl;
    }
    void test()
    {

    }
};

template<>
class A<char>
{
public:
    A(const char& temp)
    {}

    void printName()
    {
        cout << "char type specialization" << endl;
    }
};

template <class T>
class Storage8
{
private:
    T m_value[8];

public:
    
    void set(int index, const T&value)
    {
        m_value[index] = value;
    }

    const T& get(int index)
    {
        return m_value[index];
    }
};

template <>
class Storage8<bool>
{
private:
    unsigned char m_data;

public:

    Storage8()
        : m_data(0)
    {}

    void set(int index, bool value)
    {
        unsigned char mask = 1 << index;
        if (value)
        {
            m_data |= mask;
        }
        else
        {
            m_data &= ~mask;
        }
    }

    bool get(int index)
    {
        unsigned char mask = 1 << index;
        return (m_data & mask) != 0;
    }
};


void Projects_13::m13_5()
{
    // 13.5 클래스 템플릿 특수화
    A<int> a_int(1);
    A<double> a_double(3.14);
    A<char> a_char('a'); // 다른 class를 구현하는 것과 비슷하다.

    A       b_int(1);
    A       b_double(3.14);
    A       b_char('a');

    a_int.printName();
    a_double.printName();
    a_char.printName();
    cout << endl;

    b_int.printName();
    b_double.printName();
    b_char.printName();

    a_int.test();
    a_double.test();
    
    Storage8<int> intStroage;

    for (int count = 0; count < 8; ++count)
    {
        intStroage.set(count, count);
    }

    for (int count = 0; count < 8; ++count)
    {
        cout << intStroage.get(count) << endl;
    }

    cout << "sizeof Storage8: " << sizeof(Storage8<int>) << endl;
    cout << "sizeof Storage8: " << sizeof(Storage8<bool>) << endl;
}

