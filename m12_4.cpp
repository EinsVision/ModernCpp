#include "projects.h"

class Base124
{
public:
	virtual ~Base124()
	{
		cout << "~Base124() " << endl;
	}
};

class Derived124 : public Base124
{
private:
	int* m_array;

public:
	Derived124(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived124() override
	{
		cout << "~Derived124() " << endl;
		delete[] m_array;
	}
};

void Projects_12::m12_4()
{
	// 12.4 가상 소멸자 virtual destructor
	Derived124 derived(5);
	// 소멸자는 1. ~Derived124() 2. ~Base124() 순서로 호출된다.
	// 소멸자 생성 순서는 생성자 생성 순서와 반대이다.

	Derived124* derived_vir = new Derived124(5);
	Base124* base_vir = derived_vir;
	delete base_vir; // 지울때도 base를 이용해 지우는 것이 일반적이다.
	// Derived124의 소멸자에 virtual를 사용하지 않으면 메모리 누수가 
	// 발생한다. 그래서 Base124 소멸자에 virtual을 사용해 주어야 한다.
}