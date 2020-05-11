#include "projects.h"

class Ad
{
public:
    Ad()
    {
        cout << "Constructor" << endl;
    }

    ~Ad()
    {
        cout << "Destructor" << endl;
    }
    void print()
    {
        cout << "Hello world" << endl;
    }
};

void Projects_8::m8_13()
{
    // 8.13 익명 객체 anonymous object
    // 객체를 사용할 때 이름이 붙은 변수를 선언하지 않고 바로 사용하는 것
    /* Ad a;
    a.print();*/ // 일반적인 객체 생성

    Ad().print(); // 이렇게 익명 객체를 만들어 사용할 수 있다.
    // 익명 객체를 쓰면 실행되고 사라져버리기 때문에 재사용할 수 없다.
    Ad().print(); 

    cout << int(6) + int(8) << endl;
}