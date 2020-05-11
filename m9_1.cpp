#include "projects.h"

class Cents
{
private:
    int cents;
public:
    Cents(int cents_in) // 생성자
    {
        cents = cents_in;
    }
    int getCents() const
    {
        return cents;
    }
    int& getCents()
    {
        return cents;
    }
    //friend Cents operator+(const Cents& c1, const Cents& c2)
    //{
    //    return Cents(c1.getCents() + c2.getCents());
    //} // + 기호를 써서 class를 계산하고 있다. 
    // 위와 같이 freind를 써서 operator+를 class 안에 정의할 수 있다.
    friend Cents operator-(const Cents& c1, const Cents& c2)
    {
        return Cents(c1.getCents() - c2.getCents());
    } // - 기호를 써서 class를 계산하고 있다. 
    // 위와 같이 freind를 써서 operator+를 class 안에 정의할 수 있다.

    Cents operator+(const Cents& c2)
    {
        return Cents(this->cents + c2.cents);
    } // + 기호를 써서 class를 계산하고 있다. 

    Cents operator*(const Cents& c2)
    {
        return Cents(this->cents * c2.cents);
    } // * 기호를 써서 class를 계산하고 있다. 

    Cents operator/(const Cents& c2)
    {
        return Cents(this->cents / c2.cents);
    } // (/) 기호를 써서 class를 계산하고 있다. 

};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
    c_out = c1.getCents() + c2.getCents();
}

Cents add2(const Cents& c1, const Cents& c2)
{
    return Cents(c1.getCents() + c2.getCents());
} // 그런데 여기서 + 기호를 써서 class를 계산하고 싶다.

void Projects_9::m9_1()
{
    // 9.1 산술 연산자 오버로딩 하기
    // 기본적인 자료형 int나 double은 + - * / 등 기본적인 산술연산이 
    // 구현되어 있어서 쉽게 사용할 수 있었다. 사용자 정의 자료형 특히,
    // class 끼리도 산술연산자를 정의해줄 수 있다.

    // 1. 일반함수로 연산자 overloading하는 방법
    // 2. friend 함수로 연산자 overloading하는 방법
    // 3. class의 member function으로 연산자 overloading하는 방법

    Cents cents1(6);
    Cents cents2(8);
    Cents c_out(0);

    // 1. 일반함수로 연산자 overloading하는 방법
    add(cents1, cents2, c_out);
    cout << c_out.getCents() << endl;
    cout << add2(cents1, cents2).getCents() << endl;

    // 2. friend 함수로 연산자 overloading하는 방법
    cout << (cents1 - cents2 - Cents(6)).getCents() << endl;

    // 3. class의 member function으로 연산자 overloading하는 방법
    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;

    cout << (cents1 * cents2 * Cents(6)).getCents() << endl;
    cout << (cents1 * cents2 / Cents(6)).getCents() << endl;
}