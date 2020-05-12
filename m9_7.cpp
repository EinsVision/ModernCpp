#include "projects.h"

class Accumulator
{
private:
    int counter = 0;

public:
    /*int operator() (int i)
    {
        return (counter += i);
    }*/
    Accumulator& operator() (int i)
    {
        counter += i;
        return *this;
    }
    friend ostream& operator << (ostream& out, const Accumulator& a)
    {
        out << a.counter;
        return out; // chaning�ϱ� ���� return �Ѵ�.
    }
};

void Projects_9::m9_7()
{
    // 9.7 ��ȣ ������ �����ε��� �Լ� ��ü (Functor)
    Accumulator acc;
    
    cout << acc(10) << endl; // �Լ�ó�� ����Ѵ�.
    cout << acc(20) << endl; // �Լ�ó�� ����Ѵ�.
}