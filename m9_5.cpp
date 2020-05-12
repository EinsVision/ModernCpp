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
        return *this; //�ڱ� �ڽ��� return �Ѵ�.
    }
    Digit& operator -- ()
    {
        --digit;
        return *this; //�ڱ� �ڽ��� return �Ѵ�.
        // this�� �������̹Ƿ� ��Ȱ�� ���� ���� ������(*)�� ����Ͽ�
        // ��ü �� ��ü�� ��ȯ�ؾ� �Ѵ�.
        // http://tcpschool.com/cpp/cpp_class_this
    }

    // postfix
    Digit operator ++ (int) // ���⼭ dummy�� int�� �ϳ� �־� �־���Ѵ�.
    {
        Digit temp(digit); // ���� ���� ���� �������ش�.
        cout << "Temp1 : " << temp << endl;
        cout << "this1 : " << *this << endl;
        ++(*this); //this �����ʹ� �ش� ��� �Լ��� ȣ���� ��ü�� ����Ű��
        // ȣ��� ��� �Լ��� ���� �μ��� ���޵ȴ�.
        cout << "this2 : " << *this << endl;
        cout << "Temp2 : " << temp << endl;
        return temp;
    }
    Digit operator -- (int) // ���⼭ dummy�� int�� �ϳ� �־� �־���Ѵ�.
    {
        Digit temp(digit); // ���� ���� ���� �������ش�.
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
    // 9.5 ���� ������ �����ε� �ϱ� ++, --
    Digit d1(2);
    cout << ++d1 << endl;
    cout << --d1 << endl;
    cout << d1 << endl;
    cout << d1++ << endl;
    cout << d1 << endl;

    cout << d1-- << endl;
    cout << d1 << endl;
}