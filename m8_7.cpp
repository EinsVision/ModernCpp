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
		// this : 객체의 자기 자신의 주소를 리턴한다.
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
	// 8.7 this 포인터와 연쇄 호출 (chaining member function)
	simple sim1(1); // 보이지 않는 pointer가 내부적으로 들어가있다.
	simple sim2(2); // 그것은 this pointer이다. 

	sim1.setID(10); // 여기서 setID() 는 하나밖에 없을 것이다. 
	sim1.getID();   // 그럼 어떻게 구분할까?
	// setID() getID() 함수는 모든 인스턴스가 공유를 해서 사용하는 것이다.
	// 개념적으로, this pointer가 들어가서 호출되는 것이다. 
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
