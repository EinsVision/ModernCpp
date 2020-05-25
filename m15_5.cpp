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
            // deep copy�� �ϰ� �ִ�.
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
        // deep copy�� �ϰ� �ִ�.
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
{// �Ű������� ������ ������ �ȵȴ�.
    // ���� �̷��� �ϸ� local variable ó�� �۵��ؼ� destroy�� ȣ���
    res->setAll(10);
}

void Projects_15::m15_5()
{
    // 15.5 std::unique_ptr
    // pointer�� ����Ű�� �ִ� �������� �������� �Ѱ����� ���� ��� 
    // ����ϴ� smart pointer unique_ptr! �� ���� ����.
            // Resource155* res = new Resource155(1000);
    // delete�� ���� ������ �޸� ������ �߻��Ѵ�.
    // �� ������ �ذ��ϱ� ���ؼ��� unique_ptr�� ����� �� �ִ�.

    {
        unique_ptr< Resource155> res(new Resource155(1000));
        // Resource155* res = new Resource155(1000);
        // ���ʹ� �ٸ��� �Ҹ��ڵ� ȣ���Ѵ�.
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

        // unique_ptr�� ���簡 �ȵȴ�.
        // res2 = res1; //�������� �Ѱ����� �־�� �ϱ� ������ ���簡 �ȵ�
        // copy semantic�� ��� �� �� ���� move semantic�� ��� ����!
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
        unique_ptrTransfer(move(res1)); // �̷��� ������ �ٲ� �� �ִ�.
        // ������ res1�� unique_ptr�̱� ������ pointer�� �Ѿ�� ������
        cout << boolalpha;
        cout << "res1: " << static_cast<bool>(res1) << endl;

        // res1->print();
    }

    //{ // �� ������ �������� �־�� �ȵȴ�.
    //    Resource155* res = new Resource155;
    //    unique_ptr< Resource155> res1(res);
    //    unique_ptr< Resource155> res2(res);

    //    delete res;
    //}
}