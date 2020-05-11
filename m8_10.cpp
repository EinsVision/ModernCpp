#include "projects.h"

class simple8_10
{
public:
    static int value;
    static const int value2 = 1;
    static constexpr int value3 = 2; // 컴파일 타임에 결정되어야 한다.
};

int simple8_10::value = 1; // define in cpp file !!!! 
// static은 header file에 정의하지 않는다. 

int generateID()
{
    static int s_id = 0;
    return ++s_id;
}

void Projects_8::m8_10()
{
	//  8.10 정적 멤버 변수 (static member variable)
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << endl;
    
    cout << &simple8_10::value << " " << simple8_10::value << endl;
    // 위 와 같이 simple8_10 instance가 생기지 않았는데 value는 
    // 주소를 가지고 있다. 이것은 static 변수이기 때문에 가능한 것이다.

    simple8_10 st1;
    simple8_10 st2;
    st1.value = 2; // static int value; 으로 static으로 변수 선언하면
    // 놀랍게도 다른 instance이지만 int value가 같은 주소를 가진다.
    cout << &st1.value << " " << st1.value << endl;
    cout << &st2.value << " " << st2.value << endl;
    cout << endl; 

    cout << &st1.value2 << " " << st1.value2 << endl;
    cout << &st2.value2 << " " << st2.value2 << endl;
    simple8_10::value = 1024; 

    cout << &simple8_10::value << " " << simple8_10::value << endl;
}