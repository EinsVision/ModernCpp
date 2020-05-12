#include "projects.h"

class Digit
{
private:
    int digit;
public:
    Digit(int digit_in = 0)
    {
        digit = digit_in;
    }

    // prefix
    Digit& operator ++ ()
    {
        ++digit;
        return *this; //자기 자신을 return 한다.
    }
    Digit& operator -- ()
    {
        --digit;
        return *this; //자기 자신을 return 한다.
        // this는 포인터이므로 반활할 때는 참조 연산자(*)를 사용하여
        // 객체 그 자체를 반환해야 한다.
        // http://tcpschool.com/cpp/cpp_class_this
    }

    // postfix
    Digit operator ++ (int) // 여기서 dummy로 int를 하나 넣어 주어야한다.
    {
        Digit temp(digit); // 먼저 현재 값을 저장해준다.
        cout << "Temp1 : " << temp << endl;
        cout << "this1 : " << *this << endl;
        ++(*this); //this 포인터는 해당 멤버 함수를 호출한 객체를 가르키며
        // 호출된 멤버 함수의 숨은 인수로 전달된다.
        cout << "this2 : " << *this << endl;
        cout << "Temp2 : " << temp << endl;
        return temp;
    }
    Digit operator -- (int) // 여기서 dummy로 int를 하나 넣어 주어야한다.
    {
        Digit temp(digit); // 먼저 현재 값을 저장해준다.
        --(*this);
        return temp;
    }
    friend ostream& operator <<(ostream& out, const Digit& d)
    {
        out << d.digit << endl;
        return out;
    }
};
void Projects_9::m9_5()
{
    // 9.5 증감 연산자 오버로딩 하기 ++, --
    Digit d1(2);
    cout << ++d1 << endl;
    cout << --d1 << endl;
    cout << d1 << endl;
    cout << d1++ << endl;
    cout << d1 << endl;

    cout << d1-- << endl;
    cout << d1 << endl;
}