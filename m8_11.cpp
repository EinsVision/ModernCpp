#include "projects.h"

class simple8_11
{
public:
    class _init
    {
    public:
        _init() // inner class�� ����ϸ� static ���� �ʱ�ȭ�� �����ϴ�.
        {
            value = 1234;
        }
    };
private:
    static int value;
    // value�� public�� ��� ���� class�� ��� instance�� ������ �����ϴ�. 
    // �ּҰ� �ϳ����� ��� �����Ѵ�.
    // static int value�� �Ǹ� ���� ���� instance���� �ϳ��� �ּҸ� ����
    // �ȴ�.
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
        // �̷��� static member function�� this pointer ��� ����
        // �� ������ static member variable�� Ư�� instance�� ��������
        // �ʾҴ� �� ó��, this pointer�� ����� �� ����.
       
        // return m_value;
        // �̷��� �Ϲ����� member ������ ������ �� ����.
        // ��, this�� �����ϴ� ��� ���� ����� �� ����.
        // �� ������ static member variable�� Ư�� instance�� ��������
        // �ʾҴ� �� ó��, this pointer�� ����� �� ����.
    }
    int getValue_normal()
    {
        return this->value;
        // Ư�� instance�� �ּҸ� �޾ƴٰ� �� instance�� �����ִ� 
        // �ɹ� �������� ����ϰڴٴ� ���̴�.
    }
};

int simple8_11::value = 1;
simple8_11::_init simple8_11::s_initailization;


void Projects_8::m8_11()
{
    // 8.11 ���� ��� �Լ� (static member function)

    // cout << "simple8_11::value: " << simple8_11::value << endl; 
    // value�� private���� �����ϸ� �� �̻� �ٷ� ������ ���� �ʴ´�.
    // �׷��� ���� ��� �Լ� (static member function)�� �ʿ��ϴ�.
    // Ư�� instance�� ��� ��� ������ ������ �����߾���. 
    // Ư�� instance�� ������� ��� ������ ������ �� �ִ� �Լ� ������ ����
    // �׷��� ���� ��� �Լ��� �����Ѵ�. �׷��� �Ʒ��� ���� ���� �����ϴ�.
    cout << simple8_11::getValue() << endl;
    // value�� private���� �����ص� getValue()�� ���� ������ �����ϴ�.

    simple8_11 sim;

    /*cout << sim.value<< " address: "<<&sim.value << endl;*/
    // value�� private���� �����ϸ� �� �̻� �ٷ� ������ ���� �ʴ´�.
    // �׷��� ���� ��� �Լ� (static member function)�� �ʿ��ϴ�.

    cout << sim.getValue() << endl;

    simple8_11 sim1, sim2;

    // �Լ� �����Ϳ� ���� �����غ���.

    // case 1:
    // class�� ���ؼ� �Լ� �����͸� �����غ���.
    // normal memeber function �� �Լ� ������ ����
    int (simple8_11:: * fptr1)() = &simple8_11::getValue_normal;
    // ���⼭ getValue_normal�̶�� �Լ��� �޸� �Ѱ��� ���ǵǾ� �ִ�.
    // Ư�� instance�� ��������� ������ �ȴ�.
    cout <<"(sim2.*fptr1)(): " <<(sim2.*fptr1)() << endl;
    // non static member function�� instance�� ������ �Ǿ� �ִ� ���´�.
    // �׷��� (sim2.*fptr1)() ���·� �Լ� �����Ͱ� �����Ѵ�.

    // case 2:
    // static memeber function �� �Լ� ������ ����
    int (/*simple8_11:: */* fptr2)() = &simple8_11::getValue;
    // Ư�� instance�� ��������൵ ������ �ȴ�. 
    // static�� Ư�� ������ �׷���.
    cout << "(sim2.*fptr2)(): " << (*fptr2)() << endl;
}