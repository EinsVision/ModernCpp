#include "projects.h"

template <class T>
//template <typename T>
T add(T a, T b)
{
	return a + b;
}

class Cents131
{
private:
    int cents;
public:
    Cents131(int cents_in)
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
    friend Cents131 operator-(const Cents131& c1, const Cents131& c2)
    {
        return Cents131(c1.getCents() - c2.getCents());
    } // - ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 
    // ���� ���� freind�� �Ἥ operator+�� class �ȿ� ������ �� �ִ�.

    Cents131 operator+(const Cents131& c2)
    {
        return Cents131(this->cents + c2.cents);
    } // + ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

    Cents131 operator*(const Cents131& c2)
    {
        return Cents131(this->cents * c2.cents);
    } // * ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

    Cents131 operator/(const Cents131& c2)
    {
        return Cents131(this->cents / c2.cents);
    } // (/) ��ȣ�� �Ἥ class�� ����ϰ� �ִ�. 

    friend ostream& operator<<(ostream &out, const Cents131& c2)
    {
        out << c2.cents << endl;
        return out;
    }
};

void Projects_13::m13_1()
{
	// 13.1 �Լ� ���ø� function templates
	// �������� �ڷ����� ���ؼ� �ݺ��ؼ� �ۼ��ϴ� ���� �������ش�.
    // ����� ���� �ڷ����� ���ؼ��� �� �� �ִ�.
	cout << add(1, 2) << endl;
	cout << add(5.14f, 3.12f) << endl;
	cout << add(3.14, 2.12) << endl;
	cout << add(string("Test"), string(" World")) << endl;
    cout << add(Cents131(5), Cents131(5)) << endl;
}