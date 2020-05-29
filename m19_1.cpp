#include "projects.h"

void goodbye(const string& str)
{
    cout << "Goodbye " << str << endl;
}

class Object
{
public:
    void hello(const string& str)
    {
        cout << "Hello " << str << endl;
    }
};

void Projects_19::m19_1()
{
    // 19.1 ���� �Լ��� std::function std::bind, for_each
    // ���α׷��� �������� ���� ���� �Լ��� ����Ѵ�.
    // �͸��Լ���� �Ҹ���.

    // [] lambda-introducer
    // () lambda-parameter-declaration
    // -> lambda-return-type-clause
    // {} compound-statement

    auto func = [](const int& i) -> void // return type
    {
        cout << "Lamda function call like function pointer" << endl;
    };

    func(123); // �̷��� ���� ���� ���� �Լ��� 
               // �Լ� ������ó�� ����ϴ� ���̴�.

    [](const int& i) -> void
    {
        cout << "Lamda function call like annonimous fucntion" << endl;
    }(123);


    {
        string name1 = "lambda-introducer-&";
        [&]() // reference (lambda-introducer)
        {
            cout << name1 << endl;
        }();

        string name2 = "lambda-introducer-=";
        [=]() // copy (lambda-introducer)
        {
            cout << name2 << endl;
        }();
    }

    cout << endl;
    cout << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    auto func2 = [](int val)
    {
        cout << val << endl;
    };
    // �̷��� �ᵵ ������ �Ʒ� ����� ��ȣ�Ѵ�.
    for_each(v.begin(), v.end(), func2);

    for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

    cout << "[]()->int {return 1; }()    "<<
             []()->int {return 1; }() << endl;

    function<void(int)> func3 = func2;
    // return type : void
    // �Ű����� : int
    func3(123);

    function<void(void)> func4 = bind(func3, 456);
    func4();

    {
        Object instance;
        auto f = bind(&Object::hello, &instance, placeholders::_1);

        f(string("World"));

        auto f2 = bind(&goodbye, placeholders::_1);

        f2(string("World")); 
    }
     
}