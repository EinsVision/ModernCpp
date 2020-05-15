#include "projects.h"

class Base1210
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Dervied1 : public Base1210
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Dervied2 : public Base1210
{
public:
	string m_name = "Dr. Jung";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void Projects_12::m12_10()
{
	// 12.10 동적 형변환 Dynamic casting
	Dervied1 d1;
	Base1210* base = &d1;

	auto* base_to_d1 = dynamic_cast<Dervied1*>(base);
	
	cout << "base_to_d1->m_j: "<<base_to_d1->m_j << endl;
	base_to_d1->m_j = 2048;
	cout << "d1.m_j: " << d1.m_j << endl;

	// 주의할 점
	auto* base_to_d2 = dynamic_cast<Dervied2*>(base);
	// auto* base_to_d2 = static_cast<Dervied2*>(base);
	// static_cast<> 사용가능하다.
	// 그러나 static_cast는 error를 잡아주지 않는다. 안되는 경우도
	// 되게 만드는 경우가 있다.
	// dynamic_cast는 Run time에 nullptr을 넣어서 error 처리를 하는
	// 장점이 있다.
	// dynamic_cast에 실패하면 base_to_d2에 nullptr을 넣는다.
	if (base_to_d2 != nullptr)
	{
		cout << "base_to_d2->m_name: " << base_to_d2->m_name << endl;
	}
	else
	{
		cout << "base_to_d2 is nullptr " << endl;
		cout << "dynamic_cast에 실패하면 base_to_d2에 nullptr을 넣는다. " << endl;
	}
	
}