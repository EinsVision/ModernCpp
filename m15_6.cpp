#include "projects.h"

class Resource156
{
public:
    int* m_data = nullptr;
    unsigned int m_length = 0;

public:
    Resource156()
    {
        cout << "Resource default constructed" << endl;
    }

    Resource156(unsigned int length)
    {
        cout << "Resource length constructed" << endl;
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource156(const Resource156& res)
    {
        cout << "Resource copy constructed" << endl;

        Resource156(res.m_length);
        for (unsigned int i = 0; i < m_length; i++)
        {
            m_data[i] = res.m_data[i];
            // deep copy�� �ϰ� �ִ�.
        }
    }

    Resource156& operator = (Resource156& res)
    {
        cout << "Resource156 copy assignment " << endl;
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
        // deep copy�� �ϰ� �ִ�.
        return *this;

    }

    ~Resource156()
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

void Projects_15::m15_6()
{
    // 15.6 std::shared_ptr
    // �������� ���������� ������ �� �ִ� shared_ptr�� ���� ����.
    // ���������� ��𿡼� �������� �����ߴ��� shared_ptr�� ����Ѵ�.
    Resource156* res = new Resource156(3);
    res->setAll(1);
    shared_ptr< Resource156> ptr1(res);

    ptr1->print();

    {
        shared_ptr< Resource156> ptr2(ptr1);

        //������ ������ �Ǵ� ����̴�.
        // shared_ptr< Resource156> ptr2(res);
        // �̷��� �����ϸ� ptr2�� ��𿡼� �������� �����ϴ��� �� �� ����.
        
        ptr2->setAll(3);
        ptr2->print();

        cout << "Going out of the block" << endl;
    }
    ptr1->print();
    
}