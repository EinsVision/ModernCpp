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
    //} // + 기호를 써서 class를 계산하고 있다. 
    // 위와 같이 freind를 써서 operator+를 class 안에 정의할 수 있다.
    friend Cents131 operator-(const Cents131& c1, const Cents131& c2)
    {
        return Cents131(c1.getCents() - c2.getCents());
    } // - 기호를 써서 class를 계산하고 있다. 
    // 위와 같이 freind를 써서 operator+를 class 안에 정의할 수 있다.

    Cents131 operator+(const Cents131& c2)
    {
        return Cents131(this->cents + c2.cents);
    } // + 기호를 써서 class를 계산하고 있다. 

    Cents131 operator*(const Cents131& c2)
    {
        return Cents131(this->cents * c2.cents);
    } // * 기호를 써서 class를 계산하고 있다. 

    Cents131 operator/(const Cents131& c2)
    {
        return Cents131(this->cents / c2.cents);
    } // (/) 기호를 써서 class를 계산하고 있다. 

    friend ostream& operator<<(ostream &out, const Cents131& c2)
    {
        out << c2.cents << endl;
        return out;
    }
};

void Projects_13::m13_1()
{
	// 13.1 함수 템플릿 function templates
	// 여러가지 자료형에 대해서 반복해서 작성하는 것을 방지해준다.
    // 사용자 정의 자료형에 대해서도 쓸 수 있다.
	cout << add(1, 2) << endl;
	cout << add(5.14f, 3.12f) << endl;
	cout << add(3.14, 2.12) << endl;
	cout << add(string("Test"), string(" World")) << endl;
    cout << add(Cents131(5), Cents131(5)) << endl;
}