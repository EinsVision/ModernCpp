#include "projects.h"

template<class T>
class A137
{
private:
	T m_value;

public:
	A137(const T& input)
		: m_value(input)
	{

	}
	void print()
	{
		cout << m_value << endl;
	}
};

// pointer인 경우 다르게 동작 시키고 싶을 때가 있다.
template<class T>
class A137<T*>
{
private:
	T* m_value;

public:
	A137(T* input)
		: m_value(input)
	{

	}
	void print()
	{
		cout << *m_value << endl;
	}
};

void Projects_13::m13_7()
{
	// 13.7 포인터에 대한 템플릿 특수화
	
	A137<int> a_int(123);
	a_int.print();

	int temp = 456;
	A137<int*> a_int_ptr(&temp);
	a_int_ptr.print();

}

