#include "projects.h"

void Projects_4::m4_6()
{
    // 4.6 ���ڿ� std string �Ұ�
    // C style
    const char str[] = "Hello, C style string";
    // C++ style
    const string my_hello_1 = "Hello, C++ style string";
    const string my_hello_2("Hello, C++ style string");
    const string my_hello_3{ "Hello, C++ style string" };
    // string�� ������ ����� ���� �ڷ����̶�� �� �� �ִ�.

    cout << str << endl;
    cout << my_hello_1 << endl; 
    cout << my_hello_2 << endl;
    cout << my_hello_3 << endl;

    string my_ID = "123"; // ���ڷθ� �ʱ�ȭ�� �����ϴ�.

    cout << "Your name? : ";
    string name;
    // cin >> name;
    getline(cin, name); // enter�� ġ�� ������ line�� �Է� �޴´�.

    cout << "Your age? : ";
    string age;
    // cin >> age;
    getline(cin, age); // enter�� ġ�� ������ line�� �Է� �޴´�.
        
    cout << name << "    " << age << endl;

    // ���ڿ� string ���ϱ�
    string a("Hello World ");
    string b("welcom ");
    string ab = a + b;
    ab += "come to my place ";
    cout << ab << " size: " << ab.length() << endl;

}
