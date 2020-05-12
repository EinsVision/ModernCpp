#include "projects.h"

class Point
{
private:
    double x;
    double y;
    double z;

public:
    Point(double x_in = 0.0, double y_in = 0.0, double z_in = 0.0)
        : x(x_in), y(y_in), z(z_in)
    {

    }

    double getX() const 
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    double getZ() const
    {
        return z;
    }

    void print()  // << 연산자 overloading을 하자.
    {
        cout << x << " " << y << " " << z << " ";
    }

    // output stream이 있어서 member funciton으로 만들 수 없다.
    friend ostream& operator << (ostream& out, const Point& point)
    {
        out << point.x << " " << point.y << " " << point.z << " ";
        return out; // chaning하기 위해 return 한다.
    }

    // member function으로 만들 수 없다. 왜냐하면 입력이 ostream이라서.
    //ostream& operator << (ostream& out)
    //{
    //    out << this->x << " " << this->y << " " << this->z << " ";
    //    return out; // chaning하기 위해 return 한다.
    //}

    friend istream& operator >> (istream& in, Point& point)
    {
        in >> point.x >> point.y >> point.z;
        return in; // chaning하기 위해 return 한다.
    }
};

void Projects_9::m9_2()
{
    // 9.2 입출력 연산자 오버로딩 하기 (input & output operator)
    Point p1(1.7, 2.6, 3.5);
    Point p2(2.3, 3.5, 4.5);
    Point pInput;
    ofstream of("out.txt");

    p1.print();
    of << p1 << endl;
    cout << endl;

    p2.print();
    of << p2 << endl;
    cout << endl;

    cout << p1 << " " << p2 << endl;
    of << p1 << " " << p2 << endl;

    cin >> pInput;
    cout << pInput << endl;
    of << "pInput is   " << pInput << endl;

    of.close();
   
}