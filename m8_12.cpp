#include "projects.h"

// 전방선언 
class B;

class A
{
private:
    int value = 5;
    friend void accessClassA(A& a); // 이렇게 선언하면 accessClassA()
    // 이 함수에서 class A의 private memeber variable 접근이 가능하다.
    friend void accessClassAandB(A& a, B& b);
    // 이렇게 선언하면 accessClassAandB()
    // 이 함수에서 class A의 private memeber variable 접근이 가능하다.
    friend class B; // 이러한 형태는 통제로 class B에 열어주는 것이다.
    // 특정한 함수에 열어주는 기능도 가지고 있다.
    // 선언과 정의를 나눈다.
};

class B
{
private:
    int value = 7;
    friend void accessClassAandB(A& a, B& b); 
    // 이렇게 선언하면 accessClassAandB()
    // 이 함수에서 class A의 private memeber variable 접근이 가능하다.

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
    // 8.12 친구 함수와 클래스 friend
    // encapsulation을 지키기 위해 friend 개념이 나왔다.
    A a;
    B b;
    accessClassA(a);

    accessClassAandB(a, b);

    b.printClassA_variable(a);
}