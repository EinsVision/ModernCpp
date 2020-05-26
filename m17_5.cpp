#include "projects.h"

void Projects_17::m17_5()
{
    // 17.5 string 대입, 교환, 덧붙이기, 삽입 append assign swap
    string str1("One");
    string str2(str1);
    cout << "str2: "<<str2 << endl;

    str2.assign("Two").append(" three").append(" Four");
    cout << "str2: " << str2 << endl;
    
    cout << "Str1: " << str1 << endl;
    cout << "Str2: " << str2 << endl;

    swap(str1, str2);

    cout << "Str1: " << str1 << endl;
    cout << "Str2: " << str2 << endl;

    str1.swap(str2);

    cout << "Str1: " << str1 << endl;
    cout << "Str2: " << str2 << endl;

    str1 += str2;
    cout << "str1 += str2: "<<str1 << endl;

    str1.push_back('a');
    cout << "str1.push_back('a'): " << str1 << endl;

    str1.insert(2, "bbb");
    cout << "str1.insert(2, bbb): " << str1 << endl;
}