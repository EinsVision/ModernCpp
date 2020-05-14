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
		Base::m_protected = 22; // �ڽ� class������ �θ� class�� ��� ���ٰ���
	}
};

void Projects_11::m11_5()
{
	// 11.5 ��Ӱ� ���� ������
	Base base;
	base.m_public = 5;
	// base.m_protected = 6; // class �ܺο��� ���� �Ұ����ϴ�.
	// base.m_private = 7;   // class �ܺο��� ���� �Ұ����ϴ�.
	cout << base.m_public << endl;

	Derived dr;
	// dr.m_public = 5; // public ������ ������� ������ �Ұ����ϴ�.
	// dr.m_protected = 6; // class������ ������� ������ �����ϴ�.
}