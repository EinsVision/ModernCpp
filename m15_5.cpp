#include "projects.h"

class Resource155
{
public:
    int* m_data = nullptr;
    unsigned int m_length = 0;

public:
    Resource155()
    {
        cout << "Resource default constructed" << endl;
    }

    Resource155(unsigned int length)
    {
        cout << "Resource length constructed" << endl;
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource155(const Resource155& res)
    {
        cout << "Resource copy constructed" << endl;

        Resource155(res.m_length);
        for (unsigned int i = 0; i < m_length; i++)
        {
            m_data[i] = res.m_data[i];
            // deep copy를 하고 있다.
        }
    }

    Resource155& operator = (Resource155& res)
    {
        cout << "Resource155 copy assignment " << endl;
        if (&res == this)
            return *this;

        if (this->m_data != nullptr)
            delete[] m_data;

        m_length = res.m_length;
        m_data = new int[m_length];

        for (unsigned int i = 0; i < m_length; i++)
        {
            m_data[i] = res.m_data[i];
        }
        // deep copy를 하고 있다.
        return *this;

    }

    ~Resource155()
    {
        cout << "Resource destructed" << endl;
        if (m_data != nullptr)
        {
            delete[] m_data;
        }
    }

    void print()
    {
        for (int i = 0; i < m_length; i++)
        {
            cout << m_data[i] << " ";
        }
        cout << endl;
    }

    void setAll(const int& a)
    {
        for (int i = 0; i < m_length; i++)
        {
            m_data[i] = a;
        }
        cout << endl;
    }
};

// void unique_ptrTransfer(unique_ptr< Resource155>& res)
void unique_ptrTransfer(unique_ptr< Resource155> res)
{// 매개변수를 값으로 받으면 안된다.
    // 또한 이렇게 하면 local variable 처럼 작동해서 destroy가 호출됨
    res->setAll(10);
}

void Projects_15::m15_5()
{
    // 15.5 std::unique_ptr
    // pointer가 가르키고 있는 데이터의 소유권이 한곳에만 속할 경우 
    // 사용하는 smart pointer unique_ptr! 에 대해 배운다.
            // Resource155* res = new Resource155(1000);
    // delete을 하지 않으면 메모리 누수가 발생한다.
    // 이 문제를 해결하기 위해서는 unique_ptr을 사용할 수 있다.

    {
        unique_ptr< Resource155> res(new Resource155(1000));
        // Resource155* res = new Resource155(1000);
        // 위와는 다르게 소멸자도 호출한다.
    }

    {
        // unique_ptr<int> upi(new int);
        // unique_ptr<Resource155> res1(new Resource155(5));
        auto res1 = make_unique< Resource155>(5);
        res1->setAll(5);
        res1->print();

        unique_ptr< Resource155> res2;
        
        cout << boolalpha;
        cout << "res1: " << static_cast<bool>(res1) << endl;
        cout << "res2: " << static_cast<bool>(res2) << endl;

        // unique_ptr은 복사가 안된다.
        // res2 = res1; //소유권이 한곳에만 있어야 하기 때문에 복사가 안됨
        // copy semantic는 사용 할 수 없고 move semantic만 사용 가능!
        res2 = move(res1);
        cout << boolalpha;
        cout << "res1: " << static_cast<bool>(res1) << endl;
        cout << "res2: " << static_cast<bool>(res2) << endl;

        if (res2 != nullptr)
        {
            cout << "res2: " << endl;
            res2->print();
        }

        if (res1 != nullptr)
        {
            cout << "res1: " << endl;
            res1->print();
        }

    }

    {
        unique_ptr<Resource155> res1(new Resource155(5));
        res1->setAll(1);
        res1->print();

        // unique_ptrTransfer(res1); 
        unique_ptrTransfer(move(res1)); // 이렇게 강제로 바꿀 수 있다.
        // 하지만 res1은 unique_ptr이기 때문에 pointer가 넘어가서 없어짐
        cout << boolalpha;
        cout << "res1: " << static_cast<bool>(res1) << endl;

        // res1->print();
    }

    //{ // 두 군데에 소유권을 주어서는 안된다.
    //    Resource155* res = new Resource155;
    //    unique_ptr< Resource155> res1(res);
    //    unique_ptr< Resource155> res2(res);

    //    delete res;
    //}
}