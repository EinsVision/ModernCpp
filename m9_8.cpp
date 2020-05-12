#include "projects.h"

class Cents
{
private:
    int cents;
public:
    Cents(int cents_in = 0)
    {
        cents = cents_in;
    }

    int getCents()
    {
        return cents;
    }

    void setCents(int cents_in)
    {
        cents = cents_in;
    }

    operator int() // int 형으로 type casting
    {
        cout << "int type casting!" << endl;
        return cents;
    }
    operator double() // double 형으로 type casting
    {
        cout << "double type casting!" << endl;
        return cents;
    }
};

class Dollor
{
private:
    int dollor = 0;
public:
    Dollor(int dollor_in = 0)
    {
        dollor = dollor_in;
    }

    operator Cents()
    {
        cout << "Cents type casting!" << endl;
        return Cents(dollor * 100);
    }
};

void printDouble(const double& value)
{
    cout << value << endl;
}

void printINT(const int& value)
{
    cout << value << endl;
}

void Projects_9::m9_8()
{
    // 9.8 형변환을 오버로딩 하기 static_cast overloading
    Cents c1(7);
    printINT(c1);

    /*int value = (int)c1;
    value = int(c1);
    value = static_cast<int>(c1);*/

    Cents c2(3.14);
    printDouble(c2);

    Dollor dolr(2);
    c1 = dolr;
    printINT(c1);

}