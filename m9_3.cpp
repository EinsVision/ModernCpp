#include "projects.h"

class Cents
{
private:
    int cents;
public:
    Cents(int cents_input = 0)
    {
        cents = cents_input;
    }
    int getCents() const
    {
        return cents;
    }
    int& getCents()
    {
        return cents;
    }
    friend ostream& operator << (ostream& out, const Cents& m_cents)
    {
        out << m_cents.cents;
        return out; // chaning하기 위해 return 한다.
    }
    friend Cents operator-(const Cents& c1, const Cents& c2)
    {
        return Cents(c1.getCents() - c2.getCents());
    } 
    Cents operator-() const // 여기서 단항 연산자는 friend를 빼주었다.
    {
        return Cents(-cents);
    }
    bool operator !() const
    {
        return (cents == 0) ? true : false; // 3항 연산자로 구현했음
    }
};

void Projects_9::m9_3()
{
    // 9.3 단항 연산자 오버로딩 하기 +, -, !
    Cents c1(9);
    Cents c2(0);
    cout << c1 - c2 << " cents!"<< endl;
    cout << -c1 << endl;
    cout << -Cents(-12) << endl;
    cout << !c1 << " " << !c2 << endl;
}