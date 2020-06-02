#include "projects.h"

class Examples
{
public:

    void ex1()
    {
        vector<int> vect;
        for (vector<int>::iterator itr = vect.begin(); itr != vect.end(); itr++)
        {
            cout << *itr;
        }

        for (auto itr = vect.begin(); itr != vect.end(); itr++)
        {
            cout << *itr;
        }

        for (auto itr : vect)
        {
            cout << itr;
        }
    }

    void ex2()
    {
        // auto는 데이터 type을 추론할 때 다 때버리고 자료형만 갖는다.
        int x = int();
        auto auto_x = x;
        const int& crx = x;
        auto auto_crx = crx;
        const auto& auto_crx2 = crx;
        volatile int vx = 1024;
        auto avx = vx;
    }

    template <class T>
    void func_ex3_old(T arg)
    {

    }

    template <class T>
    void func_ex3(const T& arg)
    {

    }

    void ex3()
    {
        const int& crx = 123;
        func_ex3(crx);
    }

    void ex4()
    {
        const int  c = 0;
        auto& rc = c; // auto 가 rc를 const로 받아 온다.
        // 왜냐하면 const여야 c를 받을 수 있기 때문이다.
        // rc = 123; // error
    }

    void ex5()
    {
        int i = 43;
        auto&& r1 = i;  // l-value
        auto&& r2 = 42; // r-value
    }

    void ex6()
    {
        int x = 43;
        const int* p1 = &x;
        auto p2 = p1;
    }

    template <typename T, typename S>
    void func_ex7(T lhs, S rhs)
    {
        auto prod1 = lhs * rhs;
        typedef decltype (lhs* rhs) product_type;

        product_type prod2 = lhs * rhs;
        decltype (lhs * rhs) prod3 = lhs * rhs;
        cout << "prod3: "<<prod3 << endl;
    }
    void ex7()
    {
        func_ex7(7, 3.1415);
    }

    template <typename T, typename S>
    auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)
    {
        return lhs * rhs;
    }

    void ex8()
    {
        cout << func_ex8(7, 3.1415) << endl;
    }

    struct ss
    {
        int m_x;
        ss()
        {
            m_x = 22;
        }
    };

    void ex9()
    {
        int x;
        const int cx = 43;
        const int& crx = x;
        const ss* p = new ss();

        auto a = x;
        auto b = cx;
        auto c = crx;
        auto d = p;
        auto e = p->m_x;

        typedef decltype(x) x_type;
        typedef decltype(cx) cx_type;
        typedef decltype(crx) crx_type;
        typedef decltype(p->m_x) m_x_type;

        // to add references to l values 
        typedef decltype((x)) x1_type;
        typedef decltype((cx)) cx1_type;
        typedef decltype((crx)) crx1_type; // & 하나 더 붙지 않는다.
        typedef decltype((p->m_x)) m1_x_type;
    }

    const ss foo()
    {
        return ss();
    }

    const int& footbar()
    {
        return 123;
    }

    void ex10()
    {
        vector<int> vect = { 43,44 };
        auto a = foo();

        auto b = footbar();
        typedef decltype(footbar()) footbar_type;

        auto itr = vect.begin();
        typedef decltype(vect.begin()) itrType;

        auto first_element = vect[0];
        decltype(vect[1]) second_element = vect[1];
    }
};

void Projects_19::m19_8()
{
    // 19.8 자료형 추론 auto와 decltype
    Examples ex;
    ex.ex1();
    ex.ex2();
    ex.ex3();
    ex.ex4();
    ex.ex5();
    ex.ex6();
    ex.ex7();
    ex.ex8();
    ex.ex9();
    ex.ex10();
}