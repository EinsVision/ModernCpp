#include "projects.h"

class Base129
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Dervied129: public Base129
{
public:
	int m_j = 1;
	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void printObject(Base129& b)
{
	b.print();
}

void printObjectSlicing(Base129 b)
{
	b.print();
}

void Projects_12::m12_9()
{
	// 12.9 ��ü �߸� object slicing �� reference wrapper
	Dervied129 d;

	Base129& b = d; // �������� �����ȴ�.
	d.m_j = 3;
	d.m_i = 5;
	b.print();
	printObject(b);
	printObjectSlicing(b);

	Base129 b_os = d; // & ���� ������ �������� �������� �ʴ´�.
	// ��ü �߸� ������ �߻��ȴ�. 
	//printObject(b_os);
	cout << endl;

	// vector�� ��츦 ����.
	Base129		b_vec;
	Dervied129	d_vec;
	vector<Base129*> my_vec; // OS�� �����͸� ���� �ذ�ȴ�.
	my_vec.push_back(&b_vec);
	my_vec.push_back(&d_vec); // Object Slicing�� �߻��Ѵ�.

	for (auto& ele : my_vec)
	{
		ele->print();
	}
	cout << endl;

	// Reference�� ���� ���� ��찡 �ִ�.
	Base129		b_vec_ref;
	Dervied129	d_vec_ref;
	// vector<Base129&> my_vec_ref; �̰� ó�� �۵��Ѵ�.
	// vector�� reference�� ����� �� ���µ� ���� Ű���带 ����ϸ� 
	// refernece�� ���� ó�� ����� �� �ִ�.
	vector<reference_wrapper<Base129>> my_vec_ref; // OS�� �����͸� ���� �ذ�ȴ�.
	my_vec_ref.push_back(b_vec_ref);
	my_vec_ref.push_back(d_vec_ref); // Object Slicing�� �߻��Ѵ�.

	for (auto& ele : my_vec_ref)
	{
		ele.get().print();
	}
}