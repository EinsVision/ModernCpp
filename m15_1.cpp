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
    
    // 1. delete�� ���ϴ� ��찡 �ִ�.
    

    // 2. if ������ early return �ϴ� ��찡 �ִ�.
    /*if (true)
        return;*/

    // 3. try catch������ ���� early return�ϴ� ��찡 �ִ�.
    try
    {
        if (true)
            // delete res;
            throw - 1;
        delete res; // �޸� ������ �߻��Ѵ�.
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

    // move semantics�� ������ ���̴�.
    AutoPtr& operator = (AutoPtr& a)
    {
        if (&a == this)
            return *this;

        delete m_ptr;

        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this; // ������ ������ �߻��ϰ� �ִ�.
    }
};

void Projects_15::m15_1()
{
    // 15.1 �̵��� �ǹ̿� ����Ʈ ������ move sementic
    // doSomething(); // �̷��� ���´� ���� �޸𸮸� �����ϴ� �����̴�.
    // AutoPtr< Resource> res = new Resource;
    // AutoPtr�� �޸� ���� �� �������� �����ش�.
    
    /*{   // Runtime error �߻��ϴ� ���
        AutoPtr< Resource> res1 = new Resource; //�ʱ�ȭ�� ����
        AutoPtr< Resource> res2; //nullptr�� ������ �ִ� �����̴�.

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1; // assignment operator�� �Ǹ� �ΰ��� �����Ͱ� 
        // �ϳ��� �޸𸮸� ����Ű�� �ִ� �����̴�.

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
        // ���� ���⼭ ������ �߻���Ų��. Run time error!    
        // res1 �� �޸𸮸� �����. res2�� ������ �޸𸮸� �����.
        // ������ �޸𸮸� res2�� ������� �ϴ� �����̴�.

    }*/

    {
        AutoPtr< Resource> res1 = new Resource; 
        AutoPtr< Resource> res2; 

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1;  // ���⼭ res1�� �������� ��Ż�� ������!!
        // ��, �������� res2�� �̵���Ű�� ���̴�.
        // move semantics!
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }
    // syntax : ������ �³� �� �³ĸ� ������.
    // semantics : ������ ������ �������� �ǹ̰� ���ĸ� ������.

}