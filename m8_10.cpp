#include "projects.h"

class simple8_10
{
public:
    static int value;
    static const int value2 = 1;
    static constexpr int value3 = 2; // ������ Ÿ�ӿ� �����Ǿ�� �Ѵ�.
};

int simple8_10::value = 1; // define in cpp file !!!! 
// static�� header file�� �������� �ʴ´�. 

int generateID()
{
    static int s_id = 0;
    return ++s_id;
}

void Projects_8::m8_10()
{
	//  8.10 ���� ��� ���� (static member variable)
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << endl;
    
    cout << &simple8_10::value << " " << simple8_10::value << endl;
    // �� �� ���� simple8_10 instance�� ������ �ʾҴµ� value�� 
    // �ּҸ� ������ �ִ�. �̰��� static �����̱� ������ ������ ���̴�.

    simple8_10 st1;
    simple8_10 st2;
    st1.value = 2; // static int value; ���� static���� ���� �����ϸ�
    // ����Ե� �ٸ� instance������ int value�� ���� �ּҸ� ������.
    cout << &st1.value << " " << st1.value << endl;
    cout << &st2.value << " " << st2.value << endl;
    cout << endl; 

    cout << &st1.value2 << " " << st1.value2 << endl;
    cout << &st2.value2 << " " << st2.value2 << endl;
    simple8_10::value = 1024; 

    cout << &simple8_10::value << " " << simple8_10::value << endl;
}