#include "projects.h"

template <class T>
class AutoPtr154
{
//private:
public:
    T* m_ptr;

public:
    AutoPtr154(T* ptr = nullptr)
        :m_ptr(ptr)
    {
        cout << "AutoPtr154 default constructor" << endl;
    }

    ~AutoPtr154()
    {
        cout << "AutoPtr154 destructor" << endl;

        if (m_ptr != nullptr)
            delete m_ptr;
    }

    AutoPtr154(const AutoPtr154& a)
    {
        cout << "AutoPtr154 copy constructor" << endl;

        // deep copy 
        m_ptr = new T;
        *m_ptr = *a.m_ptr;
    }

    AutoPtr154(AutoPtr154&& a)
        :m_ptr(a.m_ptr) // pointer�� �����ϰ� �ִ�.
    { // deep copy �� ����. �����Ǹ� �̵���Ű�� ���̴�.
        a.m_ptr = nullptr; // ���� �߿��� �κ��̴�!!
        cout << "AutoPtr154 move constructor" << endl;
    }

    AutoPtr154& operator = (const AutoPtr154& a)
    {
        cout << "AutoPtr154 copy assignment" << endl;

        if (&a == this)
            return *this;

        if (m_ptr != nullptr)
            delete m_ptr;

        m_ptr = new T;
        *m_ptr = *a.m_ptr;

        return *this; // ������ ������ �߻��ϰ� �ִ�.
    }

    AutoPtr154& operator = (AutoPtr154&& a) // R-value 
                                            // ��� �ִٰ� �������.
    {
        cout << "AutoPtr154 move assignment" << endl;
        // ���⼭�� ���� �� �� key�� �Ѱ��ִ� �����̴�.
        if (&a == this)
            return *this;

        if (m_ptr != nullptr)
            delete m_ptr;

        // shallow copy (deep copy�� ����.)
        m_ptr = a.m_ptr; // �� �κ��� key�� �Ѱ��ִ� �����̴�.
        // move �̱� ������ pointer�� �����ϰ� �ִ�.
        // �����Ǹ� �̵������ִ� ���̴�.
        a.m_ptr = nullptr;

        return *this;
    }

    
    // AutoPtr154(const AutoPtr154& a) = delete;
    // AutoPtr154& operator = (const AutoPtr154& a) = delete;
};

class Resource154
{
public:
    int* m_data = nullptr;
    unsigned int m_length = 0;

public:
    Resource154()
    {
        cout << "Resource default constructed" << endl;
    }

    Resource154(unsigned int length)
    {
        cout << "Resource length constructed" << endl;
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource154(const Resource154& res)
    {
        cout << "Resource copy constructed" << endl;

        Resource154(res.m_length);
        for (unsigned int i = 0; i < m_length; i++)
        {
            m_data[i] = res.m_data[i];
            // deep copy�� �ϰ� �ִ�.
        }
    }

    Resource154& operator = (Resource154& res)
    {
        cout << "Resource154 copy assignment " << endl;
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

    ~Resource154()
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


void Projects_15::m15_4()
{
    // 15.4 std::move
    {
        AutoPtr154<Resource154> res1(new Resource154(10000));

        cout << res1.m_ptr << endl;
        /*AutoPtr154<Resource154> res2 = res1;*/
        AutoPtr154<Resource154> res2 = std::move(res1);
        // R-value�� ���� ����ϴ� �Լ��� ������ �ǰ� �ȴ�.
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
        cout << endl;
    }

    {
        vector<string> v;
        string str = "Hello";

        v.push_back(str);       // L-value 

        cout << str << endl;
        cout << v[0] << endl;

        v.push_back(move(str)); // R-value 
        // move�� �̸� �����س��� ������ std::move�� �� �� �־���.
        cout << str << endl;    // move �Ǿ ��������.
        cout << v[0] << " " << v[1] << endl; // str�� v[1]���� �̵�!!
    }
}