#include "projects.h"

void Projects_4::m4_6()
{
    // 4.6 문자열 std string 소개
    // C style
    const char str[] = "Hello, C style string";
    // C++ style
    const string my_hello_1 = "Hello, C++ style string";
    const string my_hello_2("Hello, C++ style string");
    const string my_hello_3{ "Hello, C++ style string" };
    // string은 일종의 사용자 정의 자료형이라고 볼 수 있다.

    cout << str << endl;
    cout << my_hello_1 << endl; 
    cout << my_hello_2 << endl;
    cout << my_hello_3 << endl;

    string my_ID = "123"; // 문자로만 초기화가 가능하다.

    cout << "Your name? : ";
    string name;
    // cin >> name;
    getline(cin, name); // enter를 치기 전까지 line을 입력 받는다.

    cout << "Your age? : ";
    string age;
    // cin >> age;
    getline(cin, age); // enter를 치기 전까지 line을 입력 받는다.
        
    cout << name << "    " << age << endl;

    // 문자열 string 더하기
    string a("Hello World ");
    string b("welcom ");
    string ab = a + b;
    ab += "come to my place ";
    cout << ab << " size: " << ab.length() << endl;

}
