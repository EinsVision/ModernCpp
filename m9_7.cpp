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
        return out; // chaning하기 위해 return 한다.
    }
};

void Projects_9::m9_7()
{
    // 9.7 괄호 연산자 오버로딩과 함수 객체 (Functor)
    Accumulator acc;
    
    cout << acc(10) << endl; // 함수처럼 사용한다.
    cout << acc(20) << endl; // 함수처럼 사용한다.
}