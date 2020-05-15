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
	// 12.4 ���� �Ҹ��� virtual destructor
	Derived124 derived(5);
	// �Ҹ��ڴ� 1. ~Derived124() 2. ~Base124() ������ ȣ��ȴ�.
	// �Ҹ��� ���� ������ ������ ���� ������ �ݴ��̴�.

	Derived124* derived_vir = new Derived124(5);
	Base124* base_vir = derived_vir;
	delete base_vir; // ���ﶧ�� base�� �̿��� ����� ���� �Ϲ����̴�.
	// Derived124�� �Ҹ��ڿ� virtual�� ������� ������ �޸� ������ 
	// �߻��Ѵ�. �׷��� Base124 �Ҹ��ڿ� virtual�� ����� �־�� �Ѵ�.
}