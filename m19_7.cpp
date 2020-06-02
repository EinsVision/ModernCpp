#include "projects.h"

struct MyStruct
{

};

void func(MyStruct& s)
{ // �Լ� �����ε��� �ȴ�.
    cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{ // �Լ� �����ε��� �ȴ�.
    cout << "Pass by R-ref" << endl;
}

// Template�� ����� ���� L-reference���� R-reference���� ���� ����
template<typename T>
void func_wrapper_old(T t)
{ // templatetize�Ǹ鼭 R value, L value ������ ���󰣴�.
    func(t);
}

// perfect forwarding�� �Ѵ�.
template<typename T>
void func_wrapper(T&& t)
{
    func(forward<T>(t));
}

class CustumVector
{
public:
    unsigned int n_data = 0;
    int* ptr = nullptr;

    CustumVector(const unsigned int& _n_data, const int& _init = 0)
    {
        cout << "Constructor" << endl;
        init(_n_data, _init);
    }

    CustumVector(CustumVector& l_input)
    {
        cout << "copy constructor" << endl;
        init(l_input.n_data);
        for (unsigned int i = 0; i < n_data; i++)
        {
            ptr[i] = l_input.ptr[i];
        }
    }

    CustumVector(CustumVector&& r_input)
    {
        cout << "move constructor" << endl;
        
        n_data = r_input.n_data;
        ptr = r_input.ptr;

        r_input.n_data = 0;
        r_input.ptr = nullptr;
    }

    ~CustumVector()
    {
        delete[] ptr;
    }

    void init(const unsigned int& _n_data, const int& _init = 0)
    {
        n_data = _n_data;
        ptr = new int[n_data];
        for (unsigned int i = 0; i < n_data; i++)
        {
            ptr[i] = _init;
        }
    }
};

void passbyFunc(CustumVector& vec)
{
    cout << "Pass by L-reference" << endl;
    CustumVector new_vec(vec);
}

void passbyFunc(CustumVector&& vec)
{
    cout << "Pass by R-reference" << endl;
    CustumVector new_vec(move(vec));
}

template <typename T>
void passbyFuncTemplate(T && vec)
{
    passbyFunc(forward<T>(vec));
}

void Projects_19::m19_7()
{
    // 19.7 �Ϻ��� ���ް� std::forward
    // �Ϻ��� ������ �ǹ̿� move semantic�� ��� ����Ǵ��� ���캻��.
    MyStruct s;
    func(s);          // L-Reference
    func(MyStruct()); // R-Reference
    cout << endl; 

    func_wrapper(s);          // L-Rerecne�� ���ڸ� �־ �ν� ���� 
    func_wrapper(MyStruct()); // R-Rerence�� ���ڷ� �־����� �ν� ����
    // forward�Լ��� �Ἥ ����� �����Ѵ�.

    CustumVector my_vec(10, 1024); // construtor ����
    CustumVector copy_cv(my_vec);  // copy constructor ����
    CustumVector move_cv(move(my_vec));  // copy constructor ����

    cout << my_vec.n_data << endl;
    cout << endl;

    passbyFunc(my_vec);
    passbyFunc(CustumVector(10,0));
    passbyFuncTemplate(my_vec);
    passbyFuncTemplate(CustumVector(10, 0));
}