#include "projects.h"

class Cents
{
private:
    int cents;
public:
    Cents(int cents_in) // ������
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
    //} // + ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 
    // ���� ���� freind�� �Ἥ operator+�� class �ȿ� ������ �� �ִ�.
    friend Cents operator-(const Cents& c1, const Cents& c2)
    {
        return Cents(c1.getCents() - c2.getCents());
    } // - ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 
    // ���� ���� freind�� �Ἥ operator+�� class �ȿ� ������ �� �ִ�.

    Cents operator+(const Cents& c2)
    {
        return Cents(this->cents + c2.cents);
    } // + ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

    Cents operator*(const Cents& c2)
    {
        return Cents(this->cents * c2.cents);
    } // * ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

    Cents operator/(const Cents& c2)
    {
        return Cents(this->cents / c2.cents);
    } // (/) ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
    c_out = c1.getCents() + c2.getCents();
}

Cents add2(const Cents& c1, const Cents& c2)
{
    return Cents(c1.getCents() + c2.getCents());
} // �׷��� ���⼭ + ��ȣ�� �Ἥ class�� ����ϰ� �ʹ�.

void Projects_9::m9_1()
{
    // 9.1 ��� ������ �����ε� �ϱ�
    // �⺻���� �ڷ��� int�� double�� + - * / �� �⺻���� ��������� 
    // �����Ǿ� �־ ���� ����� �� �־���. ����� ���� �ڷ��� Ư��,
    // class ������ ��������ڸ� �������� �� �ִ�.

    // 1. �Ϲ��Լ��� ������ overloading�ϴ� ���
    // 2. friend �Լ��� ������ overloading�ϴ� ���
    // 3. class�� member function���� ������ overloading�ϴ� ���

    Cents cents1(6);
    Cents cents2(8);
    Cents c_out(0);

    // 1. �Ϲ��Լ��� ������ overloading�ϴ� ���
    add(cents1, cents2, c_out);
    cout << c_out.getCents() << endl;
    cout << add2(cents1, cents2).getCents() << endl;

    // 2. friend �Լ��� ������ overloading�ϴ� ���
    cout << (cents1 - cents2 - Cents(6)).getCents() << endl;

    // 3. class�� member function���� ������ overloading�ϴ� ���
    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;

    cout << (cents1 * cents2 * Cents(6)).getCents() << endl;
    cout << (cents1 * cents2 / Cents(6)).getCents() << endl;
}