#include "projects.h"

void Projects_14::m14_4()
{
    // 14.4 exception 소개 (std::exception) 
    // 다양한 예외에 대해 구현이 되어 있다. 
    try
    {
        string s;
        s.resize(-1);

        //throw runtime_error("Runtime error Happened");
    }
    //catch (length_error & exp) // 자식 class 이다.
    //{
    //    cout << "length_error" << endl;
    //    cerr << exp.what() << endl;
    //}
    catch (exception& exp) // 부모 class 이다.
    {
        cout << typeid(exp).name() << endl; // 자식 class의 이름이 나옴
        cerr << exp.what() << endl;
    }
}