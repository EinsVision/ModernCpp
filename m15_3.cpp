#include "projects.h"

class Resource153
{
public:
    int* m_data = nullptr;
    unsigned int m_length = 0;

public:
    Resource153()
    {
        cout << "Resource default constructed" << endl;
    }

    Resource153(unsigned int length)
    {
        cout << "Resource length constructed" << endl;
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource153(const Resource153& res)
    {
        cout << "Resource copy constructed" << endl;
        
        Resource153(res.m_length);
        for (unsigned int i = 0; i < m_length; i++)
        {
            m_data[i] = res.m_data[i];
            // deep copy�� �ϰ� �ִ�.
        }
    }

    Resource153& operator = (Resource153& res)
    {
        cout << "Resource153 copy assignment " << endl;
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

    ~Resource153()
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
};


template <class T>
class AutoPtr153
{
private:
    T* m_ptr;

public:
    AutoPtr153(T* ptr = nullptr)
        :m_ptr(ptr)
    {
        cout << "AutoPtr153 default constructor" << endl;
    }

    ~AutoPtr153()
    {
        cout << "AutoPtr153 destructor" << endl;

        if (m_ptr != nullptr)
            delete m_ptr;
    }

    //AutoPtr153(const AutoPtr153& a)
    //{
    //    cout << "AutoPtr153 copy constructor" << endl;

    //    // deep copy 
    //    m_ptr = new T;
    //    *m_ptr = *a.m_ptr;
    //}

    AutoPtr153(AutoPtr153&& a)
        :m_ptr(a.m_ptr) // pointer�� �����ϰ� �ִ�.
    { // deep copy �� ����. �����Ǹ� �̵���Ű�� ���̴�.
        a.m_ptr = nullptr; // ���� �߿��� �κ��̴�!!
        cout << "AutoPtr153 move constructor" << endl;
    }

    //AutoPtr153& operator = (const AutoPtr153& a)
    //{
    //    cout << "AutoPtr153 copy assignment" << endl;

    //    if (&a == this)
    //        return *this;

    //    if (m_ptr != nullptr)
    //        delete m_ptr;

    //    m_ptr = new T;
    //    *m_ptr = *a.m_ptr;

    //    return *this; // ������ ������ �߻��ϰ� �ִ�.
    //}

    AutoPtr153& operator = (AutoPtr153&& a) // R-value 
                                            // ��� �ִٰ� �������.
    {
        cout << "AutoPtr153 move assignment" << endl;
        // ���⼭�� ���� �� �� key�� �Ѱ��ִ� �����̴�.
        if (&a == this)
            return *this;

        if(m_ptr != nullptr)
            delete m_ptr;

        // shallow copy (deep copy�� ����.)
        m_ptr = a.m_ptr; // �� �κ��� key�� �Ѱ��ִ� �����̴�.
        // move �̱� ������ pointer�� �����ϰ� �ִ�.
        // �����Ǹ� �̵������ִ� ���̴�.
        a.m_ptr = nullptr;

        return *this;
    }   
};

AutoPtr153<Resource153> generateResource()
{
    AutoPtr153< Resource153> res(new Resource153(10000));
    return res;
}

class Timer153
{
    using clock_t = chrono::high_resolution_clock;
    using second_t = chrono::duration<double, ratio<1>>;
    chrono::time_point<clock_t> start_time = clock_t::now();

public:
    void elapsed()
    {
        chrono::time_point<clock_t> end_time = clock_t::now();
        cout << chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
    }
};

void Projects_15::m15_3()
{
    // 15.3 �̵� �����ڿ� �̵� ����
    streambuf* orig_buf = cout.rdbuf();

    Timer153 timer;
    {
        AutoPtr153< Resource153> main_res;
        main_res = generateResource();
    }
    cout.rdbuf(orig_buf);
    timer.elapsed();
}