#include "projects.h"

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier

void last() throw(int) // int exception�� throw �� �� �� �ִٶ�� �ǹ�!
{         //throw() �� �ǹ̴� ���ܸ� �ȴ��� �Ŷ�� �ǹ��̴�.
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    //throw - 1;
    throw 'a'; // �� ��� catch ���ִ� ���� ��� run time error �߻�
    // uncaught exceptions ��Ȳ ó���� ���� �˾ƺ���.

    cout << "End last " << endl;    // ������� �ʴ´�.
}

void third()
{
    cout << "third" << endl;

    last();

    cout << "End third " << endl;   // ������� �ʴ´�.
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }
    catch (double)                  //������� �ʴ´�.
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
    // 14.2 ����ó���� ���� �ǰ���
    cout << "Start " << endl;
    try
    {
        first();
    }
    catch (int)
    {
        cerr << "main caught int exception" << endl;
    }
    // ����� ������ �߻��� �� �ִ�. 
    // uncaught exceptions ��Ȳ ó���� ���� �˾ƺ���. 
    catch (...) // catch all handlers
    { // � type�̵��� �� �޾� �ְڴٴ� �ǹ��̴�.
        cerr << "main caught ellipses exception" << endl;
    }

    cout << "End " << endl;
}