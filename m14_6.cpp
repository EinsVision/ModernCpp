#include "projects.h"

class A146
{
public:
    ~A146() // destructor에서는 예외를 throw하지 못하게 되어 있다.
    {
        //throw "error"; //소멸자 안에서 throw하는 것은 금기시 되는 방법
    }
};

void Projects_14::m14_6()
{
    // 14.6 예외처리의 위험성과 단점
    // 논리적으로 대처하기 어려운 상황에서 예외처리를 하는 것이 좋다.
    // 1. 메모리 누수가 발생할 수 있는 문제점이 있다.
    try
    {
        int* i = new int[1000];
        // smart pointer 사용예
        unique_ptr<int> up_i(i); // 알아서 메모리를 지워준다.
        // 1번 문제를 해결해 준다.

        throw "error";

        // smart pointer를 쓰면 delete과정이 필요없다. 
        // delete[] i; // 메모리 누수가 발생한다.
        A146 a; 
        // 2. 비번하게 발생하는 소멸자에서는 throw를 할 수 없다.
    }
    catch(...)
    {
        cout << "Catch " << endl;
    }
}