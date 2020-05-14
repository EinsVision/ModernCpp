#include "projects.h"

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : protected Base
{
public:
	Derived()
	{
		Base::m_public = 11;
		Base::m_protected = 22; // 자식 class에서는 부모 class의 멤버 접근가능
	}
};

void Projects_11::m11_5()
{
	// 11.5 상속과 접근 지정자
	Base base;
	base.m_public = 5;
	// base.m_protected = 6; // class 외부에서 접근 불가능하다.
	// base.m_private = 7;   // class 외부에서 접근 불가능하다.
	cout << base.m_public << endl;

	Derived dr;
	// dr.m_public = 5; // public 마저도 멤버변수 접근이 불가능하다.
	// dr.m_protected = 6; // class에서는 멤버변수 접근이 가능하다.
}