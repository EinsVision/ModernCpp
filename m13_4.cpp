#include "projects.h"

template<typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

// Ư���� ��쿡 ���ؼ� �ٸ� ����� �����ϵ��� �Ѵ�.
template<>
char getMax(char x, char y)
{
    cout << "Warning : Compare chars" << endl;
    return (x > y) ? x : y;
}

// member function�� specialization�� �� �ִ�.
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
    // 13.4 �Լ� ���ø� Ư��ȭ specialization
    // Ư���� �ڷ����� ���ؼ��� �ٸ� ����� �����ϰ� ���� ���� �ִ�.
    cout << getMax(2, 3) << endl;
    cout << getMax<double>(2.5, 44.2) << endl; // ������ �̷��� �ȴ�.
    cout << getMax<char>('a', 'b') << endl; // specialization
    // ���⼭ char�� ���ؼ� ��� �� ����ڿ��� �˶��� �� �� �ִ�.
    cout << endl;

    Storage<int> nValue(5);
    Storage<double> dValue(3.14);

    nValue.print();
    dValue.print();
}

