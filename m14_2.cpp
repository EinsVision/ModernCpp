#include "projects.h"

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier

void last() throw(int) // int exception을 throw 할 수 도 있다라는 의미!
{         //throw() 이 의미는 예외를 안던질 거라는 의미이다.
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    //throw - 1;
    throw 'a'; // 이 경우 catch 해주는 곳이 없어서 run time error 발생
    // uncaught exceptions 상황 처리에 대해 알아보자.

    cout << "End last " << endl;    // 실행되지 않는다.
}

void third()
{
    cout << "third" << endl;

    last();

    cout << "End third " << endl;   // 실행되지 않는다.
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }
    catch (double)                  //실행되지 않는다.
    {
        cerr << "second caught double exception" << endl;
    }

    cout << "End second " << endl;
}

void first()
{
    cout << "first" << endl;

    try
    {
        second();
    }
    catch (double)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first " << endl;
}

void Projects_14::m14_2()
{
    // 14.2 예외처리와 스택 되감기
    cout << "Start " << endl;
    try
    {
        first();
    }
    catch (int)
    {
        cerr << "main caught int exception" << endl;
    }
    // 못잡는 오류가 발생할 수 있다. 
    // uncaught exceptions 상황 처리에 대해 알아보자. 
    catch (...) // catch all handlers
    { // 어떤 type이든지 다 받아 주겠다는 의미이다.
        cerr << "main caught ellipses exception" << endl;
    }

    cout << "End " << endl;
}