#include "projects.h"

template<typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

// 특수한 경우에 대해서 다른 기능을 구현하도록 한다.
template<>
char getMax(char x, char y)
{
    cout << "Warning : Compare chars" << endl;
    return (x > y) ? x : y;
}

// member function을 specialization할 수 있다.
template <class T>
class Storage
{
private:
    T m_value;

public:
    Storage(T value)
    {
        m_value = value;
    }
    ~Storage()
    {

    }
    void print()
    {
        cout << m_value << endl;
    }
};

template <>
void Storage<double>::print()
{
    cout << "double type: " << endl;
    cout << scientific << m_value << endl;
}

void Projects_13::m13_4()
{
    // 13.4 함수 템플릿 특수화 specialization
    // 특별한 자료형에 대해서는 다른 기능을 구현하고 싶을 때가 있다.
    cout << getMax(2, 3) << endl;
    cout << getMax<double>(2.5, 44.2) << endl; // 원래는 이렇게 된다.
    cout << getMax<char>('a', 'b') << endl; // specialization
    // 여기서 char에 대해서 경고문 등 사용자에게 알람을 줄 수 있다.
    cout << endl;

    Storage<int> nValue(5);
    Storage<double> dValue(3.14);

    nValue.print();
    dValue.print();
}

