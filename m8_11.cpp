#include "projects.h"

class simple8_11
{
public:
    class _init
    {
    public:
        _init() // inner class를 사용하면 static 변수 초기화가 가능하다.
        {
            value = 1234;
        }
    };
private:
    static int value;
    // value가 public인 경우 같은 class의 모든 instance에 접근이 가능하다. 
    // 주소가 하나지만 모두 공유한다.
    // static int value가 되면 여러 개의 instance들이 하나의 주소를 갖게
    // 된다.
    int m_value;
    static _init s_initailization;
public:
        
    simple8_11()
        : m_value(123)
    {}

    static int getValue() 
    {
        cout << "value address in getValue()" << &value << endl;
        return value;
        // return this->value;
        // 이렇게 static member function은 this pointer 사용 못함
        // 그 이유는 static member variable이 특정 instance에 속해있지
        // 않았던 것 처럼, this pointer를 사용할 수 없다.
       
        // return m_value;
        // 이렇게 일반적인 member 변수도 접근할 수 없다.
        // 즉, this로 접근하는 모든 것을 사용할 수 없다.
        // 그 이유는 static member variable이 특정 instance에 속해있지
        // 않았던 것 처럼, this pointer를 사용할 수 없다.
    }
    int getValue_normal()
    {
        return this->value;
        // 특정 instance의 주소를 받아다가 그 instance에 속해있는 
        // 맴버 변수들을 사용하겠다는 것이다.
    }
};

int simple8_11::value = 1;
simple8_11::_init simple8_11::s_initailization;


void Projects_8::m8_11()
{
    // 8.11 정적 멤버 함수 (static member function)

    // cout << "simple8_11::value: " << simple8_11::value << endl; 
    // value를 private으로 설정하면 더 이상 바로 접근이 되지 않는다.
    // 그래서 정적 멤버 함수 (static member function)이 필요하다.
    // 특정 instance가 없어도 멤버 변수에 접근이 가능했었다. 
    // 특정 instance와 상관없이 멤버 변수에 접근할 수 있는 함수 선언이 가능
    // 그래서 정적 멤버 함수를 선언한다. 그러면 아래와 같이 접근 가능하다.
    cout << simple8_11::getValue() << endl;
    // value를 private으로 설정해도 getValue()를 통해 접근이 가능하다.

    simple8_11 sim;

    /*cout << sim.value<< " address: "<<&sim.value << endl;*/
    // value를 private으로 설정하면 더 이상 바로 접근이 되지 않는다.
    // 그래서 정적 멤버 함수 (static member function)이 필요하다.

    cout << sim.getValue() << endl;

    simple8_11 sim1, sim2;

    // 함수 포인터에 대해 생각해보자.

    // case 1:
    // class에 대해서 함수 포인터를 정의해보자.
    // normal memeber function 의 함수 포인터 정의
    int (simple8_11:: * fptr1)() = &simple8_11::getValue_normal;
    // 여기서 getValue_normal이라는 함수는 메모리 한곳에 정의되어 있다.
    // 특정 instance와 연결해줘야 실행이 된다.
    cout <<"(sim2.*fptr1)(): " <<(sim2.*fptr1)() << endl;
    // non static member function은 instance에 종속이 되어 있는 형태다.
    // 그래서 (sim2.*fptr1)() 현태로 함수 포인터가 동작한다.

    // case 2:
    // static memeber function 의 함수 포인터 정의
    int (/*simple8_11:: */* fptr2)() = &simple8_11::getValue;
    // 특정 instance와 연결안해줘도 실행이 된다. 
    // static의 특성 떄문에 그렇다.
    cout << "(sim2.*fptr2)(): " << (*fptr2)() << endl;
}