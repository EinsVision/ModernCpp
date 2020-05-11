#include "projects.h"

// ���漱�� 
class B;

class A
{
private:
    int value = 5;
    friend void accessClassA(A& a); // �̷��� �����ϸ� accessClassA()
    // �� �Լ����� class A�� private memeber variable ������ �����ϴ�.
    friend void accessClassAandB(A& a, B& b);
    // �̷��� �����ϸ� accessClassAandB()
    // �� �Լ����� class A�� private memeber variable ������ �����ϴ�.
    friend class B; // �̷��� ���´� ������ class B�� �����ִ� ���̴�.
    // Ư���� �Լ��� �����ִ� ��ɵ� ������ �ִ�.
    // ����� ���Ǹ� ������.
};

class B
{
private:
    int value = 7;
    friend void accessClassAandB(A& a, B& b); 
    // �̷��� �����ϸ� accessClassAandB()
    // �� �Լ����� class A�� private memeber variable ������ �����ϴ�.

public:
    void printClassA_variable(A& a)
    {
        cout<<"a.value : "<<a.value << endl;
    }
};


void accessClassA(A& a)
{
    cout << a.value << endl;
}

void accessClassAandB(A& a, B& b)
{
    cout << a.value << " " << b.value << endl;
}

void Projects_8::m8_12()
{
    // 8.12 ģ�� �Լ��� Ŭ���� friend
    // encapsulation�� ��Ű�� ���� friend ������ ���Դ�.
    A a;
    B b;
    accessClassA(a);

    accessClassAandB(a, b);

    b.printClassA_variable(a);
}