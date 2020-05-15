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
	// virtual void print(short x)  // �� ��� ������ �ȴ�.
	virtual void print(int x) override // override �Ϸ���, �� ���.  
	{ // �̸� compile error�� �����ִ� ������Ѵ�. 
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
	/*virtual void print(int x)  // Class C���� final �������� ����
	{							 // �� �̻� overriding���� �ʴ´�.
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
	// 12.3 override, final, ���� ��ȯ�� covariant
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
	// B123 class�� pointer�� return�� �־ �װ��� �ٽ� A123 class��
	// pointer�� �ٲ� ������ print()�Լ��� ȣ���ϴ� �����̴�. 

	// print()�Լ��� ���� �Լ��� �ƴ϶� �Ϲ� ��� �Լ��̴�.
	// �׷��Ƿ� A123 Ŭ������ print() �Լ��� ����� �Ǵ� ���̴�.

	cout << typeid(b123.getThis()).name() << endl;
	cout << typeid(ref_123.getThis()).name() << endl;
}