#include "projects.h"

class simple
{
private:
	int id;
public:
	simple(int id_in)
	{
		this->setID(id_in);
		// setID(id_in);
		// this : ��ü�� �ڱ� �ڽ��� �ּҸ� �����Ѵ�.
		cout << "This: " << this << endl;
	}

	void setID(int id_in)
	{
		id = id_in;
	}

	int getID()
	{
		return id;
	}
};

class Cal
{
private:
	int value;

public:
	Cal(int init_value)
		:value(init_value)
	{

	}

	void add(int input_value)
	{
		value += input_value;
	}

	void minus(int input_value)
	{
		value -= input_value;
	}

	void mul(int input_value)
	{
		value *= input_value;
	}

	Cal& add_ref(int input_value)
	{
		value += input_value;
		return *this;
	}

	Cal& minus_ref(int input_value)
	{
		value -= input_value;
		return *this;
	}

	Cal& mul_ref(int input_value)
	{
		value *= input_value;
		return *this;
	}

	void print()
	{
		cout << value << endl;
	}
};

void Projects_8::m8_7()
{
	// 8.7 this �����Ϳ� ���� ȣ�� (chaining member function)
	simple sim1(1); // ������ �ʴ� pointer�� ���������� ���ִ�.
	simple sim2(2); // �װ��� this pointer�̴�. 

	sim1.setID(10); // ���⼭ setID() �� �ϳ��ۿ� ���� ���̴�. 
	sim1.getID();   // �׷� ��� �����ұ�?
	// setID() getID() �Լ��� ��� �ν��Ͻ��� ������ �ؼ� ����ϴ� ���̴�.
	// ����������, this pointer�� ���� ȣ��Ǵ� ���̴�. 
	sim2.setID(20);
	sim2.getID(); 

	cout << "sim1: " << &sim1 << endl;
	cout << "sim2: " << &sim2 << endl;

	Cal cal1(3);
	cal1.add(10);
	cal1.minus(2);
	cal1.mul(3);
	cal1.print();

	// chaining member function
	Cal cal2(3);
	cal2.add_ref(10).minus_ref(2).mul_ref(3).print();
}
