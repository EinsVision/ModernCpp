#include "projects.h"

class simple8_9
{
public:
	int value = 0;

	void setValue(int input_value) /*const*/ 
	{// ���⿡ const�� ���̴� ���� �Ұ����ϴ�.
		value = input_value;
	}

	int getValue() 
	{
		return value;
	}

	int getValue_const() const
	{ // �� �Լ��� �ǹ̴� member ������ ���� �ٲ��� �ʴ´ٴ� �ǹ̰� �ִ�.
	  // �̷��� const�� ���� �� �ִ� �Լ��� ��� ���� ����. �׷��� 
	  // ����뿡 �����ϴ�. �׸��� �Ǽ��� ���� �� �ִ�.
		return value;
	}

};

class simple8_9_1
{
public:
	int value = 0;
	string str_value = "default";

	simple8_9_1()
	{
		cout << "Constructor!" << endl;
	}

	simple8_9_1(const simple8_9_1& st_in)
	{ // copy constructor!! 
		value = st_in.value;
		cout << "Copy Constructor!" << endl;
	}

	void setValue(int input_value) /*const*/
	{// ���⿡ const�� ���̴� ���� �Ұ����ϴ�.
		value = input_value;
	}

	int getValue()
	{
		return value;
	}

	int getValue_const() const
	{ // �� �Լ��� �ǹ̴� member ������ ���� �ٲ��� �ʴ´ٴ� �ǹ̰� �ִ�.
	  // �̷��� const�� ���� �� �ִ� �Լ��� ��� ���� ����. �׷��� 
	  // ����뿡 �����ϴ�. �׸��� �Ǽ��� ���� �� �ִ�.
		return value;
	}

	const string& getString() const
	{
		cout << "const string& getString() const" << endl;
		return str_value;
	}

	string& getString()
	{
		cout << "string& getString()" << endl;
		return str_value;
	}
};


// void print(simple8_9_1 sp) // ���⼭ �ѹ��� constructor�� �����Ǿ�� 
void print(const simple8_9_1& sp) // �̷��� �ϸ� copy construcotr ���� X
{ // �� �� ������, �ȵǾ���. �� ������ copy constructor�� �ֱ� �����̴�.
	cout << sp.value << endl;
	cout <<"simple8_9_1 address in print(): "<< &sp << endl;
	cout << "Print() called" << endl;
}

void Projects_8::m8_9()
{
	// 8.9 Ŭ������ const
	// const�� ����ϴ� ���� ������ ����� ���� �� ����Ѵ�.
	const simple8_9 sim; // simple8_9��� �ν��Ͻ��� �����.
	// " object = ���� = �ν��Ͻ� " ��� ���� ���̴�.
	//sim.setValue(4);

	cout << sim.getValue_const() << endl;

	// setValue()�� getValue() ��� const�� ���� �� ����. 
	// �� ������ member ������ const���� �ƴ����� ���� �ٸ���.

	simple8_9_1 sim2;
	cout << "simple8_9_1 address in print(): " << &sim2 << endl;
	print(sim2); // ���⼭ �� construtor�� �ѹ��ۿ� �������� �ʾ�����?
	// �ٷ� copy constructor�� �ֱ� �����̴�.

	sim2.getString() = "10"; // �Ʒ� �ν��Ͻ��� getString()�� ���� ��������
	// �ٸ� �Լ��̴�. 
	cout << sim2.getString() << endl;
	const simple8_9_1 sim3;
	sim3.getString();
}