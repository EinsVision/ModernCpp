#include "projects.h"

class Resource
{
public:
    int m_data[100];

public:
    Resource()
    {
        cout << "Resource constructed" << endl;
    }

    ~Resource()
    {
        cout << "Resource destructed" << endl;
    }
};

void doSomething()
{
    Resource* res = new Resource;
    
    // 1. delete을 안하는 경우가 있다.
    

    // 2. if 문에서 early return 하는 경우가 있다.
    /*if (true)
        return;*/

    // 3. try catch문으로 인해 early return하는 경우가 있다.
    try
    {
        if (true)
            // delete res;
            throw - 1;
        delete res; // 메모리 누수가 발생한다.
    }
    catch (...)
    {

    }
    return;
}

template <class T>
class AutoPtr
{
public:
    T* m_ptr = mullptr;

public:
    AutoPtr(T* ptr = nullptr)
        :m_ptr(ptr)
    {}
    ~AutoPtr()
    {
        if (m_ptr != nullptr)
            delete m_ptr;
    }

    T& operator*() const
    {
        return *m_ptr;
    }

    T* operator->() const
    {
        return m_ptr;
    }

    bool isNull() const
    {
        return (m_ptr == nullptr);
    }

    AutoPtr(AutoPtr& a)
    {
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
    }

    // move semantics를 구현한 것이다.
    AutoPtr& operator = (AutoPtr& a)
    {
        if (&a == this)
            return *this;

        delete m_ptr;

        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this; // 소유권 이전이 발생하고 있다.
    }
};

void Projects_15::m15_1()
{
    // 15.1 이동의 의미와 스마트 포인터 move sementic
    // doSomething(); // 이러한 형태는 직접 메모리를 관리하는 형태이다.
    // AutoPtr< Resource> res = new Resource;
    // AutoPtr은 메모리 생성 및 해제까지 잘해준다.
    
    /*{   // Runtime error 발생하는 경우
        AutoPtr< Resource> res1 = new Resource; //초기화가 됐음
        AutoPtr< Resource> res2; //nullptr을 가지고 있는 상태이다.

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1; // assignment operator가 되면 두개의 포인터가 
        // 하나의 메모리를 가리키고 있는 형태이다.

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
        // 지금 여기서 문제를 발생시킨다. Run time error!    
        // res1 이 메모리를 지운다. res2도 동일한 메모리를 지운다.
        // 지워진 메모리를 res2도 지우려고 하는 형태이다.

    }*/

    {
        AutoPtr< Resource> res1 = new Resource; 
        AutoPtr< Resource> res2; 

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1;  // 여기서 res1의 소유권을 박탈해 버린다!!
        // 즉, 소유권을 res2로 이동시키는 것이다.
        // move semantics!
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }
    // syntax : 문법에 맞냐 안 맞냐를 따진다.
    // semantics : 문법에 맞지만 내부적인 의미가 뭐냐를 따진다.

}