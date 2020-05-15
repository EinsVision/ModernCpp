#include "projects.h"

class AA
{
public:
	virtual void print(int x)
	{            
		cout << "A " << endl;
	}
};

class BB : public AA
{
public:
	// virtual void print(short x)  // 이 경우 문제가 된다.
	virtual void print(int x) override // override 하려면, 꼭 써라.  
	{ // 미리 compile error를 막아주는 기능을한다. 
		cout << "B " << endl;
	}
};

class CC : public BB
{
public:
	virtual void print(int x) final
	{
		cout << "C " << endl;
	}
};

class DD : public CC
{
public:
	/*virtual void print(int x)  // Class C에서 final 선언으로 인해
	{							 // 더 이상 overriding되지 않는다.
		cout << "D " << endl;
	}*/
};

class A123
{
public:
	void print()
	{
		cout << "A" << endl;
	}

	virtual A123* getThis() 
	{
		cout << "A123 getThis()" << endl;
		return this;
	}
};

class B123 : public A123
{
public:
	void print()
	{
		cout << "B" << endl;
	}

	virtual B123* getThis()
	{
		cout << "B123 getThis()" << endl;
		return this;
	}
};

void Projects_12::m12_3()
{
	// 12.3 override, final, 공변 반환값 covariant
	AA a;
	BB b;

	AA& ref = b;
	ref.print(1);
	
	cout << endl;

	A123 a123;
	B123 b123;

	A123& ref_123 = b123;
	b123.getThis()->print();
	ref_123.getThis()->print();
	// B123 class의 pointer를 return해 주어도 그것을 다시 A123 class의
	// pointer로 바꾼 다음에 print()함수를 호출하는 구조이다. 

	// print()함수는 가상 함수가 아니라 일반 멤버 함수이다.
	// 그러므로 A123 클래스의 print() 함수가 출력이 되는 것이다.

	cout << typeid(b123.getThis()).name() << endl;
	cout << typeid(ref_123.getThis()).name() << endl;
}