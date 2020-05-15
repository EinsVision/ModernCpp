#include "projects.h"

class A // 상속 구조에서 가장 중요하다. 가상 함수에 영향을 주는 class이다.
{
public:
	virtual void print() // virtual 함수가 있을 경우 상속된 class의 
	{                    // overriding된 함수가 있을 경우 상속된
						 // 함수에서 print()가 실행된다.
		cout << "A " << endl;
	}
};

class B : public A
{
public:
	/*virtual*/ void print() // virtual void print() 인 것으로 본다.
	{
		cout << "B " << endl;
	}
};

class C : public B
{
public:
	/*virtual*/ void print() // virtual void print() 인 것으로 본다.
	{
		cout << "C " << endl;
	}
};

class D : public C
{
public:
	/*virtual*/ void print() // virtual void print() 인 것으로 본다.
	{
		cout << "D " << endl;
	}
};

void Projects_12::m12_2()
{
	// 12.2 가상 함수와 다형성 virtual functions, polymorphism
	// 실행 시간이 오래 걸린다. 왜냐하면 class를 타고 타고 실행하는 
	// 형태라서 프로그램 실행이 오래걸리는 단점이 있다. 
	A a;
	a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();

	cout << endl;

	A& ref = b;     //A* ptr = &b; // 똑같다.
	ref.print();
	// virtual 사용 X, 여기서 A가 나온다. b가 a 인 것 처럼 작동하고 있다.

	B& ref1 = c;
	ref1.print();
	// virtual 사용 X, 여기서 A가 나온다. c가 a 인 것 처럼 작동하고 있다.
	// 여기서 B class에 virtual을 사용하지 않았지만 결과는 C가 나온다.
	// 그 이유는 상위 class A가 virtual로 선언되어 있어서 자식 class들도 
	// overriding 된 것으로 보기 때문이다. 하지만 관습적으로 모두 virtual
	// 선언을 하는 것이 디버깅에 좋다.
	A& ref2 = d;
	ref2.print();
	// virtual 사용 X, 여기서 A가 나온다. d가 a 인 것 처럼 작동하고 있다.

}