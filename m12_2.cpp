#include "projects.h"

class A // ��� �������� ���� �߿��ϴ�. ���� �Լ��� ������ �ִ� class�̴�.
{
public:
	virtual void print() // virtual �Լ��� ���� ��� ��ӵ� class�� 
	{                    // overriding�� �Լ��� ���� ��� ��ӵ�
						 // �Լ����� print()�� ����ȴ�.
		cout << "A " << endl;
	}
};

class B : public A
{
public:
	/*virtual*/ void print() // virtual void print() �� ������ ����.
	{
		cout << "B " << endl;
	}
};

class C : public B
{
public:
	/*virtual*/ void print() // virtual void print() �� ������ ����.
	{
		cout << "C " << endl;
	}
};

class D : public C
{
public:
	/*virtual*/ void print() // virtual void print() �� ������ ����.
	{
		cout << "D " << endl;
	}
};

void Projects_12::m12_2()
{
	// 12.2 ���� �Լ��� ������ virtual functions, polymorphism
	// ���� �ð��� ���� �ɸ���. �ֳ��ϸ� class�� Ÿ�� Ÿ�� �����ϴ� 
	// ���¶� ���α׷� ������ �����ɸ��� ������ �ִ�. 
	A a;
	a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();

	cout << endl;

	A& ref = b;     //A* ptr = &b; // �Ȱ���.
	ref.print();
	// virtual ��� X, ���⼭ A�� ���´�. b�� a �� �� ó�� �۵��ϰ� �ִ�.

	B& ref1 = c;
	ref1.print();
	// virtual ��� X, ���⼭ A�� ���´�. c�� a �� �� ó�� �۵��ϰ� �ִ�.
	// ���⼭ B class�� virtual�� ������� �ʾ����� ����� C�� ���´�.
	// �� ������ ���� class A�� virtual�� ����Ǿ� �־ �ڽ� class�鵵 
	// overriding �� ������ ���� �����̴�. ������ ���������� ��� virtual
	// ������ �ϴ� ���� ����뿡 ����.
	A& ref2 = d;
	ref2.print();
	// virtual ��� X, ���⼭ A�� ���´�. d�� a �� �� ó�� �۵��ϰ� �ִ�.

}