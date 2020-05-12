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
        return out; // chaning�ϱ� ���� return �Ѵ�.
    }
    friend Cents operator-(const Cents& c1, const Cents& c2)
    {
        return Cents(c1.getCents() - c2.getCents());
    } 
    Cents operator-() const // ���⼭ ���� �����ڴ� friend�� ���־���.
    {
        return Cents(-cents);
    }
    bool operator !() const
    {
        return (cents == 0) ? true : false; // 3�� �����ڷ� ��������
    }
};

void Projects_9::m9_3()
{
    // 9.3 ���� ������ �����ε� �ϱ� +, -, !
    Cents c1(9);
    Cents c2(0);
    cout << c1 - c2 << " cents!"<< endl;
    cout << -c1 << endl;
    cout << -Cents(-12) << endl;
    cout << !c1 << " " << !c2 << endl;
}