#include "projects.h"

class simple8_9
{
public:
	int value = 0;

	void setValue(int input_value) /*const*/ 
	{// 여기에 const를 붙이는 것은 불가능하다.
		value = input_value;
	}

	int getValue() 
	{
		return value;
	}

	int getValue_const() const
	{ // 이 함수의 의미는 member 변수의 값을 바꾸지 않는다는 의미가 있다.
	  // 이렇게 const로 막을 수 있는 함수는 모두 막아 놓자. 그래야 
	  // 디버깅에 유리하다. 그리고 실수를 줄일 수 있다.
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
	{// 여기에 const를 붙이는 것은 불가능하다.
		value = input_value;
	}

	int getValue()
	{
		return value;
	}

	int getValue_const() const
	{ // 이 함수의 의미는 member 변수의 값을 바꾸지 않는다는 의미가 있다.
	  // 이렇게 const로 막을 수 있는 함수는 모두 막아 놓자. 그래야 
	  // 디버깅에 유리하다. 그리고 실수를 줄일 수 있다.
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


// void print(simple8_9_1 sp) // 여기서 한번더 constructor가 생성되어야 
void print(const simple8_9_1& sp) // 이렇게 하면 copy construcotr 실행 X
{ // 할 것 같은데, 안되었다. 그 이유는 copy constructor가 있기 때문이다.
	cout << sp.value << endl;
	cout <<"simple8_9_1 address in print(): "<< &sp << endl;
	cout << "Print() called" << endl;
}

void Projects_8::m8_9()
{
	// 8.9 클래스와 const
	// const를 사용하는 것은 변수를 상수로 만들 때 사용한다.
	const simple8_9 sim; // simple8_9라는 인스턴스를 만든다.
	// " object = 변수 = 인스턴스 " 모두 같은 말이다.
	//sim.setValue(4);

	cout << sim.getValue_const() << endl;

	// setValue()와 getValue() 모두 const를 붙일 수 없다. 
	// 그 이유는 member 변수가 const인지 아닌지에 따라 다르다.

	simple8_9_1 sim2;
	cout << "simple8_9_1 address in print(): " << &sim2 << endl;
	print(sim2); // 여기서 왜 construtor가 한번밖에 생성되지 않았을까?
	// 바로 copy constructor가 있기 때문이다.

	sim2.getString() = "10"; // 아래 인스턴스의 getString()와 같아 보이지만
	// 다른 함수이다. 
	cout << sim2.getString() << endl;
	const simple8_9_1 sim3;
	sim3.getString();
}