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
    // 19.1 람다 함수와 std::function std::bind, for_each
    // 프로그램의 유연성을 위해 람다 함수를 사용한다.
    // 익명함수라고 불린다.

    // [] lambda-introducer
    // () lambda-parameter-declaration
    // -> lambda-return-type-clause
    // {} compound-statement

    auto func = [](const int& i) -> void // return type
    {
        cout << "Lamda function call like function pointer" << endl;
    };

    func(123); // 이렇게 쓰는 것은 람다 함수를 
               // 함수 포인터처럼 사용하는 것이다.

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
    // 이렇게 써도 되지만 아래 방법을 선호한다.
    for_each(v.begin(), v.end(), func2);

    for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

    cout << "[]()->int {return 1; }()    "<<
             []()->int {return 1; }() << endl;

    function<void(int)> func3 = func2;
    // return type : void
    // 매개변수 : int
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